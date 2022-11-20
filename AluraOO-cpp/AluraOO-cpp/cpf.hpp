//
//  cpf.hpp
//  AluraOO-cpp
//
//  Created by Diego Sabino on 20/11/22.
//

#ifndef cpf_hpp
#define cpf_hpp

#include <stdio.h>
#include <string>

class Cpf {
private:
    std::string number;
    void checkCpfLength();
public:
    Cpf(std::string number);
    std::string getCpf();
};

#endif /* cpf_hpp */
