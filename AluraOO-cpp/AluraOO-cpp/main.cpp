//
//  main.cpp
//  OO-cpp
//
//  Created by Diego Sabino on 13/10/22.
//

#include <iostream>
#include "account.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Account ClientOne("122", "123456789", "zephyr", 300);
    
    //ClientOne.deposit(100);
    
    cout << ClientOne.getBalance() << endl;
    cout << ClientOne.getName() << endl;
    return 0;
}
