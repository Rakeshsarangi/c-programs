/*check whether the letter is in upper case or lowercase*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char letter;
    printf("THIS PROGRAM CHECKS WHETHER A LETTER IS IN UPPER CASE OR LOWER CASE \n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter a alphabet:");
    scanf("%c",&letter);
    letter>='a' && letter<='z'?printf("the letter is a small letter."):printf("the letter is a capital letter.");
    getch();
}
