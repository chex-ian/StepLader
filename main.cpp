//Project 1: Step Pyramid
//This program asks for the user's input and displays either a original artwork or a step pyramid that takes the users input and displays the the number of steps properly spaced and centered 
//Author: Iancarlo Trejo
//Class: CS 141 Fall 2023
// Original ascii art of a tree 
//"     /\      "
//"    /  \     "
//"   /    \    "
//"  /      \   "
//" /        \  "
//"/          \ "
//"-------------"
//"      ||     "
//"      ||     "
//"      ||     "
//"      ||     "
//"      ||     "
//"      ||     "

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // The menu output. Don't modify this, so that it outputs exactly as expected
    cout << "Program 1: Step Pyramids" << endl;
    cout << "Which option would you like?" << endl;
    cout << "  1. Display original graphic" << endl;
    cout << "  2. Display Step Pyramid" << endl;
    cout << "Your choice: ";
    // Takes the users input and stores it as a variable
    int userInput;
    std::cin >> userInput;
    // If the user selects the first option draw out the original graphic 
    if (userInput == 1){

        // Starting variales 
        int strtSPC = 5;
        int pyrmSPC = 2;
        // Sets up the start of the tree 
        cout << setfill(' ') << setw(strtSPC) << ' ' << "/\\" << endl;
        strtSPC = strtSPC - 1; 

        // Draws the levels of the tree and spaces them 
        for(int k = 2; k <= 5; ++k){
            cout << setfill(' ') << setw(strtSPC) << ' ' << "/" << setfill(' ') << setw(pyrmSPC) << ' ' << "\\" << endl; 
            pyrmSPC = pyrmSPC + 2; 
            strtSPC = strtSPC - 1;
            // Once the tree reaches the end it draws the last set 
            if(strtSPC == 0){
            cout << "/" << setfill(' ') << setw(pyrmSPC) << ' ' << "\\" << endl;
            cout << "-" << setfill('-') << setw(pyrmSPC) << '-' << "-" << endl;
            pyrmSPC = pyrmSPC / 2;
            // Draws the trunk of the tree 
            for(int j = 0; j <= 5; ++j){
                cout << setfill(' ') << setw(pyrmSPC) << ' ' << "||" << endl;
                }
            }
        }
    }
    
    // The prompt for entering the number of levels, if the user chooses a step pyramid
    if (userInput == 2){
            int spcNeeded = 1;
            int  plusCount = 10; 
            int insSPC = 10; 
            int steps;
            cout << "How many levels should be in the step pyramid? ";
            cin >> steps; //Takes the users input for the desidred steps 
            spcNeeded = steps * 6;
            // cout << spcNeeded << endl;
            // Only prints out the top of the pyramid or the "hat"
            if (steps == 0){
                cout << "   _______\n";
                cout << "  |_______|\n";
                cout << "  |  ___  |\n";
                cout << "__|__[_]__|__\n";
                return 0; 
            }
            // Only prints out the hat along with the first set of steps 
            if (steps == 1){
                cout << "     _______\n";
                cout << "    |_______|\n";
                cout << "    |  ___  |\n";
                cout << "  __|__[_]__|__\n";
                cout << " /    |===|    \\ \n";
                cout << "/     |===|     \\ \n";
                return 0; 
            }
            if(steps > 1){
                spcNeeded = spcNeeded - 6; // Centers the pyramid depending on the steps the user inputs   
                cout << setfill(' ') << setw(spcNeeded) << ' ' << "     _______\n";
                cout << setfill(' ') << setw(spcNeeded) << ' ' << "    |_______|\n";
                cout << setfill(' ') << setw(spcNeeded) << ' ' << "    |  ___  |\n";
                cout << setfill(' ') << setw(spcNeeded) << ' ' << "  __|__[_]__|__\n";
                cout << setfill(' ') << setw(spcNeeded) << ' ' << " /    |===|    \\\n";
                cout << setfill(' ') << setw(spcNeeded) << ' ' << "/     |===|     \\\n";
                spcNeeded = spcNeeded + 6;
                
                // For loop for each step of the pyramid 
                for(int i = 2; i <= steps; ++i){ 
                    // Subtraction for proper spacing 
                    spcNeeded = spcNeeded - 10;

                    // Prints out the + 
                    cout << setfill(' ') << setw(spcNeeded) << ' ' << setfill('+') << setw(plusCount) << "+" << "|===|" << setfill('+') << setw(plusCount) << "+" << endl;
                    
                    // Prints out the first /  
                    spcNeeded = spcNeeded - 1;  
                    cout << setfill(' ') << setw(spcNeeded) << ' ' << "/" << setfill(' ') << setw(insSPC) << ' ' <<  "|===|" << setfill(' ') << setw(insSPC) << ' ' << "\\" << endl; 
                   
                    // Checks if there is any space needed for second /
                    spcNeeded = spcNeeded - 1; 
                    insSPC = insSPC + 1;
                    if(spcNeeded == 0){
                        cout << "/" << setfill(' ') << setw(insSPC) << ' ' <<  "|===|" << setfill(' ') << setw(insSPC) << ' ' << "\\" << endl; 
                    } else {
                        cout << setfill(' ') << setw(spcNeeded) << ' ' << "/" << setfill(' ') << setw(insSPC) << ' ' <<  "|===|" << setfill(' ') << setw(insSPC) << ' ' << "\\" << endl;
                    }
                    // Adding for proper spacing per level 
                    insSPC = insSPC + 5;
                    plusCount = plusCount + 6 ; 
                    spcNeeded = spcNeeded + 6 ;
                }
            return 0;    
        }
    }
}
