#include<stdio.h>
int main(){
	int a,b,c=0;
	printf("Enter a number:");
		scanf("%d",&a);
		for(b=1;b<=a;b++){
			c*=a;
		}
		printf("The factorial of the number is %d",c);
	
	
	
	
	
	
	
	return 0;
}