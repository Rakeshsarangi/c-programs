/*CONVERT TEMPERATURE FROM CELCIUS TO FRENHEIT AND VICE-VERSA*/
#include<stdio.h>
#include<conio.h>
void main()
{

    float celcius,farenheit;
    printf("THIS PROGRAM CONVERT TEMPERATURE FROM CELCIUS TO FAHRENHEIT AND VICE VERSA \n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the temperature in celcius:");
    scanf("%f",&celcius);
    farenheit=(celcius*(9.0/5.0))+32;
    printf("the temperature in farenheit is:%f\n",farenheit);
    printf("enter the temperature in farenheit:");
    scanf("%f",&farenheit);
    celcius=(farenheit-32)*5.0/9.0;
    printf("the temperature in celcius is:%f",celcius);
    getch();
}
