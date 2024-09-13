#include<stdio.h>
int main(void){
	int num1,num2;
	printf("Enter number 1 : ");
	scanf("%d",&num1);
	printf("\n Enter number 2 : ");
	scanf("%d",&num2);
	if(num1 > num2){
		if(num1 > 100){
			printf("\n number 1 is significantly larger : %d",num1);
		}else printf("\n number 1 is larger : %d",num1);
	}else if(num1 < num2){
		if(num1 < 0){
			printf("\n number 1 is negative and smaller : %d",num1);
		}else printf("\n number 1 is smaller : %d",num1);
	}else printf("\n both number are equal ");
	return 0;
}