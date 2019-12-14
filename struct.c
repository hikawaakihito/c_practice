#include <stdio.h>
#include <stdlib.h>
#include "./header.h"


int main(void)
{
	people *p;
	p = (people *)malloc(sizeof(people));
	int i = 0;

	do{
		inputPeople(&p[i]);
		++i;
		p = (people *)realloc(p,sizeof(p) + sizeof(people));
	}while(p[i].age != -1);

	for(i = 0;i < ((sizeof(p) / sizeof(p[0])) - 1);i++){
		showPeople(p[i]);
	}

	return 0;
}

		
