#include <iostream>
#include "add.h"
#include "sub.h"
using namespace std;


int main()
{
	int x,y,z;
	cout << "Enter first number: "; cin >> x;
	cout << "Enter second number: "; cin >> y;
	z = add(x,y);
	cout << "The result is " << z<< endl;
	z = sub(x, y);
	cout << "The result is " << z<< endl;
}


