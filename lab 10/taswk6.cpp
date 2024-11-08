#include<stdio.h>
#include<string.h>
void count(const char *name,int i){
	if(i>=0){
		printf("%c",name[i]);
		i-=1;
	}else{
		return;
	}
	count(name,i);
}
int main(void){
	char name[50];
	
	printf("Enter a string : ");
	fgets(name,50,stdin);
	name[strcspn(name, "\n")] = '\0';
	int i=strlen(name);
	printf("\n");
	count(name,i-1);
}