#include<stdio.h>
#include<string.h>
#define max_cars 100
struct dealership{
	 char make[50];
    char model[50];
    int year;
    float price;
    int mileage;
};
dealership cars[max_cars];
int count=0;
void add(){
	if(count>max_cars){
		printf("\n dealership is full , no more car can be added \n ");
		return;
	}
	printf("Enter the make of the car: ");
	scanf("%s",cars[count].make);
	printf("Enter the model of the car: ");
    scanf("%s", cars[count].model);

    printf("Enter the year of the car: ");
    scanf("%d", &cars[count].year);

    printf("Enter the price of the car: ");
    scanf("%f", &cars[count].price);

    printf("Enter the mileage of the car: ");
    scanf("%d", &cars[count].mileage);

    count++;
    printf("Car added successfully!\n\n");
}
void display(){
	if(count==0){
		printf("\n No car to display");
		return;
	}
	for(int i=0;i<count;i++){
		printf("%d. Make: %s, Model: %s, Year: %d, Price: $%.2f, Mileage: %d miles\n",
        i + 1, cars[i].make, cars[i].model, cars[i].year, cars[i].price, cars[i].mileage);
	}
	printf("\n");
}
void search(){
	char search[50];
	int found=0;
	printf("Enter the make or model to search for: ");
    scanf("%s", search);
    for(int i=0;i<count;i++){
    	if(strcmp(cars[i].make,search)==0 || strcmp(cars[i].model,search)==0){
    		printf("Found: Make: %s, Model: %s, Year: %d, Price: $%.2f, Mileage: %d miles\n",
            cars[i].make, cars[i].model, cars[i].year, cars[i].price, cars[i].mileage);
		}
		found=1;
	}
	if(!found){
		printf("\ no car found ");
	}
	printf("\n");
}

int main(void){
	int choice;
	do{
		 printf("Car Dealership Management System\n");
        printf("1. Add a new car\n");
        printf("2. Display all cars\n");
        printf("3. Search for a car by make or model\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice==1){
        	add();
		}else if(choice==2){
			display();
		}else if(choice ==3){
			search();
		}else if(choice==4){
			printf("\n Goodbyee ");
		}else{
			printf("\n plz enter a valid input");
		}
	}while(choice!=4);
}
