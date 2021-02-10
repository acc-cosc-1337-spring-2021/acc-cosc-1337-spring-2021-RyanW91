//Write the include statement for types.h here
#include "types.h"

//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>
 using std::cout; 
 using std::cin;

int main() 
{
	// Creates variable num > Gets a number from the user > assigns it to num
	int num; 
	cout<<"Enter a number: ";
	cin >> num;

	// Creates variable result > Result equals num1(user input) * num2(5) > Displays the result 
	int result;
	result = multiply_numbers(num);
	cout<< "The total is: " << result << "\n";

	// Creates num1 and assigns it to 4 > Takes the num1(4) * num2(5) and displays the result of num1 * num2 
	int num1 = 4;
	result = multiply_numbers(num1);
	cout<< "The total is: " << result << "\n";

	return 0;
}

 