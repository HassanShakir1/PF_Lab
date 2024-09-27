#include<stdio.h>
int main(){
	int angles1,angles2,angles3;
	printf("Enter three angles \n");
	scanf("%d %d %d",&angles1,&angles2,&angles3);
	if(angles1+angles2+angles3 ==180 && angles1>=0 && angles2>=0 && angles3>=0){
		printf("This is a triangle");
	}else printf("This is not a triangle");
	
}