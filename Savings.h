#include <string>
#include <vector>
#include "Account_structure.h"

#ifndef SAVINGS_H
#define SAVINGS_H

class Savings : public Account_structure {

    private :
    std::string name_ = "";
    float sold_ = 0;
    std::vector<float> account_history = {};
    float interest_rate = 1.7;

    public :
    Savings();
    void obtainInterest();
};

#endif SAVINGS_H