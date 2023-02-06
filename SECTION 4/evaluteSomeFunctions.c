/*read the value of x and evaluate following functions
y= 1 for x>0
   0 for x=0
  -1 for x<0 */
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    printf("this program read the value of x and evaluate some functions\n");
    printf("enter the value of x:");
    scanf("%d",&x);
    if(x>0)
    {
        y=1;
    }
    else if(x==0)
    {
        y=0;
    }
    else
    {
        y=-1;
    }
    printf("the value of y=%d",y);
    getch();
}
