#include<stdio.h>
#include<string.h>
#define max 100
struct airport{
	int  flightNumber;
	 char departureCity[50];
	char arrivalCity[50];
	int departureTime;
	int arrivalTime;
	int availableSeats;
};
airport flight[max];
int count=0;
void add(){
	if(count>max){
		printf("\n Booking is full , no more flight can be added \n ");
		return;
	}
	printf("Enter the flightNumber of the flight : ");
    scanf("%d", &flight[count].flightNumber);
	printf("Enter the departureCity of the flight: ");
	scanf("%s",flight[count].departureCity);
	printf("Enter the arrivalCity of the flight: ");
    scanf("%s", flight[count].arrivalCity);

    printf("Enter the departureTime of the flight in hours: ");
    scanf("%d", &flight[count].departureTime);

    printf("Enter the arrivalTime of the flight in hours: ");
    scanf("%d", &flight[count].arrivalCity);

    printf("Enter the availableSeats of the flight : ");
    scanf("%d", &flight[count].availableSeats);

    count++;
    printf("Flight added successfully!\n\n");
}
void display(){
	if(count==0){
		printf("\n No flight to display");
		return;
	}
	for(int i=0;i<count;i++){
		printf("%d.FlightNumber : %d Departure City: %s, Arrival City: %s, Departure Time: %d, Arrival Time: %d, Available seats : %d \n",
        i + 1,flight[i].flightNumber, flight[i].departureCity, flight[i].arrivalCity, flight[i].departureTime, flight[i].arrivalTime, flight[i].availableSeats);
	}
	printf("\n");
}
void book(){
	int search;
	printf("Enter the flight number: ");
    scanf("%d", &search);
    for(int i=0;i<count;i++){
    	if(flight[i].flightNumber==search){
    		flight[i].availableSeats--;
    		printf("Flight Booked: FlightNumber : %d Departure City: %s, Arrival City: %s, Departure Time: %d, Arrival Time: %d, Available seats : %d \n",
            flight[i].flightNumber, flight[i].departureCity, flight[i].arrivalCity, flight[i].departureTime, flight[i].arrivalTime, flight[i].availableSeats);
            return;
		}
	}
	printf("\n");
}

void update(){
	int a ,b,c;
	printf("Enter the flight number: ");
    scanf("%d", &c);
	printf("\n Enter the departureTime of the flight in hours: ");
	scanf("%d",&a);
	printf("\n Enter the arrivalTime of the flight in hours: ");
	scanf("%d",&b);
	for(int i=0;i<count;i++){
    	if(flight[i].flightNumber==c){
    		flight[i].departureTime=a;
    		flight[i].arrivalTime=b;
    		printf("Flight Updated: FlightNumber : %d Departure City: %s, Arrival City: %s, Departure Time: %d, Arrival Time: %d, Available seats : %d \n",
            flight[i].flightNumber, flight[i].departureCity, flight[i].arrivalCity, flight[i].departureTime, flight[i].arrivalTime, flight[i].availableSeats);
            return;
		}
	}
    	
	}

int main(void){
	int choice;
	do{
		 printf("Flight Management System\n");
        printf("1. Add a new flight \n");
        printf("2. Display all flights\n");
        printf("3. Book a flight\n");
        printf("4. Update a flight\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice==1){
        	add();
		}else if(choice==2){
			display();
		}else if(choice ==3){
			book();
		}else if(choice==4){
			update();
		}else{
			printf("\n Goodbye");
			return 0; 
		}
	}while(choice!=4);
}