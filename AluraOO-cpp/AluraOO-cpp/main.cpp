//
//  main.cpp
//  OO-cpp
//
//  Created by Diego Sabino on 13/10/22.
//

#include <iostream>

using namespace std;

struct Conta
{
    string Numero;
    string cpf;
    string nome;
    float saldo;
};

void sacar(Conta& conta, float sacar){
    if (sacar <= 0) {
        cout << "Você não pode sacar um valor negativo" << endl;
        return;
    }
    
    if (sacar > conta.saldo){
        cout << "Saldo insuficiente" << endl;
        return;
    }
    
    conta.saldo -= sacar;
};

void depositar(Conta& conta, float sacar){
    if (sacar <= 0) {
        cout << "Você não pode depositar um valor negativo" << endl;
        return;
    }
    
    conta.saldo += sacar;
};


int main(int argc, const char * argv[]) {
    Conta ClienteUm;
    ClienteUm.saldo = 78;
    
    Conta ClientDois;
    ClientDois.saldo = 50;
    
    
    depositar(ClienteUm, 10);
    
    cout << ClienteUm.saldo << endl;
    cout << ClientDois.saldo << endl;
    return 0;
}
