#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Course{
	int courseID;
	char courseName[50];
	char Instructor[50];
	float credit;
};

struct Department{
	char name[50];
	struct Course *courses;
	int num_courses;
};

void add(struct Department *d){
	printf("\n Enter Department : ");
	scanf("%s",d->name);
	printf("\n Enter Number of courses : ");
	scanf("%d",&d->num_courses);
	d->courses=(struct Course*)malloc(d->num_courses * sizeof(struct Course));
	for(int i=0;i<d->num_courses;i++){
		printf("\n Add Details for course %d ",i+1);
		printf("\n Enter course %d ID : ",i+1);
		scanf("%d",&d->courses[i].courseID);
		printf("\n Enter Course %d Name : ",i+1);
		scanf("%s", d->courses[i].courseName);
		printf("\n Enter Course %d Instructor Name : ",i+1);
		scanf("%s",d->courses[i].Instructor);
		printf("\n Enter credit of course %d : ",i+1);
		scanf("%f",&d->courses[i].credit);
		printf("\n Course %d Added Succesfully ",i+1);
	}
	printf("\n Department Added Successfully");
}
void display(struct Department *d){
	printf("\n Department Details : ");
	printf("\n Department Name : %s",d->name);
	printf("\n Number of Courses : %d",d->num_courses);
	for(int i=0;i<d->num_courses;i++){
		printf("\n Course %d details : ",i+1);
		printf("\n Course %d ID : %d ",i+1,d->courses[i].courseID);
		printf("\n Course %d Name : %s",i+1,d->courses[i].courseName);
		printf("\n Course %d Instructor Name : %s ",i+1,d->courses[i].Instructor);
		printf("\n Course %d Credits : %.1f",i+1,d->courses[i].credit);
	}
}

void free(struct Department *d){
	free(d->courses);
}

int main(void){
	printf("Welcome To a University Course Enrollment System \n ");
	struct Department d;
	add(&d);
	display(&d);
	free(&d);
}
