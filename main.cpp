#include "Account_structure.h"
#include "Savings.h"


int main(){
    //Initialisation 
    Account_structure account_structure("", 15, 0, {}, "no password");
    Savings savings("Savings", 100, 0, {}, "no password", 1.7);
    int answer = 0;
    float money;
    std::string person;

    std::cout << "Welcome to your online bank" << std::endl;
    while(answer != 5) {
        std::cout << "You have " << account_structure.getSold() << " money" << std::endl;
        std::cout << "Tap (1) You want to withdraw money  (2) You want to view your history (4) You want your interest (5) You want to exit" << std::endl;
        std::cin >> answer;
        if (answer == 1){
            std::cout << "How much money ?" << std::endl;
            std::cin >> money;
            account_structure.withdrawal(money);
        }
        else if (answer == 2) {
            account_structure.viewHistoy();
        }
        else if (answer == 3){
            std::cout << "How much money ?" << std::endl;
            std::cin >> money;
            std::cout << "For who" << std::endl;
            std::cin >> person;
            account_structure.transferMoney(person, money);
        }

        else if (answer == 4){
            savings.obtainInterest();
        }
    }
    std::cout << "You left your online bank";
    return 0;
}