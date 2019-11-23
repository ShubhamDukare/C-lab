// to make a list of items with no, name, price
#include<stdio.h>
FILE *p;
struct inventory{int asset_no;
                 char name[10];
                 float price;
                 };
int main()
{
    struct inventory i;//i is type of inventory struct
    char choice;
    int loop;
    p=fopen("Inventory.txt","w");// opens a file to add the list
    if(p==NULL)
    {
        printf("FILE DOESNOT EXIST\n");// check whether file exist 
    }
    do
    {
        printf("Enter the asset number :");
        scanf("%d",&i.asset_no);
        fprintf(p,"Asset Number : %d\n",i.asset_no); // fprintf prints in the file
        printf("Enter the asset name :");
        getchar();
        scanf("%s",&i.name);
        fprintf(p,"Asset Name : %s\n",i.name);
        printf("Enter the asset price :");
        scanf("%f",&i.price);
        fprintf(p,"Asset Price : %.2f\n",i.price);
        printf("Do you want to add another asset :");
        getchar();
        scanf("%c",&choice);
        if(choice=='y'||choice=='Y')
        {
            loop=1;
        }
        else
        {
            loop=0;
        }
    }while(loop);
    printf("*******Thank You********");
}