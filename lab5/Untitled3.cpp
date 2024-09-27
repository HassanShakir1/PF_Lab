#include<stdio.h>
int main(){
	float per;
	printf("Enter Percentage \n");
	scanf("%f",&per);
	(per>=90)?printf("A"):(per>=80 && per<=89)?printf("B"):(per>=70 && per<=79)?printf("C"):(per>=60 && per<=69)?printf("D"):printf("F");
}