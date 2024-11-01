#include<stdio.h>
int main(void){
	int bolt,nut,wash,total=0;
	printf("Enter Number Of Bolts : ");
	scanf("%d",&bolt);
	printf("Enter Number Of Nut : ");
	scanf("%d",&nut);
	printf("Enter Number Of Wash : ");
	scanf("%d",&wash);
	total=bolt*5;
	total+=nut*3;
	total+=wash*1;
	printf("\n Number Of Bolts : %d",bolt);
	printf("\n Number Of Nuts : %d",nut);
	printf("\n Number Of Washers : %d",wash);
	if(nut<bolt && 	wash<bolt*2){
		printf("\n Check The Order : too few nut , too few washers");
	}else 	if(nut<bolt){
		printf("\n Check The Order : too few nut");
	}else 	if(wash<bolt*2){
		printf("\n Check The Order : too few washers");
	}else{
		printf("\n Check The Order : Order is OK");
	}
	printf("\n Total Cost  : %d",total);
}