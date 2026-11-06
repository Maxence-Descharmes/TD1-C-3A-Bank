#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include "Account.h"
class Client {
    public:
        Client(std::string name= "Not set", std::string email= "Not set", std::string phone= "Not set", std::string adress= "Not set", int client_number= 0000, Account account);
        std::string getName();
        bool verifyConnection(std::string password_account);
        float getBills();
    private:
        std::string name_;
        std::string email_;
        std::string phone_number_ ;
        std::string adress_;
        const float bills_=0;
        Account account_;
        float setBills();
        int client_number_;
        void seeAccountSold();
        


};

#endif CLIENT_H