#include<stdio.h>
int main(){
	int age;
	char city;
	printf("Enter Age \n");
	scanf("%d",&age);
	printf("\n Are you a pakistani (Y for yes and N for no) \n");
	scanf(" %c", &city);
	if(age>=18 && city=='Y'){
		printf("\n You are eiligle for vote");
	}else if(age>=18){
		printf("\n You are eiligle for vote");
	}else printf("\n You are not eiligle for vote");
}