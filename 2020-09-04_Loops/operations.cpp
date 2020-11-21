#include <iostream>
#include <cmath>
double smaller(int val1, int val2);
double larger(int val1, int val2);
double sum(int val1, int val2);
double difference(int val1, int val2);
double product(int val1, int val2);
double ratio(int val1, int val2);

//declaracion
int main(void)
{
	int val1 ;
	int val2 ;
	std::cout <<"Write a number\n";
	std::cin >> val1;
	std::cout <<"Write another number\n";
	std::cin >> val2;
	int z = 0;
	z = smaller(val1,val2);
	std::cout << "The smallest number between "<<val1 <<" and " <<val2 <<" is "<< z << std::endl;
	int x = 0;
	x = larger(val1,val2);
	std::cout << "The biggest number between "<<val1 <<" and " <<val2 <<" is "<< x << std::endl;
	int y = 0;
	y = sum(val1,val2);
	std::cout << val1 <<" plus " <<val2 <<" is " << y<< std::endl;
	int w = 0;
	w = difference(val1,val2);
	std::cout << "The difference between "<<val1 <<" and " <<val2 <<" is "<< w << std::endl;
	int v = 0;
	v = product(val1,val2);
	std::cout << val1 <<" times " <<val2 <<" is " << v<< std::endl;
	double u = 0;
	u = ratio(val1,val2);
	std::cout << "The ratio between "<<val1 <<" and " <<val2 <<" is "<< u << std::endl;
	
	return 0;
}
//implementacion smaller
double smaller(int val1, int val2)
{
	double result = 0;
	result = val1 > val2 ? val2 : val1;
	return result;
}
//implementacion larger
double larger(int val1, int val2)
{
	double result = 0;
	result = val1 > val2 ? val1 : val2;
	return result;
}
//implementacion sum
double sum(int val1, int val2)
{
	double result = 0;
	result = val1 + val2 ;
	return result;
}
//implementacion difference
double difference(int val1, int val2)
{
	double result = 0;
	result = abs( val1 - val2 );
	return result;
}
//implementacion product
double product(int val1, int val2)
{
	double result = 0;
	result =  val1 * val2 ;
	return result;
}
//implementacion ratio
double ratio(int val1, int val2)
{
	double result = 0;
	double a=val1;
	double b=val2;
	result =  a / b ;
	return result;
}