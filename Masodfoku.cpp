#include <iostream>
using namespace std;
int main()
{	double a, b, c;
	setlocale(LC_ALL, "HUN");
	cout << "K�rem az a*x^2+b*x+c=0 egyenlet param�tereit\n";
	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	cout << "c= "; cin >> c;
	if (a == 0)
	{
		if (b == 0)
		{	cout << "Nincs gy�k" << endl;
		}
		else
		{	cout << "x= " << -c / b << endl;
		}
	}
	else
	{	double D = b * b - 4 * a * c;
		if (D < 0)
		{	cout << "Nincs val�s gy�k\n";
		}
		else
		{	double x1 = (-b + sqrt(D)) / 2 / a;
			double x2 = (-b - sqrt(D)) / 2 / a;
			cout << "x1= " << x1 << endl << "x2= " << x2 << endl;
		}
	}
	return 0;
}