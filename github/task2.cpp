#include<stdio.h>
int main(void){
	int unit ;
	float bill=0;
	printf("Enter units : ");
	scanf("%d",&unit);
	if(unit<=30){
		bill=unit*0.60;
	}else if(unit<=110){
		bill=18+((unit-30)*0.85);
	}else if(unit<=210){
		bill=86+(unit-110)*1.30;
	}else{
		bill= 216+(unit-210)*1.60;
	}
	bill=(bill*115)/100;
	printf("\n Total bill is %f",bill);
	return 0;
}
