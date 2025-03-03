#include <iostream>

// Function prototypes
void displayTitle();
void displayIntroduction();
int getUserChoice();
void displayOutcome(int choice);

int main() {
    
    displayTitle();
    displayIntroduction();
    int choice = getUserChoice();
    displayOutcome(choice);
    return 0;
    
}

void displayTitle() {
    
    std::cout << "==================\n";
    std::cout << "Echoes of Piltover\n";
    std::cout << "==================\n\n";
    
}

void displayIntroduction() {
    
    std::cout << "One stormy night, you awaken to a pounding on your workshop \n";
    std::cout << "door. Before you can react, enforcers burst in, weapons drawn.\n";
    std::cout << "\"You're under arrest for the theft of a Hextech core,\"\n";
    std::cout << "one of them barks. But you had nothing to do with it.\n";
    std::cout << "You have three choices:\n\n";
    std::cout << "1) RUN - Escape through the window and disappear into the alleyways.\n";
    std::cout << "2) FIGHT - Grab your prototype gauntlet and defend yourself.\n";
    std::cout << "3) SURRENDER - Try to reason with the enforcers and clear your name.\n\n";

}

int getUserChoice() {
    
    int choice;
    std::cout << "Choose an action:\n";
    std::cout << "1) RUN\n";
    std::cout << "2) FIGHT\n";
    std::cout << "3) SURRENDER\n";
    std::cout << "Enter your choice (1-3): ";
    std::cin >> choice;
    
    //Validate user's choice
    while (choice != 1 && choice != 2 && choice != 3) {
        
        std::cout << "Invalid selection. Please enter 1, 2, or 3: ";
        std::cin >> choice;
        
    }
    
    return choice;
}

void displayOutcome(int choice) {
    
    if (choice == 1) {
        
        std::cout << "THE FUGITIVE – You make it to Zaun, where a mysterious figure\n"; 
        std::cout << "named Silco offers you protection… for a price.\n";
        std::cout << "You become a rogue scientist working in the shadows,\n";
        std::cout << "forever hunted by Piltover.\n";
        
    } else if (choice == 2) {
        
        std::cout << "PILTOVER'S HERO – You defeat the enforcers and track down\n"; 
        std::cout << "the real thief: a rogue scientist who plans to use the core\n";
        std::cout << "for destruction. You recover the core and are granted a pardon,\n";
        std::cout << "earning respect in Piltover.\n";
        
    } else {
        
        std::cout << "THE FORGOTTEN – The enforcers don't listen. You're thrown \n"; 
        std::cout << "into Stillwater Hold, where you’re left to rot…\n";
        std::cout << "until an old friend offers you a chance to escape.\n";
        std::cout << "But at what cost?\n";
        
    }
}