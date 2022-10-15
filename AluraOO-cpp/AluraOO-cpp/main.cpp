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
    
    void sacar(float sacar){
        if (sacar <= 0) {
            cout << "Você não pode sacar um valor negativo" << endl;
            return;
        }
        
        if (sacar > saldo){
            cout << "Saldo insuficiente" << endl;
            return;
        }
        
        saldo -= sacar;
    };
    
    void depositar(float sacar){
        if (sacar <= 0) {
            cout << "Você não pode depositar um valor negativo" << endl;
            return;
        }
        
        saldo += sacar;
    };

};

int main(int argc, const char * argv[]) {
    Conta ClienteUm;
    ClienteUm.saldo = 78;
    
    Conta ClientDois;
    ClientDois.saldo = 50;
    
    
    ClienteUm.depositar(10);
    ClientDois.sacar(1110);
    
    cout << ClienteUm.saldo << endl;
    cout << ClientDois.saldo << endl;
    return 0;
}
