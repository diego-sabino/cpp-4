//
//  conta.cpp
//  AluraOO-cpp
//
//  Created by Diego Sabino on 15/10/22.
//

#include "account.hpp"
#include <iostream>

void Account::withdraw(float valueWithdraw)
{
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

void Account::deposit(float valueDeposit)
{
    if (valueDeposit <= 0) {
        std::cout << "Você não pode depositar um valor negativo" << std::endl;
        return;
    }
    
    balance += valueDeposit;
}

float Account::getBalance()
{
    return balance;
}

std::string Account::getName()
{
    return name;
}

std::string Account::getCpf()
{
    return cpf;
}

std::string Account::getNumber()
{
    return number;
}

void Account::defineName(std::string holderName)
{
    name = holderName;
}

void Account::defineCpf(std::string holderCpf)
{
    cpf = holderCpf;
}

void Account::defineNumber(std::string holderNumber)
{
    number = holderNumber;
}
