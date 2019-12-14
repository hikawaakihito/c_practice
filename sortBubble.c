/*Bubble sortを行うプログラムです。*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sortBubble(char chararray[], int n);

/*実行時のコマンドラインオプションから整列したい文字列を読み込んで、ソート関数に渡す。入力される文字列は２５５個までの半角英数字だと想定する。「;」などの文字が文字列に入っていると、バッシュに認識されて、バッシュがプログラムの邪魔をすることがあります。出力は整列前の文字列、文字数、整列後の文字列です。*/
int main(int argc,char *argv[])
{
	char chararray[256];
		
	if(argc == 2){
		printf("実行時に一つだけのオプションとして整列したい２５５個までの半角英数字のみの文字列を入力して下さい。\n");
		strcpy(chararray,argv[1]);
		printf("整列前：%s\n",chararray);
		printf("文字数：%d\n",strlen(chararray));
		sortBubble(chararray,strlen(chararray));
		printf("整列後：%s\n",chararray);
	}else{
		printf("実行時に一つだけのオプションとして整列したい２５５個までの半角英数字のみの文字列を入力して下さい。\n");
		exit(0);
	}

	return 0;
}

/*ソート関数です。バブルソートを行って文字列をasciiの順番に並び替える。*/
void sortBubble(char chararray[],int n)
{
	int i, j, temp;

	for(i = 0;i < n - 1;i++){
		for(j = 0;j < n - 1;j++){
			if(chararray[j + 1] < chararray[j]){
				chararray[j + 1] = chararray[j + 1] + chararray[j];
				chararray[j] = chararray[j + 1] - chararray[j];
				chararray[j + 1] = chararray[j + 1] - chararray[j];
			}
		}
	}
	return;
}

/*「;」などの文字が文字列に入っていると、バッシュに認識されて、バッシュがプログラムの邪魔をすることがあります。*/
