#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>

using namespace std;

int p(double leo[], int lmt);

void s(const double leo[], int n);

void r(double r, double leo[], int n);

int main()
{
	double items[5];
	int size = p(items, 5);
	s(items, 5);	
	cout << "Enter int to compile by : ";
	double fa;
	cin >> fa;
	r(fa, items, 5);
	s(items, 5);
	cout << "DONE. CHECK OUTPUT LOG FOR RAW RESULTS." << endl;
	cout << " " << endl; 
	
	system("pause");
	return 0;
}

int p(double leo[], int lmt)
{
	double temp;
	for(int i = 0; i < lmt; i++)
	{
		cout << "Enter Code " << (i + 1) << ": ";
		cin >> temp;
		leo[i] = temp;
	}
	cout << " " << endl;
}

void s(const double leo[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "Int for Code " << (i + 1) << " : 0x3d1";
		cout << leo[i] << endl;
	}
	cout << " " << endl;
}

void r(double r, double leo[], int n)
{
	for(int i = 0; i < n; i++)
	{
		leo[i] *= r;
	}
	cout << " " << endl;
}
