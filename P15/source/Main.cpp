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
		printf("�ɮ׽ƻs����!!\n");
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}