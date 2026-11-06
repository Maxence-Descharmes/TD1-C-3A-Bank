#include "Account_structure.h"

Account_structure::Account_structure(std::string name, float sold, int account_number, std::vector<float> account_history, std::string password)
: name_(name), sold_(sold), account_number_(account_number), account_history_(account_history), password_(password)
{
}

float Account_structure::getSold()
{
    return sold_;
}

void Account_structure::setSold(float amount)
{
    sold_ += amount;
    
}

void Account_structure::withdrawal(float amount)
{
    if (Account_structure::enoughMoney(amount) == true){
        sold_ -= amount;
        std::cout << "You withdraw " << amount << " money" << std::endl;
        Account_structure::addAccountHistory(amount);   
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

void Account_structure::transferMoney(std::string receiver, float amount)
{
    if (Account_structure::enoughMoney(amount) == true){
        sold_ -= amount;
        std::cout << "You give money to" << receiver << std::endl;
        if (receiver == "Savings") {
            //
        }
        Account_structure::addAccountHistory(amount);
    }
    else
        std::cout << "You don't have enough money" << std::endl;

}

void Account_structure::addAccountHistory(float amount)
{
    account_history_.push_back(amount);
}

void Account_structure::viewHistoy()
{
    std::cout << "Here is your account history" << std::endl;
    for(int i = 0; i < size(account_history_); i++){
        std::cout << account_history_[i] << " | ";
    }
    std::cout << std::endl;
}