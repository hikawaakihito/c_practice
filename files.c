#include <stdio.h>
#include <string.h>

typedef struct{
	int number;
	char name[64];
	int avscor;
}student;

void populate(student *data);

int main(void)
{
	student data[4];
	int i;
	FILE *testscores;
	
	populate(data);

	testscores = fopen("testscores.txt","w");

	fprintf(testscores,"番号,名前,テストの平均点\n");

	for(i = 0;i < 4;i++){
		fprintf(testscores,"%d,%s,%d\n",data[i].number,data[i].name,data[i].avscor);
	}

	return 0;
}	

void populate(student *data)
{
	int i;

	for(i = 0;i < 4;i++){
		data[i].number = i + 1;
		sprintf(data[i].name,"banana%d", i + 1);
		data[i].avscor = (i - 1) * 10;
	}

	return;
}
