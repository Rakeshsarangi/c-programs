/*this program evaluate following series using recursive function:x-(x^3/3!)+(x^5/5!)-(x^7/7!)+...*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float findFactorial(int f)
{
    float factorial=1.0;
    int i=f;
    if(i>=1)
    {
        return factorial=i*findFactorial(i-1);
    }
}
float findValue(int x,int n)
{
    float value=0.0;
    int n1=(2*n)-1;
    if(n==1)
    {
        value=value+x;
    }
    else if(n%2==0)
    {
        value=(-(pow(x,n1)/findFactorial(n1)))+findValue(x,n-1);
    }
    else
    {
        value=(pow(x,n1)/findFactorial(n1))+findValue(x,n-1);
    }
    return value;
}
void main()
{
    int x,n;
    float value=1;
    printf("this program evaluate following series using recursive function:x-(x^3/3!)+(x^5/5!)-(x^7/7!)+...\n");
    printf("\nenter the value of x:");
    scanf("%d",&x);
    printf("\nenter the term up to which you want to evaluate the value of the series:");
    scanf("%d",&n);
    value=findValue(x,n);
    printf("the evaluated value=%f",value);
    getch();
}
