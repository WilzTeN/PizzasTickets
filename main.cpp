#include <iostream>
#include <string>
#include <vector> 

int main() {
  
  std::string USER; 
  char verify;
  int MENU;
  std::vector<int> pizzas; 

  std::cout << "--- System Tickets ---" << std::endl;
  std::cout << "USER: ";
  std::cin >> USER;

  std::cout << "This is the user, right? (y/n): ";
  std::cin >> verify;

  switch(verify) {
    case 'y':
      std::cout << "GET ACCESS as " << USER << std::endl;

      std::cout << "(1): Continue\n(2): Exit" << std::endl;
      std::cout << "Type Your option: ";
      std::cin >> MENU;
      
      switch(MENU) {
        case 1:
          std::cout << "--- Select pizzas ---" << std::endl;
          std::cout << "(1): Pepperoni\n(2): Hawaiian\n(3): Vegan" << std::endl;
          
          char morePizza;
          do {
            int pizza;
            std::cout << "Your option: ";
            std::cin >> pizza;
            pizzas.push_back(pizza);

            std::cout << "Do you want to select another pizza? (y/n): ";
            std::cin >> morePizza;
          } while (morePizza == 'y' || morePizza == 'Y'); 

          std::cout << "You have selected the following pizzas:" << std::endl;
          for (int i = 0; i < pizzas.size(); ++i) {
            if(pizzas[i] == 1){
              std::cout << "Pepperoni pizza." << std::endl;
            }
            else if (pizzas[i] == 2){
              std::cout << "Hawaiian pizza." << std::endl;
            }
            else if (pizzas[i] == 3){
              std::cout << "Vegan pizza." << std::endl;
            } else {
              std::cout << "Invalid option, please select a valid pizza." << std::endl;
            }
          }
          //TICKET
          std::cout << "TICKET" << std::endl;
          std::cout << "WORKER: " << USER << std::endl;
          std::cout << "This is your pizzas: " << std::endl;

          break;
        case 2:
          std::cout << "Exiting the program." << std::endl;
          break;
        default:
          std::cout << "Invalid option, please select 1 or 2." << std::endl;
          break;
      }
      break;
    case 'n':
      std::cout << "Try Again\n";
      break;
    default:
      std::cout << "SELECT A VALID OPTION" << std::endl;
      break;
  }
  return 0;
}