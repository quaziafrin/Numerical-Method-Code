#include<bits/stdc++.h>
using namespace std;
#define MAX_ITER 1000000

double func(double x)
{
	return 2*x - log10(x) - 7;
}

void regulaFalsi(double a, double b)
{
	if (func(a) * func(b) >= 0)
	{
		cout << "You have not assumed right a and b\n";
		return;
	}

	double c = a; 
	c = (a*func(b) - b*func(a))/ (func(b) - func(a));
    cout<<"a         b      f(a)        f(b)      c         f(c)"<<endl;
    cout<<a<<"         "<<b<<"      "<<func(a)<<"          "<<func(b)<<"      "<<c<<"      "<<func(c)<<endl;
	for (int i=0; i < MAX_ITER; i++)
	{
		
		if (fabs(func(c))<0.001)
			break;

		else if (func(c)*func(a) < 0)
			b = c;
		else
			a = c;
        c = (a*func(b) - b*func(a))/ (func(b) - func(a));
        cout<<a<<"   "<<b<<"   "<<func(a)<<"      "<<func(b)<<"      "<<c<<"      "<<func(c)<<endl;
	}
	cout << "The value of root is : " << c <<endl;
	cout << "Program executed by Quazi Afrin";
}

int main()
{
	double a =3, b = 4;
	regulaFalsi(a, b);
	return 0;
}
