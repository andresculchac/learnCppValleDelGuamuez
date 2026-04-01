
#include <iostream>
#include <string>

// 1. FORWARD DECLARATION
// This tells the compiler: "There is a class named Club. It exists."
class Club;  // aqui llamamos antes de saber que existe


class Player {
public:
    std::string name;
    
    // We can use a pointer (Club*) because the compiler knows a pointer 
    // is just a memory address (usually 8 bytes). It doesn't need to 
    // know what's inside a 'Club' yet to create this pointer.
    Club* myTeam; 

    void displayTeam();
};

// 2. THE FULL DEFINITION
// Now we define what a Club actually is.
class Club {
public:
    std::string clubName;
    int budget;
};

// 3. IMPLEMENTATION
// We wait until AFTER the Club definition to write this function,
// because here we actually touch 'myTeam->clubName'.
void Player::displayTeam() {
    if (myTeam) {
        std::cout << name << " plays for: " << myTeam->clubName << std::endl;
    } else {
        std::cout << name << " is a free agent." << std::endl;
    }
}

int main() {
    // Create the Club
    Club redDevils;
    redDevils.clubName = "Manchester United";
    redDevils.budget = 500000000;

    // Create the Player
    Player p1;
    p1.name = "Marcus Rashford";
    p1.myTeam = &redDevils; // Assign the address of the club to the pointer

    // Run the method
    p1.displayTeam();

    return 0;
}