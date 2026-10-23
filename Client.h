#include <iostream>
#include <string>
class Client {
    public:
        Client(std::string name, std::string email, std::string phone, std::string adress, std::string password, Account account);
        std::string getName();
        void setBills();
    private:
        std::string name_ = "Not set";
        std::string email_= "Not set";
        std::string phone_number_ = "Not set";
        std::string adress_ = "Not set";
        Account account_;
        std::string password_ = "Not set";
        bool verifyConnection(std::string passw,int number);


};