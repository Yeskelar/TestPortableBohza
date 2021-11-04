#include <iostream>
#include "windows.h"
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, y, h, a, b;
 cout << "Введіть a: ";
 cin >> a;
 cout << "Введіть b: ";
 cin >> b;
 cout << "Введіть x: ";
 cin >> x;
 cout << "Введіть h: ";
 cin >> h;
 while (x <= b)
 {
	 y = sin(x) + abs(x) + pow(2, x);
	 cout << setw(10) << "Y = " << setw(5) << y << endl;
	 x += h;
 }
 return 0;
}
