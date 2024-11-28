	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	struct student {
    char stu_name[50];
    int id;
};

struct courses {
	char course_name[50];
    char instructor[50];
    struct student *students; 
    int num_students;       
};

struct department {
    char name[50];
    struct courses *course_list; 
    int num_courses;            
};
	void add( struct department *d){
		printf("Enter Department Name : ");
		scanf("%s",d->name);
		printf("\n Enter Number of courses : ");
		scanf("%d",&d->num_courses);
		d->course_list =(struct courses*)malloc(d->num_courses * sizeof(struct courses));
		for(int i=0;i<d->num_courses;i++){
			printf("\n Enter course %d name : ",i+1);
			scanf("%s",d->course_list[i].course_name);
			printf("\nEnter Instructor Name for Course %d: ", i + 1);
            scanf("%s", d->course_list[i].instructor);
            printf("Enter Number of Students in Course %d: ", i + 1);
            scanf("%d", &d->course_list[i].num_students);
            d->course_list[i].students=(struct student*)malloc(d->course_list[i].num_students * sizeof(struct student));
             for (int j = 0; j < d->course_list[i].num_students; j++) {
            printf("\nEnter Student %d Name: ", j + 1);
            scanf("%s", d->course_list[i].students[j].stu_name);
            printf("Enter Student %d ID: ", j + 1);
            scanf("%d", &d->course_list[i].students[j].id);
        }
		}
	}
	void display(struct department *d) {
    printf("\nDepartment Name: %s", d->name);
    for (int i = 0; i < d->num_courses; i++) {
    	printf("\n  Course %d course Name: %s", i + 1, d->course_list[i].course_name);
        printf("\n  Course %d Instructor: %s", i + 1, d->course_list[i].instructor);
        printf("\n  Students in Course %d:", i + 1);
        for (int j = 0; j < d->course_list[i].num_students; j++) {
            printf("\n    Student Name: %s, ID: %d", d->course_list[i].students[j].stu_name, d->course_list[i].students[j].id);
        }
    }
}
void freespace(struct department *d){
	for(int i=0;i<d->num_courses;i++){
		free(d->course_list[i].students);
	}
	free(d->course_list);
}
	int main(void){
		int n;
		printf("Welcome to university management system ");
		printf("\n Enter Number of department : ");
		scanf("%d",&n);
		struct department d[n];
		for(int i=0;i<n;i++){
			add(&d[i]);
		}
		for(int i=0;i<n;i++){
			display(&d[i]);
		}
		for(int i=0;i<n;i++){
			freespace(&d[i]);
		}
	}

