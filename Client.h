#include <string>
class Client {
    public:
        Client(std::string name= "Not set", std::string email= "Not set", std::string phone= "Not set", std::string adress= "Not set", std::string password= "Not set", int client_number= 0000, Account account);
        std::string getName();
        void setBills();
    private:
        std::string name_;
        std::string email_;
        std::string phone_number_ ;
        std::string adress_;
        float bills_=0;
        Account account_;
        int client_number_;
        std::string password_;
        bool verifyConnection();


};