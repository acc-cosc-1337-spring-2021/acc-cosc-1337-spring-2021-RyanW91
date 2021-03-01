//Write the include statement for decisions.h here
#include  "decision.h"

//Write namespace using statements for cout and cin
#include<iostream>
using namespace std;

int main() 
{
	int grade;
	cout << "Please enter your grade between 0 and 100: ";
	cin >> grade;

	string if_else_result;
	if_else_result = get_letter_grade_using_if(grade);
	cout<< "Your lettter grade using the If Else function is: " << if_else_result << "\n";

	string switch_result;
	switch_result = get_letter_grade_using_switch(grade);
	cout<< "Your lettter grade using the Switch function is: " << switch_result << "\n";

	return 0;
}

