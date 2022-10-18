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
#include "holder.hpp"

class Account
{
private:
    std::string number;
    Holder holder;
    float balance;
    static int numberAccount;
public:
    Account(std::string number, Holder holder, float balance);
    ~Account();
    void withdraw(float valueWithdraw);
    void deposit(float valueDeposit);
    float getBalance();
    std::string getNumber();
    static int getNumberAccount();
};

#endif /* account_hpp */
