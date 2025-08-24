#include<bits/stdc++.h>
#define EPSILON 0.0001
using namespace std;

double func(double x)
{
	return x*x*x - 2*x*x + 1;
}

double derivFunc(double x)
{
	return 3*x*x - 4*x;
}

void newtonRaphson(double x)
{
	double h = func(x) / derivFunc(x);
	while (abs(h) >= EPSILON)
	{
		h = func(x)/derivFunc(x);

		x = x - h;
	}

	cout << "The value of the root is : " << x <<endl;
	cout << "Program executed by Quazi Afrin";
}

int main()
{
	double x0 = 0.5; 
	newtonRaphson(x0);
	return 0;
}

