//
// Created by Ismail Magdy on 04/11/2022.
//

#include "SavingAccount.h"

double SavingAccount::minimumBalance =1000;     // minimum balance account can hold
double SavingAccount::minimumDepositAmount=100; // minimum amount to be deposited

SavingAccount::SavingAccount(const string& ID,double amount): BankAccount(ID, max(minimumBalance, amount))
{}

void SavingAccount::withdraw(double amount){
    if(getBalance()-amount>=minimumBalance)        // check if transaction is possible
        BankAccount::withdraw(amount);           // delegate to parent class
}

void SavingAccount::deposit(double amount){
    if(amount>=minimumDepositAmount)          // check if transaction is possible
        BankAccount::deposit(amount);       // delegate to parent class
}

void SavingAccount::displayInfo()const{
    cout<<"Account ID:"<<getID()<<'\n';
    cout<<"Account Type:SavingAccount\n";
    cout<<"Account Balance:"<<getBalance()<<'\n';
}
