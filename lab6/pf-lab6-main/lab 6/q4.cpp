#include<stdio.h>
int main(){
	int a,b;
	do{
		printf("Enter a number:");
		scanf("%d",&a);
		b+=a;
		printf("%d\n",b);
	}
	while(a!=0);
	return b;
	
	
	
	
	
	
	
	
	return 0;
}