#include <iostream>
#include <cmath>

//clacular la derivada forward del seno
//graficar x \in [0,2pi] y comparar errores

//dx=0.1,[0,1]---> x 0.0 0.1 0.2 0.3 0.4 0.5 ....
                 //ii 0    1   2   3   4   5

double f(double x);
double deriv_foward(double x, double h);
double richardson_forward(double x, double h);
int main(int argc, char const *argv[])
{
	const double h = 0.1;
	const double xmin = 0.0;
	const double xmax = 2*M_PI;

	const int N = (xmax - xmin)/h;
	for (int ii = 0; ii < N; ++ii)
	{	double x = xmin + ii* h;
		double error_forward = std::fabs(1 - deriv_foward(x,h)/std::cos(x));
		std::cout   << x
					<< "\t" << f(x) 
					<< "\t" << error_forward
					<< "\t" << richardson_forward  
					<< "\n";
	}

	return 0;
}

double f(double x)
{
	return std::sin(x);
}

double deriv_foward(double x,double h)
{
	return ((f(x+h)-f(x))/h);
}
double richardson_forward(double x, double h)
{
	double D1 = deriv_foward(x,h);
	double D2 = deriv_foward(x,h/2);
	return (4*D2-D1)/3.0;
}