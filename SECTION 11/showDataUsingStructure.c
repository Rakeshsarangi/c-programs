/*this program create data for 50 students and show total mark of each student and show the average mark of those students using structure*/
#include<stdio.h>
#include<conio.h>
typedef struct
{
    int Rollno;
    char name[30];
    int marksInSubject1,marksInSubject2,marksInSubject3,TotalMarks;
}Data;
void main()
{
    Data students[50];
    int i,grandTotal=0;
    float average;
    printf("this program create data for 50 students and show total mark of each student and show the average mark of those students using structure.\n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("enter student data\n");
    printf("==================\n");
    for(i=0;i<50;i++)
    {
        printf("roll no.of student=");
        scanf("%d",&students[i].Rollno);
        printf("Name of student:");
        scanf("%s",&students[i].name);
        printf("Marks in subject 1=");
        scanf("%d",&students[i].marksInSubject1);
        printf("Marks in subject 2=");
        scanf("%d",&students[i].marksInSubject2);
        printf("Marks in subject 3=");
        scanf("%d",&students[i].marksInSubject3);
        students[i].TotalMarks=students[i].marksInSubject1+students[i].marksInSubject2+students[i].marksInSubject3;
    }
    for(i=0;i<50;i++)
    {
        printf("\nStudent %d details\n",i+1);
        printf("==================\n");
        printf("\nRoll no. of student=%d",students[i].Rollno);
        printf("\nName of student:%s",students[i].name);
        printf("\nMark secured in subject 1=%d",students[i].marksInSubject1);
        printf("\nMark secured in subject 2=%d",students[i].marksInSubject2);
        printf("\nMark secured in subject 3=%d",students[i].marksInSubject3);
        printf("\nTotal mark of student=%d\n",students[i].TotalMarks);
    }
    for(i=0;i<50;i++)
    {
        grandTotal=grandTotal+students[i].TotalMarks;
    }
    average=(float)grandTotal/3;
    printf("average marks of students=%.2f",average);
    getch();
}
