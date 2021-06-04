#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int n1, n2, n3, a, loop, flag=0;
int menu()
{
    int op;
    printf("\n\t1.Addition");
    printf("\n\t2.Substraction");
    printf("\n\t3.Multiplication");
    printf("\n\t4.Division");
    printf("\n\t5.Modulation");
    printf("\n\t6.Clear");
    printf("\n\t7.Exit");
    printf("\n\t\tEnter your option: ");
    scanf("%d",&op);
    return (op);
}
void input()
{
    if(flag==0)
    {
        printf("\nEnter a number: ");
    scanf("%d",&n1);
    printf("\nEnter another number: ");
    scanf("%d",&n2);
    }
    else
    {
    printf("\nAgain enter another Number: ");
    scanf("%d",&n3);
    }
}
void main()
{
    while (flag>=0)
    {
        system("cls");
        printf("\t\t\tStored Result: %d",a);
        switch (menu())
    {
    case 1: input();
        if(flag>=0){
            a=n1+n2;
        printf("Addition = %d",a);
        flag++;
        } else{
            a+=n3;
        printf("Addition = %d",a);
        }
        break;
    case 2: input();
        a=n1-n2;
        printf("Substraction = %d",a);
        flag++;
        break;
    case 3: input();
        a=n1*n2;
        printf("Multplication = %d",a);
        flag++;
        break;
    case 4: input();
        a=n1/n2;
        printf("Division = %d",a);
        flag++;
        break;
    case 5: input();
        a=n1%n2;
        printf("Modulation = %d",a); 
        flag++;
        break;
    case 6: printf("Cleared Stored Data");
        a = 0;
        flag = 0;
        break;
    case 7:
        exit(0);
        //flag=-1;
        break;

    default:
        printf("Invalid!");
        break;
    }
    getch();
    }
    
}
