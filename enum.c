#include<stdio.h>

int oly(int*);

int main(void)
{
	int year, result = 0;

	printf("\n年：");
	scanf("%d",&year);

	result = oly(&year);

	switch(result){
		case 0:
			printf("無");
			break;
		case 1:
			printf("冬");
			break;
		case 2:
			printf("夏");
			break;
	}

	return 0;
}

int oly(int *y)
{
	enum{
		NONE,
		WINTER,
		SUMMER
	};

	if((*y % 2) == 0){
		if((*y % 4) == 0){
			return SUMMER;
		}
		return WINTER;
	}else{
		return NONE;
	}
}
