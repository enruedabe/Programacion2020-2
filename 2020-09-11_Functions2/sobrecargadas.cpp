#include <iostream>
#include <cstdlib>

int getmax(int a, int b);
double getmax(double a, double b);
double getmax(double a, int b);
double getmax(int a, double b);

int main(int argc, char const *argv[])
{
	std::cout << getmax(2,1) << std::endl;
	std::cout << getmax(2.51,2.3) << std::endl;
	std::cout << getmax(2.51,2) << std::endl;
	std::cout << getmax(2,2.89) << std::endl;
	return 0;
}
int getmax(int a, int b)
{return  (a>b) ? a : b;}

double getmax(double a, double b)
{return  (a>b) ? a : b;}

double getmax(double a, int b)
{return  (a>b) ? a : b;}

double getmax(int a, double b)
{return  (a>b) ? a : b;}