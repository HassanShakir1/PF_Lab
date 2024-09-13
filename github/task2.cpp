#include<stdio.h>
int main(void){
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	switch(n){
		case 1 :
			printf("\n one");
			break;
		case 2 :
			printf("\n two");
			break;
		case 3 :
			printf("\n three");
			break;
		case 4 :
			printf("\n four");
			break;
		case 5 :
			printf("\n five");
			break;
		case 6 :
			printf("\n six");
			break;
		case 7 :
			printf("\n seven");
			break;
		case 8 :
			printf("\n eight");
			break;
		case 9 :
			printf("\n nime");
			break;
		case 10 :
			printf("\n ten");
			break;
		case 11 :
			printf("\n eleven");
			break;
		case 12 :
			printf("\n twelve");
			break;
		case 13 :
			printf("\n thirteen");
			break;
		case 14 :
			printf("\n fourteen");
			break;
		case 15 :
			printf("\n fifteen");
			break;
		case 16 :
			printf("\n sixteen");
			break;
		case 17 :
			printf("\n seventeen");
			break;
		case 18 :
			printf("\n eighteen");
			break;
		case 19 :
			printf("\n nineteen");
			break;
		case 20 :
			printf("\n twenty");
			break;
		default:
			if(n>20){
			printf("\n number is greater then 20");
		}else printf("\n number is negative");
	}
}