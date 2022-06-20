#include <stdio.h>
#include <stdlib.h>

int menu();
void deposit();
void withdraw();
void transfer();
void details();

int TotalAmount;
int TotalDep = 0, TotalWid = 0, TotalTrn = 0;
int dep, wid, trn;

void main() {
  printf("\n\t Banking Management System");
  printf("\n\t-~-~--~-~-~-~-~-~-~-~--~-~-~-");
  while (1) {
    switch (menu()) { 
    case 1:
      deposit();
      break;
    case 2:
      withdraw();
      break;
    case 3:
      transfer();
      break;
    case 4:
      details();
      break;
    case 0:
      exit(0);
      break;
    default:
      printf("Invalid Choice!");
      break;
    }
  }
}

int menu() {
  int ch;
  printf("\n");
  printf("\n1. Deposit Amount: \n");
  printf("\n2. Withdraw Amount: \n");
  printf("\n3. Transfer Amount: \n");
  printf("\n4. Check Details: \n");
  printf("\n0. Exit: ");

  printf("\n\nEnter Choice: ");
  scanf("%d", & ch);
  
  return (ch);
}

void deposit() {
  printf("Enter the Ammount you want to Deposit: ");
  scanf("%d", & dep);
  system("clear");
  printf("Ammount Deposit Succesfull!");
  TotalAmount += dep;
  TotalDep += dep;
}

void withdraw() {
  printf("Enter the Amount you want to Withdraw: ");
  scanf("%d", & wid);
  system("clear");
  if (wid <= TotalAmount) {
    TotalAmount -= wid;
    printf("Amount Withdraw Succesfull!");
    TotalWid += wid;
  } else
    printf("Insufficient Balance to Withdraw Amount!");
}

void transfer() {
  printf("Enter the Amount you want to Transfer: ");
  scanf("%d", & trn);
  system("clear");
  if (trn <= TotalAmount) {
    TotalAmount -= trn;
    printf("Amount Transfer Succesfull!");
    TotalTrn += trn;
  } else
    printf("Insufficient Balance to Transfer Amount!");
}

void details() {
  system("clear");
  printf("\nCurrent Balance: %d", TotalAmount);
  printf("\nTotal Diposited Amount: %d", TotalDep);
  printf("\nTotal Withdrown Amount: %d", TotalWid);
  printf("\nTotal Transfered Amount: %d", TotalTrn);
}