#include<stdio.h>
void count(int num,int i){
	if(i<=100){
		int calc=(num*i)/100;
		printf("\n %d percent = %d ",i,calc);
		i+=1;
	}else{
		return;
	}
	count(num,i);
}
int main(void){
	int num,i=1;
	printf("Enter number : ");
	scanf("%d",&num);
	count(num,i);
}