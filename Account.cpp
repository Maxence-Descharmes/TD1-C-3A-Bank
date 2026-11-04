#include "Account.h"

Account::Account(std::string name,float sold, Client client) :
    name_(name), sold_(sold),client_(client) {
        changePassword();
        if(client_.verifyConnection(password_) != true){
            throw std::invalid_argument("Error : Invalid password or client number");
        }
    }

void Account::changePassword(){
    std::cout << "Please enter your new password : ";
        if(password_ != " "){
            do{
                if(client_.verifyConnection(password_) == true ){
                    std::cin >> password_;
                    if (password_ == " "){
                        std::cout << "Please enter a different password : ";
                    }
                }
            }while(password_ == " ");
        }else{
            do{
                std::cin >> password_;
                if (password_ == " "){
                    std::cout << "Please enter a different password : ";
                }
            }while(password_ == " ");
        }
    }


