#include <iostream>
#include <iomanip>

using namespace std;

int factorial(int);
double power(double,int);
double exp(double,int);

int main()
{
	double x = 0.0;
	int n=0;

	cout<<"This program will approximate exp(x) with a taylor series"<< endl;
	cout<<"Insert X:"<< endl;
		cin>>x;
		cout<< "Insert highest power:" << endl;
	cin >> n;
		exp(x,n);
	return 0;
}

int factorial (int n)
{
	if (n>1)
		return factorial (n-1)*n;
	else
		return 1;
}

double power(double x, int n)
{
	double powval =1.0;
	for (int num=n; num !=0; --num)
	{
		powval *=x;
	}
	return powval;
}

double exp(double x, int n)
{
	double expval =0.0;
	for (int num=0; num<=n; ++num)
	{
		expval += (power(x,num)/factorial(num));
		cout<<"Power =" <<num<<"gives exp(" <<x<<") =" <<setprecision(20) << expval<<endl;
	}
return expval;
}

