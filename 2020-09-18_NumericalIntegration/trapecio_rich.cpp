#include <iostream>
#include <cmath>

using fptr = double(double);
using fptr2 = double(fptr,double,double,int);

double f(double x);
double trapecio (fptr fun, double a, double b, int N);
double richardson (fptr2 alg, fptr fun, double a,double b, int N);

int main(int argc, char const *argv[])
{
	std::cout.precision(16); std::cout.setf(std::ios::scientific);
	double xmin= 0.0;
	double xmax= 1.0;
	for (int Nmax = 1; Nmax <= 1.0e06; Nmax*=10)
	{
		double intnum_trapecio = trapecio(f,xmin,xmax,Nmax);
		double intnum_traprich = richardson(trapecio, f, xmin,xmax,Nmax);
		double int_theo = - std::cos(xmax) + std::cos(xmin);
		double delta_trapecio = std::fabs(1 - intnum_trapecio/int_theo);
		double delta_traprich = std:: fabs(1-intnum_traprich/int_theo);
		std::cout << Nmax 
				  << "\t" << delta_trapecio
				  << "\t" << delta_traprich
				  << "\n";
	}

	
	return 0;
}

double f(double x)
{
	return std::sin(x);
}
double trapecio (fptr fun, double a, double b, int N)
{
	const double h = (b-a)/N;
	double suma = 0.5*(fun(a) + fun(b));
	for (int i = 1; i <= N-1; ++i)
	{
		double xi = a+i*h;
		suma+= f(xi);
	}
	suma *= h;
	return suma;
}
double richardson(fptr2 alg, fptr fun, double a,double b, int N)
{
	return (4*alg(fun,a,b,2*N)-alg(fun,a,b,N))/3;
}