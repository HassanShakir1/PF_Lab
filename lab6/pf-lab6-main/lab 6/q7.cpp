#include<stdio.h>
int main(){
	int num,d,sum=0,originalnum;
	printf("Enter a number:");
	scanf("%d",&num);
	originalnum=num;
	while(num>0){
		d=num%10;
		sum = sum + d*d*d;
		num/=10;	
	}
	if(originalnum==sum){
		printf("The number %d is armstrong as %d is equal to %d",originalnum,originalnum,sum);
	}
	else{
		printf("The number %d is not armstrong %d is not equal to %d",originalnum,originalnum,sum);
	}
	return 0;
}