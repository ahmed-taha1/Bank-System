//
// Created by Ismail Magdy on 04/11/2022.
//

#include "BankAccount.h"


BankAccount::BankAccount(string ID, double Balance) {
    if(Balance>=0)
        this->balance = Balance;
    else
        this->balance = 0 ;
    this->accountID = ID;
}

string BankAccount::getID()const{
    return this->accountID;
}

double BankAccount::getBalance()const{
    return this->balance;
}


void BankAccount::withdraw(double amount) {
    if(amount<=balance)
        this->balance -= amount;
}

void BankAccount::deposit(double amount) {
    this->balance += amount;
}

void BankAccount::displayInfo() const {
    cout<<"Account Id:"<<getID()<<'\n';
    cout<<"Account Type:Basic Account\n";
    cout<<"Account Balance:"<<getBalance()<<'\n';
}
