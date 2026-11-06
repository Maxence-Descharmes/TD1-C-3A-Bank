#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <vector>
#include <Client.h>
#include <iostream>
#include <Account_structure.h>

class Account : public Account_structure{

    public:
        Account(std::string name,float sold,int account_number, std::vector<float> account_history, std::string password, Client client);
        void changePassword();
        void payBills(Account_structure acccount_struct);
        void makeCredit();
    
    private:
        Client client_;

};

#endif ACCOUNT_H