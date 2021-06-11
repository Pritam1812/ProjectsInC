#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int menu();
void deposit();
void withdraw();
void transfer();
void checkdetails();

int TotalAmount=10000;
int TotalDep=0, TotalWid=0, TotalTrn=0;
int dep, wid, trn;
void main()
{
    while(1)
    {
    	system("cls");
        switch (menu())
    {
    case 1:deposit();
        break;
    case 2:withdraw();
        break;
    case 3:transfer();
        break;
    case 4:checkDetails();
        break;
    case 5: exit(0);
        break;
    default: printf("Invalid Choice!");
        break;
    }
    }
}
int menu()
{
    int ch;
    printf("\n1. Deposit Amount: ");
    printf("\n2. Withdraw Amount: ");
    printf("\n3. Transfer Amount: ");
    printf("\n4. Check Details: ");
    printf("\n5. Exit: ");
    printf("\n\nEnter Choice: ");
    scanf("%d",&ch);
    return(ch);
}
void deposit()
{
    printf("Enter the Ammount you want to Deposit: ");
    scanf("%d",&dep);
    printf("Ammount Deposit Succesfull!");
    TotalAmount += dep;
    TotalDep += dep;
}
void withdraw()
{
    printf("Enter the Amount you want to Withdraw: ");
    scanf("%d",&wid);
    if (wid <= TotalAmount)
    {
        TotalAmount -= wid;
        printf("Amount Withdraw Succesfull!");
        TotalWid += wid;
    }
    else
    printf("Insufficient Balance to Withdraw Amount!");
}
void transfer()
{
    printf("Enter the Amount you want to Transfer: ");
    scanf("%d",&trn);
    if (trn <= TotalAmount)
    {
        TotalAmount -= trn;
        printf("Amount Transfer Succesfull!");
        TotalTrn += trn;
    }
    else
    printf("Insufficient Balance to Transfer Amount!");
}
void checkDetails()
{
    printf("Current Balance: %d",TotalAmount);
    printf("Total Diposited Amount: %d",TotalDep);
    printf("Total Withdrown Amount: %d",TotalWid);
    printf("Total Transfered Amount: %d",TotalTrn);
}
