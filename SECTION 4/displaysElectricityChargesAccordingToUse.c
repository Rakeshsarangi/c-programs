/*displays electricity charges according to use*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char consumername[30];
    int unitsConsumed,meterCharge;
    float charge;
    printf("this program shows electricity charges along with user name\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter your name:");
    gets(consumername);
    printf("enter number of units consumed:");
    scanf("%d",&unitsConsumed);
    meterCharge=100;
    if(unitsConsumed>0 && unitsConsumed<=200)
    {
        charge=meterCharge+(unitsConsumed*0.80);
    }
    else if(unitsConsumed>200 && unitsConsumed<=300)
    {
        charge=meterCharge+(200*0.80)+((unitsConsumed-200)*1.30);
    }
    else if(unitsConsumed>300)
    {
        charge=meterCharge+(200*0.80)+(100*1.30)+((unitsConsumed-300)*2.00);
    }
    else
    {
        charge=meterCharge;
    }
    if(charge>400)
    {
        charge=charge+(charge*0.15);
    }
    printf("%s your electricity charge is %.2f rupees.",consumername,charge);
    getch();
}
