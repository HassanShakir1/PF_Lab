#include<stdio.h>
int main(void){
	int cost;
	float total=0;
	printf("Enter cost : ");
	scanf("%d",&cost);
	if(cost<1500){
		total = (cost*93)/100;
	}else if(cost>=1500 && cost <=3000){
		total = (cost*88)/100;
	}else if(cost>=3000 && cost <=5000){
		total = (cost*78)/100;
	}else if(cost>5000){
		total = (cost*70)/100;
	}else printf("\n please enter a valid input");
	
	printf("Your total is : %f",total);
	return 0 ;
}
