#include <stdio.h>

void clear(void);

void minmax(int data[], int*, int*);

int main(void)
{
	int i = 0, data[10], min = 0, max = 0;

	printf("\n最大値と最小値を知るには、０～１００までの半角数字を１０回まで入力して下さい。９回以下入力する場合、最後の入力として-1を入力して下さい。\n");

	do{
		printf("%d番目の数字）",i + 1);
		scanf("%3d",&data[i]);
	       	while(data[i] > 100 || data[i] < -1){
			printf("%d番目の数字）※０～１００まで：",i + 1);
			scanf("%3d", &data[i]);
		}
		i++;
	}while(data[i-1] != -1);

	minmax(data, &min, &max);

	printf("\n最大値は）%d\n",max);
	printf("\n最小値は）%d\n",min);

	return 0;
}

void clear(void)
{
	while(getchar() != '\0');

	return;
}

void  minmax(int data[],int *min,int *max)
{
	int i = 0;
	
	*min = data[0];
	*max = data[0];

	while(data[i] != -1){
		if(*max < data[i]){
			*max = data[i];
		}
		if(*min > data[i]){
			*min = data[i];
		}
		i++;
	}

	return;
}
