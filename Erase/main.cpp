#include <iostream>
using namespace std;
#define tab "\t"


void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void PrintReverse(int arr[], int const n);
void PrintReverse(double arr[], int const n);
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
int MinValueIn(int arr[], const int n);
int MaxValueIn(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 3,5,8 };
	FillRand(arr, n);
	Print(arr, n);
	PrintReverse(arr, n);
	cout << "сумма элемнтов массива" << Sum(arr, n) << endl;
	cout << "среднее арифмитеское элемнтов массива" << Avg(arr, n) << endl;
	cout << "Минимальное значение элемнта массива" << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение элемнта массива" << MaxValueIn(arr, n) << endl;

	double d_arr[n];    //double array
	FillRand(d_arr, n);
	Print(d_arr, n);
	PrintReverse(d_arr, n);
	cout << "сумма элемнтов массива" << Sum(d_arr, n) << endl;
	cout << "среднее арифмитеское элемнтов массива" << Avg(d_arr, n) << endl;


} 
 


void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{

		arr[i] = rand()%100;
		//функция ранд возвращает случ число от 0 до 32767
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{

		arr[i] = double(rand()%100)/10;
		//функция ранд возвращает случ число от 0 до 32767
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(int arr[], int const n)
{
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(double arr[], int const n)
{
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
} 
int Sum(int arr[], const int n)
{

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
			
	}
	return sum;
}
double Sum(double arr[], const int n)
{

	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
			
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int MinValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}