#include <iostream>
#include <iomanip>
#include <conio.h> 
#include <cstdlib>

using namespace std;

int main()
{
	int a, b;
	
	cout << "Enter a number: "; cin >> b;
	cout << "Multiplication table of " << b << ":" << endl;

	for (a=1; a<=10; a++)
	{
		cout << a << " x " << b << " = " << (a*b) << endl;
	}

	_getch();
	return 0;
}
