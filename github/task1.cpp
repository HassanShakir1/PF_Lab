#include<stdio.h>
int main(void){
	int score;
	printf("Enter Score : ");
	scanf("%d",&score);
	if(score >= 90 && score <=100){
		printf("\n Score : %d grade : A",score);
	}else if(score >= 80 && score <=89){
		printf("\n Score : %d grade : B",score);
	}else if(score >= 70 && score <=79){
		printf("\n Score : %d grade : C",score);
	}else if(score >= 60 && score <=69){
		printf("\n Score : %d grade : D",score);
	}else if(score >= 0 && score <60){
		printf("\n Score : %d grade : F",score);
	}else printf("\n PLease Enter a valid number");
	return 0;
}