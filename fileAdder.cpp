/*********************************************************************

** Author: Daniel Kim

** Date: 01/26/2017

** Description: 
Program that prompts the user for the name of a file and then tries to open it
If the input file is there and can be opened, the program should read the list of integers in the file
The program will then add together all the integers in the file, 
create an output file called sum.txt, and write the sum to that file (just that number - no additional text).  
Remember to close both the input and output files.   
If the input file is not there (or is there but couldn't be opened for some reason), the program should just print out "could not access file".

Using a string variable as the parameter of the open function is a C++11 feature, so to compile, 
you'll need the "-std=c++0x" flag as discussed in the section "Note about different C++ standards".
****************************************************************
*/


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string fileName; 
    int sum = 0, num;
    cout << "Please enter the directly address of your file" << endl;
    cin >> fileName;
    ifstream inputFile;
    inputFile.open(fileName);
    ofstream outputFile;
    outputFile.open("sum.txt");
    // inputFile >> num;
    // cout << num;
    if(!inputFile)
       { 
       
        cout << "Could not access file" << endl;
        }
    while (inputFile >> num)
        	{	
	      inputFile >> num;
	      sum = sum + num;
	      }
	outputFile << sum;
	inputFile.close();
	outputFile.close();
	
    return 0;
    
}
