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
	cout << "Value of num (after assigning 3.1 to int): " << num << endl;

	return 0;
}

