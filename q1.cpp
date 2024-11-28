#include<stdio.Fh>

struct rectangle {
	float length;
	float width;
};

int check(float l,float w){
	if(l<0.0 || l>20.0 || w<0.0 ||w>20.0){
		return 0;
	}
	return 1;
}

float area (float l,float w){
	return l*w;
}
int main(void){
	float length,width;
	struct rectangle r1;
	printf("Enter length : ");
	scanf("%f",&r1.length);
	printf("\n Enter width : ");
	scanf("%f",&r1.width);
	int j=check(r1.length,r1.width);
	if(j==0){
		printf("\n Length and Width should ne greater then 0.0 and less then 20.0");
		return 0;
	}
	float a= area(r1.length,r1.width);
	printf("Area is : %.3f",a);
}

