#include<stdio.h>
int main(){
	int number;
	printf("Enter number \n");
	scanf("%d",&number);
	if(!(number&1)){
		printf("\n Number is even");
	}else {
	printf("\n Number is odd");	
	}
}