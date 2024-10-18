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
	int d=0,e=1,f;
	if(c==2){
		printf("The number is prime\n");
		printf("The fabionacci series of the number is:\n");
		for(int i=0;i<=a;i++){
			printf(" %d ",d);
			f=d+e;
			d=e;
			e=f;
			 
					}		
	}
	else{
		printf("The number is not prime");
	}
	return 0;
}
	