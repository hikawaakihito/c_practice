#ifndef INCLUDE_PEOPLE
#define INCLUDE_PEOPLE

typedef struct{
	char name[64];
	int age;
       	char sex;
} people;

/*
 *人の名前、年齢、性別を入力させて構造体変数pdataに代入する。
 **/

void inputPeople(people *data);

/*
 *人の名前、年齢、性別を表示する。
 **/

void showPeople(people data);

#endif
