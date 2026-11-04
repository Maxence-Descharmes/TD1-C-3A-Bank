#include "Savings.h"

void Savings::obtainInterest()
{
    std::string answer;
    std::cout << "Are we in the first day of the month ?" << std::endl;
    std::cin >> answer;
    if (answer == "yes"){
        sold_ = sold_*interest_rate;
    }
    else 
        std::cout << "Come back in 1 month" << std::endl;
}
