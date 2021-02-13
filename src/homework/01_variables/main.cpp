//write include statements
#include "variables.h"

//write namespace using statement for cout
#include<iostream>
using std::cin;
using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	cout << "Please enter your meal total: ";
	cin >> meal_amount; 

	double tax_amount;
	tax_amount= get_sales_tax_amount(meal_amount);

	double tip_rate;
	cout << "Please enter what percent you would like to tip? ";
	cin >> tip_rate;


	double tip_amount;
	tip_amount = get_tip_amount(meal_amount, tip_rate); 

	
	double total;
	total = tip_amount + tax_amount + meal_amount;

	cout << "Meal Amount:       $" << meal_amount << "\n";
	cout << "Sales Tax:         $" << tax_amount << "\n";
	cout << "Tip Amount:        $" << tip_amount << '\n';
	cout << "Total:             $" << total << "\n";
	return 0;
}
