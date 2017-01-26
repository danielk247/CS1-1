/*********************************************************************

** Author: Daniel Kim

** Date: 01/26/2017

** Description: Prompts the user for an integer that the player (maybe the user, maybe someone else) will try to guess.  
* If the player's guess is higher than the target number, the program displays "too high"  
* If the user's guess is lower than the target number, the program displays "too low" 
* The program uses a loop that repeats until the user correctly guesses the number.  
* Then the program prints how many guesses it took.
****************************************************************
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num, guess, tries;
    cout << "Enter the number for the player to guess.\n";
    cin >> num; 
    
    cout << "Enter your guess. \n";
     
    
    do {
        cin >> guess;
        tries++;
        if(guess > num)
        {
            cout << "Too high - try again.\n";
        }
        else if(guess < num)
        {
            cout << "Too low - try again.\n";
        }
        else {
            cout << "You guessed it in " << tries << " tries.";
        }

    } while(guess != num);
return 0;

}