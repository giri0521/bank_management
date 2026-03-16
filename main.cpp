#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

struct BankAccount {
    std:: string accountnumber;
    std:: string name;
    double balance{0.0};
};

bool readChoice(const std::string& prompt, int& choice)
{
    std::cout << prompt;
    if(!(std::cin >> choice)) {
        return false;
    }
    return true;
}


void showMenu() {
    std::cout << "\n============= Bank Account Management System =============\n";
    std::cout << "1. Create Account\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Display Account Details\n";
    std::cout << "5. Delete the existing account\n";
    std::cout << "6. Exit\n";
    std::cout << "=========================================================\n";

}

int main() {
    std::unordered_map<std::string, BankAccount> accounts;

    bool running  = true;
    while(running){
        showMenu();
        int choice =0;
        if(!readChoice("Enter your choice Between 1 to 6: ", choice)){
            std::cout << "Invalid input. Please enter a number between 1 and 6.\n";
            continue;
        }

        switch(choice) {
            case 1: {   // Create Account


            }

            case 2: {   // Deposit Money

            }
            case 3: {   // Withdraw Money

            }
            case 4: {   // Display Account Details

            }
            case 5: {   // Delete the existing account

            }
            case 6: {   // Exit
                std::cout << "Thanks for using the Bank Account Management System";
                running = false;
                break;
            }

            default: {
                std::cout << "Invalid choice. please enter a number between 1 and 6.\n";
                break;
            }

        }
    }
}
