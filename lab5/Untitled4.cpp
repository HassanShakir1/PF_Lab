#include<stdio.h>
int main(){
	int total;
	char member;
	printf("Enter total \n");
	scanf("%d",&total);
	printf("M for member N for not a member \n");
	scanf(" %c",&member);
	(total>100 && member=='M')?printf("\n You are eligible for discount"):printf(" \n You are not eligible for discount");
}