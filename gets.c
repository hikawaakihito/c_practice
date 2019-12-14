#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[12], *pch;
	int val;

	fgets(str,sizeof(str),stdin);
	printf("%d\n",strlen(str));

	puts(str);

	val = atoi(str);
	printf("%d\n",val * val);
	printf("%d\n",strlen(str));

	pch = strtok(str,", \t\n");
	while(pch != NULL){
		printf("%s\n",pch);
		pch = strtok(NULL,", \t\n");
	}

	return 0;
}
