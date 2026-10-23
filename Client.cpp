#include "Client.h"
#include <iostream>
#include <string>

Client::Client(std::string name, std::string email, std::string phone, std::string adress, std::string password,int client_number, Account account) :
    name_(name), email_(email), phone_number_(phone), adress_(adress), password_(password), account_(account), client_number_(client_number){
        setBills();
    }

std::string Client::getName(){
    return name_;
}

void Client::setBills(){
    float total = bills_;
    float adding;
    std::cout << "Let's calculate all your taxes you will have to pay us at GreedBank" << std::endl;
    std::cout << "Please enter (if it exists) your mortgage loan per month here : ";
    std::cin >> adding;
    total += adding;
    std::cout << "Please enter your student loan per month here : ";
    std::cin >> adding;
    total += adding;
    bills_ += total;
}

bool Client::verifyConnection(){
    int number;
    std::string pass;
    std::cout << "Please enter your account number : ";
    std::cin >> number;
    
    if(number == client_number_){
        std::cout << "Please enter your password : ";
        std::cin >> pass;
        if(pass == password_){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
    
}
