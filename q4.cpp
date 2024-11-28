#include<stdio.h>
struct Phone{
	int area;
	int exhange;
	int number;
};
int main(void){
	struct Phone p[2];
	p[0]={212,767,8900};
	printf("Enter Area Code : ");
	scanf("%d",&p[1].area);
	printf("\n Enter Exhange : ");
	scanf("%d",&p[1].exhange);
	printf("\n Enter Number : ");
	scanf("%d",&p[1].number);
	printf("\n My number is : (%d) %d-%d",p[0].area,p[0].exhange,p[0].number);
	printf("\n Your number is : (%d) %d-%d",p[1].area,p[1].exhange,p[1].number);
}
