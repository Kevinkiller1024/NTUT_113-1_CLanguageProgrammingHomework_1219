#include <stdio.h>
#include <stdlib.h>

int main(void){

	FILE* fptrl, * fptr2;
	char ch;

	fptrl = fopen("./welcome.txt", "r");
	fptr2 = fopen("./output.txt", "w");

	if ((fptrl != NULL) && (fptr2 != NULL)){
		while ((ch = getc(fptrl)) != EOF)
			putc(ch, fptr2);
		fclose(fptrl);
		fclose(fptr2);
		printf("檔案複製完成!!\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	system("pause");
	return 0;
}