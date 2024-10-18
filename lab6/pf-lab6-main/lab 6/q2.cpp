#include<stdio.h>
int main(){
	int a;
	printf("Enter a number:");
		scanf("%d",&a);
		while(a>=1){
			if(a%2==0){
				printf("%d\n",a);
				a--;
			}
			else{
				a--;
			}
			
		}
	return 0;
}