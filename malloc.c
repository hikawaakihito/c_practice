#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[64];
	int age;
       	char gender;
} person;

void input(person *p);

void output(person *p);

int main(void)
{
	int count = 0, i = 0, datasize = 5;
	person *p;
	p = (person *)malloc(sizeof(person) * datasize);
	if(p == NULL) exit(0);

	do{
		input(&p[count]);
		++count;
		if(count >= datasize){
		       datasize +=10;
	       	       p = (person *)realloc(p,sizeof(person) * datasize);
		}
	}while(p[count - 1].age != -1);
	
	for(i = 0;i < count - 1;i++){
		output(&p[i]);
	}

	free(p);

	return 0;
}

void input(person *p)
{
		printf("\n人物の名前を半角英字で入力して下さい：");
		scanf("%62s",p->name);
		while(getchar() != '\n');
		p->name[63] = '\0';
		printf("\n人物の年齢を半角数字で入力して下さい：");
		scanf("%d",&p->age);
		while(getchar() != '\n');
		if(p->age == -1) return;
		printf("\n人物の性別を半角英字のMかFで入力して下さい：");
		scanf("%c",&p->gender);
		while(getchar() != '\n');
		printf("\n");
	
	return;
}

void output(person *p)
{
	printf("%s: %d, %c\n",p->name,p->age,p->gender);

	return;
}
		
