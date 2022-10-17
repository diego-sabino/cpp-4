//
//  conta.cpp
//  AluraOO-cpp
//
//  Created by Diego Sabino on 15/10/22.
//

#include "account.hpp"
#include <iostream>

int Account::numberAccount = 0;

Account::Account(std::string number, std::string cpf, std::string name, float balance):
    number(number),
    cpf(cpf),
    name(name),
    balance(balance)
{
    checkNameLength();
    numberAccount++;
}

Account::~Account() {
    numberAccount--;
}

void Account::withdraw(float valueWithdraw) {
    if (valueWithdraw <= 0) {
        std::cout << "Você não pode sacar um valor negativo" << std::endl;
        return;
    }
    
    if (valueWithdraw > balance){
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }

    valueWithdraw -= balance;
};

void Account::deposit(float valueDeposit){
    if (valueDeposit <= 0) {
        std::cout << "Você não pode depositar um valor negativo" << std::endl;
        return;
    }

    balance += valueDeposit;
}

float Account::getBalance() {
    return balance;
}

std::string Account::getName() {
    return name;
}

std::string Account::getCpf() {
    return cpf;
}

std::string Account::getNumber() {
    return number;
}

int Account::getNumberAccount() {
    return numberAccount;
}

void Account::checkNameLength() {
    if(name.size() < 5) {
        std::cout << "\"name\" deve ter pelo menos 5 caracteres" << std::endl;
        exit(1);
    }
}
