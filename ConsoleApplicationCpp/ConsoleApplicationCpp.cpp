#include <iostream>
using namespace std;

int main()
{
	// Printing the size of each data type
	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "Size of char: " << sizeof(char) << " byte" << endl;
	cout << "Size of float: " << sizeof(float) << " bytes" << endl;
	cout << "Size of double: " << sizeof(double) << " bytes" << endl;
	cout << "Size of long: " << sizeof(long) << " bytes" << endl;
	cout << "Size of long long: " << sizeof(long long) << " bytes";

	long long largeNumber = 9223372036854775807;
	cout << "\nValue of largeNumber: " << largeNumber << endl;
	long long unsigned largeUnsignedNumber = 18446744073709551615U;
	cout << "Value of largeUnsignedNumber: " << largeUnsignedNumber << endl;
	int num = 3.1;
	cout << "Value of num (after assigning 3.1 to int): " << num << endl; // output will be 3 due to truncation
	// on peut déclarer plusieurs variables du même type sur une seule ligne
	int a, b, c;
	a = 2;
	b = 3;
	c = a + b;
	cout << "Sum of a and b: " << c << endl;

	// Rules For Naming Variable
	// The names given to a variable are called identifiers.There are some rules for creating these identifiers(names) :
	// A name can only contain letters(A - Z or a - z), digits(0 - 9), and underscores(_).
	// It should start with a letter or an underscore only.
	// It is case sensitive.
	// It should not be a keyword(reserved word) in C++.
	// The name of the variable should not contain any whitespace and special characters (i.e. #, $, %, *, etc).
	// We cannot use C++ keyword(e.g. float, double, class) as a variable name.
	int numberage = 25; // valid
	cout << "Value of numberage: " << numberage << endl;
	int _numberAge = 30; // valid
	cout << "Value of _numberAge: " << _numberAge << endl;
	// int 2numberAge = 35; // invalid, starts with a digit
	// cout << "Value of 2numberAge: " << 2numberAge << endl;
	// int number-Age = 40; // invalid, contains a hyphen
	// cout << "Value of number-Age: " << number-Age << endl;
	int NUMBERAGE = 45; // valid, case sensitive
	cout << "Value of NUMBERAGE: " << NUMBERAGE << endl;
	cout << " sum of 10 + 20 is " << 10 + 20 << endl;
	// In C++, a constant variable is one whose value cannot be changed after it is initialized. This is done using the const keyword.
	const int constantVar = 100;
	cout << "Value of constantVar: " << constantVar << endl;

	int myVar; // Declaration
	myVar = 50; // Initialization
	cout << "Value of myVar: " << myVar << endl;

	int myVar2;
	// Note: Accessing myVar2 before initialization leads to undefined behavior or does not compile in some environments.
	//cout << "value of myVar2 before initialization: " << myVar2 << endl; // Undefined behavior, may print garbage value
	myVar2 = 75;
	cout << "Value of myVar2 after initialization with 75: " << myVar2 << endl;

	a = 8;
	b = 3;

	cout << "Given a = " << a << " and b = " << b << endl;
	// Addition
	cout << "a + b = " << (a + b) << endl;

	// Subtraction
	cout << "a - b = " << (a - b) << endl;

	// Multiplication
	cout << "a * b = " << (a * b) << endl;

	// Division
	cout << "a / b = " << (a / b) << endl;

	// Modulo
	cout << "a % b = " << (a % b) << endl;

	// Increament
	cout << "++a = " << ++a << endl;

	// Decrement
	cout << "b-- = " << b--;

	return 0;
}

