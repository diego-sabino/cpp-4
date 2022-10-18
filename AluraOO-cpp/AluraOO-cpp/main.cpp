//
//  main.cpp
//  OO-cpp
//
//  Created by Diego Sabino on 13/10/22.
//

#include <iostream>
#include "account.hpp"
#include "holder.hpp"
#include "account.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Holder ClientOne("123456789", "zephyr");
    Account AccountOne("122", ClientOne, 300);
   //Account ClientTwo("123", "123456789", "664", 500);
    
    
    //ClientOne.deposit(100);
    
    cout << AccountOne.getBalance() << endl;
    cout << ClientOne.getName() << endl;
    cout << ClientOne.getCpf() << endl;
    cout << Account::getNumberAccount() << endl;
    return 0;
}
	
