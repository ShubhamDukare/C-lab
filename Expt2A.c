#include<stdio.h>
float add(float a,float b)
{
    return(a+b);
}
float sub(float a,float b)
{
    return(a-b);
}
float mul(float a,float b)
{
    return(a*b);
}
float div(float a,float b)
{
    return((float)a/b);
}
void display(char choice,float a,float b,float ans)
{
    printf("%.3f %c %.3f is : %.2f",a,choice,b,ans);
}
int main()
{
    float a,b,ans;
    unsigned char choice;
    float (*ptr)(float,float);
    void (*ptr1)(char,float,float,float);
    ptr1=display;
    pass :
    printf("Enter the value of a and b :");
    scanf("%f%f",&a,&b);
    printf("Enter the operation to be performed on %.3f and %.3f :",a,b);
    getchar();
    choice = getchar();
    switch(choice)
    {
        case'+' :
            ptr=add;
            break;
        case'-' :
           ptr=sub;
            break;
        case'*' :
            ptr=mul;
            break;
        case'/' :
            ptr=div;

            break;
        default :
            printf("The choice entered is INCORRECT\nPlease enter the correct choice\n");
    }
    ans = (*ptr)(a,b);
    (*ptr1)(choice,a,b,ans);
    printf("\n");
    goto pass;
}