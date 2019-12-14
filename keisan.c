#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define RADIAN(ARC) ((ARC) * 3.14159 / 180)

int main(void)
{
	double stature= 171.5;
	double distance = 500;
	double angle = 45;
	double tree;
	int i;
	static int flag;

	srand((unsigned int)time(NULL));

	printf("%d\n",abs(10));
	printf("%d\n",abs(-40));
	printf("%dの%d乗 = %f\n",6,-7,pow(6,-7));
	printf("√%d = %f\n",5,sqrt(5));

	tree = distance * tan(RADIAN(angle)) + stature;
	printf("%fm\n",tree / 100);
	
	for(i = 0;i < 10;i++){
	       	printf("%d\n",rand());
		printf("%d\n",(1 + (int)(rand() * (6 - 1 + 1.0) / (1.0 + RAND_MAX))));
	}


	return 0;
}
