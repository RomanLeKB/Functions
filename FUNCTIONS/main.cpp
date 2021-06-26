#include <iostream>
using namespace std;

int add(int a, int b); //прототип функции
int sub(int a, int b);
int mul(int a, int b);
double divis(double a, double b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "vvedite dva chisla:"; cin >> a >> b;
	int c = add(a,b); //вызов функции - Function call
	cout << "rezulta sloj:" << c << endl;
	cout << "Res vychitania;" << sub(a, b) << endl;
	cout << "Res umhojenia;" << mul(a, b) << endl;
	cout << "Res delenia;" << divis(a, b) << endl;

}
int add(int a, int b) //реализация функции(орпеделение функции)
{
	int c = a + b;
	return c;
}

int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
double divis(double a, double b)
{
	return a / b;
}