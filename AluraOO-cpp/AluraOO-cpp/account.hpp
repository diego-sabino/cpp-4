//
//  conta.hpp
//  AluraOO-cpp
//
//  Created by Diego Sabino on 15/10/22.
//

#pragma once
#ifndef account_hpp
#define account_hpp
#include <string>
#include <stdio.h>

class Account
{
private:
    std::string number;
    std::string cpf;
    std::string name;
    float balance;

public:
    Account(std::string number, std::string cpf, std::string name, float balance);
    void withdraw(float valueWithdraw);
    void deposit(float valueDeposit);
    float getBalance();
    std::string getName();
    std::string getCpf();
    std::string getNumber();

};

#endif /* account_hpp */
