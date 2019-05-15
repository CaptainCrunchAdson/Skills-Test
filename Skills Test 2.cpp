#include <iostream>
#include <iomanip> 
#include <conio.h>

using namespace std;

int main()
{
	int a, b, c;

	cout << "This program recognizes the Largest number among the three encoded numbers.\n" << endl;
	cout << "Enter first number: "; cin >> a;
	cout << "Enter second number: "; cin >> b;
	cout << "Enter third number: "; cin >> c;

	if (a > b && a > c)
		cout << "The LARGEST of the three numbers is " << a << endl;
	else if ( b > a && b > c)
		cout << "The LARGEST of the three numbers is " << b << endl;
	else 
		cout << "The LARGEST of the three numbers is " << c << endl;

_getch();
return 0;
}


