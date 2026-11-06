#include <string>
#include <vector>
#include "Account_structure.h"

#ifndef SAVINGS_H
#define SAVINGS_H

class Savings : public Account_structure {

    private :
    float interest_rate_;

    public :
    Savings(std::string name, float sold, int account_number, std::vector<float> account_history, std::string password, float interest_rate);
    void obtainInterest();
};

#endif SAVINGS_H