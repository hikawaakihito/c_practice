#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int teststuff(void);

int main(void)
{
	int i;
	char last[13], first[13], full[26];
	
	/*teststuff();*/

	printf("\n名字を12字までの半角英字で入力して下さい：");

	scanf("%12s",last);

	while(getchar() != '\n');

	last[12] = '\0';

	printf("\n名前を12字までの半角英字で入力して下さい：");

	scanf("%12s",first);

	while(getchar() != '\n');

	first[12] = '\0';

	sprintf(full,"%s %s",last,first);

	printf("\n%s\n",full);

	for(i = 0;full[i] != '\0';i++);
	
	i = strlen(full);

	printf("\n%d\n",i);

	for(i = 0;i < strlen(last) + 1;i++){
		if(last[i] != first[i]) break;
	}

	if(i == strlen(last) + 1){
		printf("\n同じ\n");
	}else{
		printf("\n違う\n");
	}

	if(strcmp(last,first) == 0){
		printf("\n同じ\n");
	}else{
		printf("\n違う\n");
	}

	return 0;

}

int teststuff(void)
{
	char c = 'f', d = '4';
	int suuti = d - '0', suuti2, suuti3;
	char str[3] = {'H','I'};
	char str2[] = "HI", str3[20] = "167", str4[10], str5[] = "potato"   "chips", str6[20];

	printf("\n%c\n", c);

	printf("\n%c\n",c + 8);

	printf("\n%d\n",suuti);

	if(isdigit(d)){
		suuti2 = d - '0';
	}else{
		suuti2 = 0;
	}

	str2[1] = 'A';

	printf("\n%d\n",suuti2);

	printf("\n%s\n",str);

	printf("\n%s\n", str2);

	printf("\n%d\n", atoi(str3));

	strncpy(str4, str3, 1);

	str4[1] = '\0';

	printf("\n%s\n", str4);

	printf("\n%s\n", str5);

	strcat(str3, str5);

	printf("\n%s\n",str3);

	scanf("%20s",str6);

	while(getchar() != '\n');

	printf("\n%s\n",str6);

	return 0;

}
