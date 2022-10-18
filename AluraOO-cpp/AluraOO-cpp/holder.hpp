//
//  holder.hpp
//  AluraOO-cpp
//
//  Created by Diego Sabino on 18/10/22.
//
#pragma once
#ifndef holder_hpp
#define holder_hpp

#include <stdio.h>

#include <string>

class Holder {
private:
    std::string cpf;
    std::string name;
    void checkNameLength();
public:
    Holder(std::string cpf, std::string name);
    std::string getName();
    std::string getCpf();
};


#endif /* holder_hpp */
