//
//  holder.hpp
//  AluraOO-cpp
//
//  Created by Diego Sabino on 18/10/22.
//
#pragma once
#ifndef holder_hpp
#define holder_hpp
#include "cpf.hpp"
#include <stdio.h>

#include <string>

class Holder {
private:
    Cpf cpf;
    std::string name;
    void checkNameLength();
public:
    Holder(Cpf cpf, std::string name);
    std::string getName();
};


#endif /* holder_hpp */
