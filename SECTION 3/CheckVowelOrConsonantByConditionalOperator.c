/*check whether the letter is a vowel or consonant*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char letter;
    printf("THIS PROGRAM CHECKS WHETHER A LETTER IS VOWEL OR CONSONANT \n");
    printf("enter a alphabet:");
    scanf("%c",&letter);
    letter=='a' || letter=='e' ||  letter=='i' ||  letter=='o' ||  letter=='u' ||  letter=='A' ||  letter=='E' ||  letter=='I' ||  letter=='O' ||  letter=='U'?printf("the letter is a vowel letter"):printf("the letter is a consonant letter");
    getch();
}
