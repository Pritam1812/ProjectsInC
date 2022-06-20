#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
int factorial();
void calculator_operations();

int main()
{
    int op;

    calculator_operations();
    while(1)
    {
        printf("\nEnter the Calculator Operation: ");
        scanf("%d",&op);

        switch(op)
        {
            case 1: addition();
                      break;

            case 2: subtraction();
                      break;

            case 3: multiplication();
                      break;

            case 4: division();
                      break;

            case 5: modulus();
                      break;

            case 6: factorial();
                      break;

            case 0: exit(0);
                      break;

            default :
                printf("Invalid Operation!");
                break;
        }
    }
}

void calculator_operations()
{
    system("clear");
    printf("\n\t Calculator In C");
    printf("\n\t-~-~--~-~-~-~-~-~-");

    printf("\n1. Addition: \n");
    printf("\n2. Subtraction: \n");
    printf("\n3. Multiplication: \n");
    printf("\n4. Division: \n");
    printf("\n5. Modulus: \n");
    printf("\n6. Factorial: \n");
    printf("\n0. Exit \n");

}

void addition()
{
    int n, add=0, k=0, number;

    printf("\nEnter the number of elements:");
    scanf("%d",&n);

    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%d",&number);
        add+=number;
        k+=1;
    }
    printf("Addition of %d numbers = %d \n",n,add);
}

void subtraction()
{ 
    int n, sub=0, k=0, number;

    printf("\nEnter the number of elements:");
    scanf("%d",&n);

    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%d",&number);
        sub-=number;
        k+=1;
    }
    printf("Subtraction of %d numbers = %d \n",n,sub); 
}

void multiplication()
{
    int n, mul=1, k=0, number;

    printf("\nEnter the number of elements:");
    scanf("%d",&n);

    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%d",&number);
        mul*=number;
        k+=1;
    }
    printf("\nMultiplication of entered numbers = %d\n",mul);
}

void division()
{
    int a, b, div=0;

    printf("\nPlease enter first number  : "); 
    scanf("%d", &a);

    printf("Please enter second number : "); 
    scanf("%d", &b);

    div = a/b;

    printf("\nDivision of entered numbers=%d\n",div);
}

void modulus()
{
    int a, b, mod=0;

    printf("\nPlease enter first number   : "); 
    scanf("%d", &a);

    printf("Please enter second number  : "); 
    scanf("%d", &b);

    mod = a%b;

    printf("\nModulus of entered numbers = %d\n",mod);
}

int factorial()
{
    int i,fact=1,num;

    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);

    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }               

    for(i=1;i<=num;i++)
        fact=fact*i;

    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}