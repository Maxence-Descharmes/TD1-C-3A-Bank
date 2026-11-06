#include <iostream>
#include <string>
#include <vector>

#ifndef ACCOUNT_STRUCTURE_H
#define ACCOUNT_STRUCTURE_H
#include "Client.h"
class Account_structure 
{
    private : 
    std::string name_;
    float sold_;
    int account_number_;
    std::vector<float> account_history_;
    std::string password_;

    public :
    Account_structure(std::string name, float sold, int account_number, std::vector<float> account_history, std::string password) ;
    float getSold();
    void setSold(float amount);
    void withdrawal(float amount);
    bool enoughMoney(float amount);
    void transferMoney(std::string receiver, float amount);
    void addAccountHistory(float amount);
    void viewHistoy();
    std::string getPassword();
};

#endif ACCOUNT_STRUCTURE_H