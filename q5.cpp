#include<stdio.h>
#include<string.h>
struct Invoice{
	char number[50];
	char description[50];
	int quantity;
	float pricePerUnit;
};
void add(struct Invoice *in){
	printf("\n Enter Number : ");
	fgets(in->number,50,stdin);
	in->number[strcspn(in->number,"\n")]='\0';
	getchar();
	printf("\n Enter Description : ");
	fgets(in->description,50,stdin);
	in->description[strcspn(in->description,"\n")]='\0';
	printf("\n Enter Quantity : ");
	scanf("%d",&in->quantity);
	printf("\n Enter price per unit : ");
	scanf("%f",&in->pricePerUnit);
}
void display(struct Invoice *in){
	printf("\n Number : %s",in->number);
	printf("\n Desciption : %s",in->description);
	printf("\n Quantity : %d",in->quantity);
	printf("\n Price Per Unit : %.2f",in->pricePerUnit);
	printf("\n Invoice Amount : %.2f",in->quantity * in->pricePerUnit);
}
int main(void){
	struct Invoice i;
	printf("Welcome To Hardware Invoice Management System :)");
	add(&i);
	display(&i);
}
