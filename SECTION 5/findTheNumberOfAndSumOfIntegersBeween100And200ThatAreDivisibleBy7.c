/*this program find the number of and sum of integers between 100 and 200 that are divisible by 7*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,count,sum;
    count=0;
    sum=0;
    printf("this program find the number of and sum of integers between 100 and 200 that are divisible by 7 \n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    for(num=101;num<200;num++)
        {
            if(num%7==0)
            {
                count=count+1;
                sum=sum+num;
            }
        }
    printf("the number of integers betwwen 100 and 200=%d and their sum=%d",count,sum);
    getch();
}
