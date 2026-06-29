#include <iostream>
#include <string>

void functionName() 
{
    std::string player_Name;
    std::cout << "Enter your name ";
    std::getline(std::cin, player_Name);
    std::cout << "Greetings " << player_Name << " looks like you have understood the main() function properly now!" <<std::endl;
    
}
void OaksGreeting() 
{
    std::cout<< "Welcome to the world of Pokémon! I am Professor Oak.\n"; 
    std::cout << "You can choose one of the following Pokémon:\n"; 
    std::cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    std::cout << "Which Pokémon would you like to choose? Enter the number: ";
    int startingPokemonNumber;
    std::cin >> startingPokemonNumber;
    if (startingPokemonNumber ==1) 
    {
        std::cout << "You chose Bulbasaur! A wise choice.\n";
    }
    else if (startingPokemonNumber ==2) 
    {
        std::cout << "You chose Charmander! A fiery choice.\n";
    }
    else if (startingPokemonNumber ==3)
    {
        std::cout << "You chose Squirtle! A cool choice.\n";
    }
    else 
    {
        std::cout << "Invalid choice. Please try again.\n";
        OaksGreeting();
    }


}


int main() {
    functionName();
    OaksGreeting();
   return 0; 
}
