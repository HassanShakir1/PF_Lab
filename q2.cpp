#include<stdio.h>
#include<string.h>
int main(void){
	FILE *file;
	char filename[100],ch;
	printf("Enter File name : ");
	scanf("%s",filename);
	file=fopen(filename,"r");
	if(file==NULL){
		printf("\n Cannot read file \n ");
		return 0;
	}
	printf("\n File content : \n");
	while((ch=fgetc(file))!=EOF){
		putchar(ch);
	}
	fclose(file);
	return 0;
}

