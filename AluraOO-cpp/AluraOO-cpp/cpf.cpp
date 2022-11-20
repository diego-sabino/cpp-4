//
//  cpf.cpp
//  AluraOO-cpp
//
//  Created by Diego Sabino on 20/11/22.
//

#include "cpf.hpp"
#include <iostream>

Cpf::Cpf(std::string number):
number(number)
{
    checkCpfLength();
}

void Cpf::checkCpfLength() {
    if(number.size() < 11) {
        std::cout << "\"cpf\" deve ter 11 caracteres" << std::endl;
        exit(1);
    }
}
std::string Cpf::getCpf() {
    return number;
}
