#include <iostream>
#include <algorithm>
#include <numeric>
#include<random>

double statistics1(const double data[], int size);
void fillarray (double data[], int size);

int main(int argc, char const *argv[])
{
	//declaration
	int N = 10000;
	double array[N]{0.0};

	//arrayfilling
	fillarray(array,N);
	//double x = -19.456;
	//std::fill(array, array+N,x);
	//std::iota(array, array+N,1);

	//processing
	double result= statistics1(array,N);
	std::cout << result << std::endl;
	return 0;
}
void fillarray(double data[], int size)
{
	//double x = -19.456;
	//std::fill(data, data+size,x);
	//std::iota(data, data+size,1);
	//numeros aletorios
	const int seed =0;
	std:: mt19937 mt(seed);
	std:: uniform_real_distribution<double> dist(0.0,1.0);
	for (int i = 0; i < size; ++i)
	{
		data[i] = dist(mt);
	}
}

double statistics1(const double data[],int size)
{
	double mean = 0.0;
	for (int i = 0; i < size; ++i)
	{
		mean += data[i];
	}
	
	return mean/size;
}