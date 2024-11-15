#include<stdio.h>
#include<string.h>
#define max 100
struct library{
	 char title[50];
	char author[50];
	int ISBN;
	int year;
	int status;
};
library book[max];
int count=0;
void add(){
	if(count>max){
		printf("\n library is full , no more book can be added \n ");
		return;
	}
	printf("Enter the title of the book: ");
	scanf("%s",book[count].title);
	printf("Enter the author of the book: ");
    scanf("%s", book[count].author);

    printf("Enter the ISBN of the book: ");
    scanf("%d", &book[count].ISBN);

    printf("Enter the publication year of the book: ");
    scanf("%d", &book[count].year);

    printf("Enter the availability of the book (1 for available 0 for not): ");
    scanf("%d", &book[count].status);

    count++;
    printf("Book added successfully!\n\n");
}
void display(){
	if(count==0){
		printf("\n No books to display");
		return;
	}
	for(int i=0;i<count;i++){
		printf("%d. Title: %s, Author: %s, ISBN: %d, Publication Year: %d, Availabilty : %d \n",
        i + 1, book[i].title, book[i].author, book[i].ISBN, book[i].year, book[i].status);
	}
	printf("\n");
}
void search(){
	char search[50];
	int found=0;
	printf("Enter the title or author to search for: ");
    scanf("%s", search);
    for(int i=0;i<count;i++){
    	if(strcmp(book[i].title,search)==0 || strcmp(book[i].author,search)==0){
    		printf("Found: Title: %s, Author: %s, ISBN: %d, Publication Year: %d, Availabilty : %d \n",
            book[i].title, book[i].author, book[i].ISBN, book[i].year, book[i].status);
		}
		found=1;
	}
	if(!found){
		printf("\ no book found ");
	}
	printf("\n");
}

void transection(){
	int a;
	char search[50];
	printf("\n Want to return or checkout (1 for return , 0 for checkout) : ");
	scanf("%d",&a);
	if(a==1){
		printf("Enter the title or author of the book: ");
        scanf("%s", search);
        for(int i=0;i<count;i++){
    	if(strcmp(book[i].title,search)==0 || strcmp(book[i].author,search)==0){
    	book[i].status=1;
    	printf("\n Book returned \n");
		}
	}
	}else if(a==0){
		printf("Enter the title or author of the book: ");
        scanf("%s", search);
        for(int i=0;i<count;i++){
    	if(strcmp(book[i].title,search)==0 || strcmp(book[i].author,search)==0){
    		if(book[i].status==0){
    			printf("\n Book already issued \n");
    			return;
			}else{
				book[i].status=0;
				printf("\n Book checkout \n");
				return;
			}
    	
	}
}
}
}
int main(void){
	int choice;
	do{
		 printf("library Management System\n");
        printf("1. Add a new book \n");
        printf("2. Display all books\n");
        printf("3. Search for a book by author or title\n");
        printf("4. Checkout or return\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice==1){
        	add();
		}else if(choice==2){
			display();
		}else if(choice ==3){
			search();
		}else if(choice==4){
			transection();
		}else{
			printf("\n Goodbye");
			return 0; 
		}
	}while(choice!=4);
}