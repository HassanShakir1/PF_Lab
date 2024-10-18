#include<stdio.h>
int main(){
	int a;
	do{
		printf("Enter a number:");
		scanf("%d",&a);
		if(a<0){
			printf("No\n");
		}
		else{
			printf("Yess!!!\n");
		}
		
	}
	while(a<0);
	return 0;
}