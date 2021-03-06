//write includes statements
#include <iostream>
#include "loops.h"

//write using statements for cin and cout
using namespace std;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	// do-while loop to prompt user for number
  
   do {
      
       cout << "Enter a number between 1 and 20: ";
       int number;
       cin >> number;
      
       while(!(number >=1 && number <= 20)) {
          
           cout << "Invalid Number\n";
          
           cout << "\nPlease enter a number from 1 to 20: ";
           cin >> number;
       }
      
       cout << "Factorial of " << number << " is " << factorial(number) << "\n";
      
       cout << "\nDo you want to continue? (y/n): ";
       char option;
       cin >> option;
       if(option == 'n' || option == 'N')
           break;
       cout << endl;
   }while(true);

	return 0;
}