/*********************************************************************

** Author: Daniel Kim

** Date: 01/26/2017

** Description: Asks the user how many integers they would like to enter.  
* The program will then prompt the user to enter that many integers.  
* After all the numbers have been entered, the program should display the largest and smallest of those numbers.
* You can assume they will enter a number >= 1
****************************************************************
*/

#include <iostream>
using namespace std;

int main()
{
    
int integerNum, input1, max, min;
cout << "How many integers would you like to enter? \n";
cin >> integerNum;

cout << "Please enter " << integerNum << " numbers \n";
cin >> input1;
max = input1;
min = input1;

for(int i = 1; i < integerNum; i++)
   {
    cin >> input1;
    if(input1 > max)
        {
            max = input1;
        }
        else if( input1 < min)
        {
            min = input1;
        }
    }
cout << "min: " << min << "\n";
cout << "max: " << max << "\n";

return 0;
}
    