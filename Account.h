#include <string>
#include <vector>
#include <Client.h>

class Account{

    public:
        Account(std::string name="Not set",float sold=0, Client client);
        void changePassword();
        void payBills();
        void makeCredit();
    
    private:
        float sold_;
        std::string password_ = " ";
        std::vector<float> account_history_;
        std::string name_;
        Client client_;

}