#include "Savings.h"

Savings::Savings(std::string name, float sold, int account_number, std::vector<float> account_history, std::string password, float interest_rate)
: Account_structure(name, sold, account_number, account_history, password)
{
}

void Savings::obtainInterest()
{
    std::string answer;
    std::cout << "Are we in the first day of the month ?" << std::endl;
    std::cin >> answer;
    if (answer == "yes"){
        //sold_ = sold_*interest_rate_;
        std::cout << "Chouette" << std::endl;
    }
    else 
        std::cout << "Come back in 1 month" << std::endl;
}
