//
//  holder.cpp
//  AluraOO-cpp
//
//  Created by Diego Sabino on 18/10/22.
//

#include "holder.hpp"
#include <iostream>

Holder::Holder(std::string cpf, std::string name):
cpf(cpf),
name(name)
{
    checkNameLength();
}

void Holder::checkNameLength() {
    if(name.size() < 5) {
        std::cout << "\"name\" deve ter pelo menos 5 caracteres" << std::endl;
        exit(1);
    }
}

std::string Holder::getName() {
    return name;
}

std::string Holder::getCpf() {
    return cpf;
}
