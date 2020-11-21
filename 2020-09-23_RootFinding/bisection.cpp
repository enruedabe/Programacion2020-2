#include <iostream>
#include <cmath>

using fptr = double(double);
double f(double x);
double bisection(double xl, double xu, double eps, fptr fun);

int main(int argc, char const *argv[])
{
	std::cout.precision(15); std::cout.setf (std::ios::scientific);
	double xl=1.0;
	double xu=20.0;
	double eps=1.0e-45;

	double xroot= bisection(xl,xu,eps,f);

	std::cout << xroot << "\t" << f(xroot)  << "\n";

	return 0;
}

double f(double x)
{
	const double G=9.81;
	const double M=68.1;
	const double T=10.0;
	const double Vf=40.0;
	return (M*G*(1-std::exp(-x*T/M))/x)-Vf;
}

double bisection(double xl, double xu, double eps, fptr fun)
{
	const int NITERMAX = 1000;
	double xr=0;
	int Niter=0;
	while(Niter<= NITERMAX){
		xr = 0.5*(xl+xu);
		if ((std::fabs(f(xr)))<=eps){break;
		}else if (f(xr)*f(xu) > 0){
			xu=xr;
		}
		else {xl=xr;
		}
		Niter++;
	}
	std:: cout << "Bisction Info -> Niter: " <<Niter << "\n";
	return xr;
}