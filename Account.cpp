#include "Account.h"
Account::Account(std::string name,float sold,int account_number, std::vector<float> account_history, std::string password, Client client) :
    Account_structure(name, sold,account_number, account_history, password), client_(client) {
        changePassword();
        if(client_.verifyConnection(Account_structure::getPassword()) != true){
            throw std::invalid_argument("Error : Invalid password or client number");
        }
    }




void Account::changePassword(){
    std::cout << "Please enter your new password : ";
    std::string password = Account_structure::getPassword();
        if(password != " "){
            do{
                if(client_.verifyConnection(password) == true ){
                    std::cin >> password;
                    if (password == " "){
                        std::cout << "Please enter a different password : ";
                    }
                }
            }while(password == " ");
        }else{
            do{
                std::cin >> password;
                if (password == " "){
                    std::cout << "Please enter a different password : ";
                }
            }while(password == " ");
        }
    }

    void Account::payBills(Account_structure account_struct){
        account_struct.setSold(-client_.getBills());
    }
