/*this program takes a number from user as input and computes the following structure
1-(2/3!)+(3/4!)-(4/5!)+..._+(n/(n+1)!)*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,factorial;
  float value,result;
  factorial=2;
  result=1;
  printf("this program takes a number from user as input and computes the following structure 1-(2/3!)+(3/4!)-(4/5!)+..._+(n/(n+1)!)\n");
  printf("-------------------------------------------------------------------------------------------------------------------\n");
  printf("enter a number:");
  scanf("%d",&n);
  for(i=2;i<=n;i++)
    {
        factorial=factorial*(i+1);
        value=(float)i/factorial;
        if(i%2==0)
            {
                result=result-value;
            }
        else
            {
                result=result+value;
            }
    }
  printf("the value of the series upto %dth term=%f",n,result);
  getch();
}

