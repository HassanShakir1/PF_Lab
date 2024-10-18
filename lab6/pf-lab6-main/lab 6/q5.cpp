#include<stdio.h>
int main(){
	int a,b=1,c=0;
	printf("Enter the number:");
	scanf("%d",&a);
	while(b<=a){
		if(a%b==0){
			c++;
		}
		b++;		
}
	if(c==2){
		printf("The number is prime\n");
	}
	else{
		printf("The number is not prime");
	}
	return 0;
}