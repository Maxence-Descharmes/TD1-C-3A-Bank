#include "Account_structure.h"

Account_structure::Account_structure()
{
}

float Account_structure::getSold()
{
    return sold_;
}

void Account_structure::withdrawal(float amount)
{
    if (Account_structure::enoughMoney(amount) == true){
        sold_ -= amount;
        std::cout << "You withdraw " << amount << " money" << std::endl;   
    }
    else {
        std::cout << "You don't have enough money" << std::endl;
    }
}

bool Account_structure::enoughMoney(float amount)
{
    if(amount <= sold_){
        return true;
    }
    else {
        return false;
    }
}

void Account_structure::transferMoney(std::string sender, std::string receiver, float amount)
{

}

void Account_structure::addAccountHistory(float amount)
{
    account_history_.push_back(amount);
}

void Account_structure::viewHistoy()
{
    for(int i = 0; i < size(account_history_); i++){
        std::cout << account_history_[i] << std::endl;
    }
}
