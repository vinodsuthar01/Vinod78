#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getChoiceName(int choice) {
    switch(choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Invalid";
    }
}

int main() {
    int userChoice, computerChoice;

    // Seed the random number generator
    srand(time(0));

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Choose an option:" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    // Validate input
    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice. Please run the program again." << endl;
        return 1;
    }

    // Computer randomly chooses 1, 2, or 3
    computerChoice = (rand() % 3) + 1;

    cout << "You chose: " << getChoiceName(userChoice) << endl;
    cout << "Computer chose: " << getChoiceName(computerChoice) << endl;

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a draw!" << endl;
    } else if (
        (userChoice == 1 && computerChoice == 3) ||  // Rock beats Scissors
        (userChoice == 2 && computerChoice == 1) ||  // Paper beats Rock
        (userChoice == 3 && computerChoice == 2)     // Scissors beats Paper
    ) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0;
}
