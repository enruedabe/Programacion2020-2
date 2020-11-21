#include <iostream>
#include <cstdlib>
double miles_to_km(double x);
//declaracion
int main(int argc, char *argv[])
{
	double x = std::atof(argv[1]) ;
	double  z = 0;
	z = miles_to_km(x);
	std::cout <<"In "<<x <<" miles, there are "<< z <<" kilometers"<< std::endl;
	return 0;
}
//implementacion
double miles_to_km(double x)
{
	double result = 0;
	result =x*1.6;
	return result;
}