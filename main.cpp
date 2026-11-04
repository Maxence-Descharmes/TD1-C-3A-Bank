#include "Account_structure.h"


int main(){
    //Initialisation 
    Account_structure account_structure;

    std::cout << "Welcome to your online bank" << std::endl;
    std::cout << "You have " << account_structure.getSold() << " money" << std::endl;
    account_structure.withdrawal(10);
    account_structure.withdrawal(2.5);
    std::cout << "You have " << account_structure.getSold() << " money" << std::endl;
    account_structure.addAccountHistory(10);
    account_structure.addAccountHistory(2.5);
    account_structure.viewHistoy();
    return 0;
}