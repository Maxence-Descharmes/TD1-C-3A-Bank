#include <iostream>
#include <string>
#include <vector>

#ifndef ACCOUNT_STRUCTURE_H
#define ACCOUNT_STRUCTURE_H

class Account_structure 
{
    private : 
    std::string name_ = "";
    float sold_ = 0;
    int account_number_ = 0;
    std::vector<float> account_history = {};
    std::string password_ = "";

    public :
    Account_structure() ;
    float getSold();
    void withdrawal(float amount);
    bool enoughMoney();
    void transferMoney(std::string sender, std::string receiver, float amount);
    void addAccountHistory();

};

#endif ACCOUNT_STRUCTURE_H