/*this program takes information of 5 items and print it using union.*/
#include<stdio.h>
#include<conio.h>
union itemId
{
    char ModelNo[10];
    char itemcode[10];
};
struct Item
{
    union itemId id;
    char name[30];
    float price;
};
void main()
{
    struct Item items[2];
    int i;
    char choice;
    printf("this program takes information of 5 items and print it using union.\n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    for(i=0;i<2;i++)
    {
        printf("enter the details of item %d\n",i+1);
        printf("======================\n");
        printf("Id(if you want enter model no. [press 1] or for item code [press any other number]):");
        choice=getchar();
        if(choice=='1')
        {
            printf("\nmodel no.=");
            scanf("%s",&items[i].id.ModelNo);
        }
        else
        {
            printf("\nitem code=");
            scanf("%s",&items[i].id.itemcode);
        }
        printf("Name:");
        scanf("%s",&items[i].name);
        printf("price of item=");
        scanf("%f",&items[i].price);
        printf("Item details\n");
        printf("------------\n");
        if(choice=='1')
        {
            printf("Model no.=%s\n",items[i].id.ModelNo);
        }
        else
        {
            printf("Item code=%s\n",items[i].id.itemcode);
        }
        printf("Item Name:%s\n",items[i].name);
        printf("Item price=%.2f\n",items[i].price);
    }
}
