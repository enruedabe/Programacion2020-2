#include<iostream>
double numero1(double x, double y, double z);
double numero2(double x, double y, double z);
double numero3(double x, double y, double z);
//declaracion
int main()
{
	double x;
	double y;
	double z;
	std::cout <<"Enter a number:"<< std::endl;
	std::cin>> x;
	std::cout <<"Enter another number:"<<std::endl;
	std::cin>> y;
	std::cout <<"Enter another number:"<<std::endl;
	std::cin>> z;
	double  w = 0;
	w = numero1(x,y,z);
	double  v = 0;
	v = numero2(x,y,z);
	double  u = 0;
	u = numero3(x,y,z);
	std::cout << w <<","<<v <<"," <<u<< std::endl;
	return 0;
}
//implementacion numero 1
double numero1(double x, double y, double z)
{
	double comp1;
	comp1= x > y ? x : y;
	double comp2;
	comp2= x > z ? x : z;
	double mayor;
	mayor= comp1 > comp2 ? comp1 : comp2;
	return mayor;
}
//implementacion numero 2
double numero2(double x, double y, double z)
{
	double mitad=0;
	if (((x>=z)&&(x<=y))||((x<=z)&&(x>=y)))
	{
		mitad= x;
	}
	else if (((y>=z)&&(y<=x))||((y<=z)&&(y>=x)))
	{
		mitad= y;
	}
	else if (((z>=y)&&(z<=x))||((z<=y)&&(z>=x)))
	{
		mitad=z;
	}
	return mitad;
}
//implementacion numero 3
double numero3(double x, double y, double z)
{
	double comp1;
	comp1= x < y ? x : y;
	double comp2;
	comp2= x < z ? x : z;
	double menor;
	menor= comp1 < comp2 ? comp1 : comp2;
	return menor;
}