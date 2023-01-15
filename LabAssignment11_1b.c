#include <stdio.h>

struct student{
    char name[100];
    int roll;
    int marks;
};

int main(){
    struct student s1 = {"Dhruv", 1, 10};
    struct student s2 = {"Abhiraj", 2, 20};
    struct student s3 = {"Angad", 3, 30};

    printf("Student name: %s\nRoll number: %d\nMarks: %d\n", s1.name, s1.roll, s1.marks);
    printf("\n");
    printf("Student name: %s\nRoll number: %d\nMarks: %d\n", s2.name, s2.roll, s2.marks);
    printf("\n");
    printf("Student name: %s\nRoll number: %d\nMarks: %d\n", s3.name, s3.roll, s3.marks);
    
}