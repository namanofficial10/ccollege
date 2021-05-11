#include<stdio.h>


int main(){

    int roll_number,sem;
    char name[20], branch[10];

    printf("------------------------------Basic Details------------------------------");

    printf("\nEnter Name:");
    scanf("%s",name);

    printf("\nEnter Branch:");
    scanf("%s",&branch);


    printf("\nEnter Roll Number:");
    scanf("%d",&roll_number);

    printf("\nEnter Semester:");
    scanf("%d",&sem);




     printf("\nName: %s",name);
     printf("\nBranch: %s",branch);
     printf("\nRoll Number: %d",roll_number);
     printf("\nSemester: %d",sem);



     return 0;
}
