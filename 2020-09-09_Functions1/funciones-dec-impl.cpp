#include <iostream>
#include <cstdlib>
double average(double x, double y);
//declaracion
int main(int argc, char *argv[])
{
	double x = std::atof(argv[1]) ;
	double y = std::atof(argv[2]);
	double  z = 0;
	z = average(x,y);
	std::cout << z << std::endl;
	return 0;
}
//implementacion
double average(double x, double y)
{
	double result = 0;
	result =(x + y)/2;
	return result;
}