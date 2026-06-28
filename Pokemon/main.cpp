#include <iostream>
#include <string>

void functionName() 
{
    std::string player_Name;
    std::cout << "Enter your name ";
    std::getline(std::cin, player_Name);
    std::cout << "Greetings " << player_Name << " looks like you have understood the main() function properly now!" <<std::endl;
    
}


int main() {
    functionName();
   return 0; 
}
