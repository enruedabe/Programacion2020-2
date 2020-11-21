#include <iostream>
#include <algorithm>
#include <numeric>
#include<random>

double statistics1(const std::vector<double> &data);
void fillarray (std::vector<double>& data);

int main(int argc, char const *argv[])
{
	const int N = 1000;
	//declaration
	std::vector<double> array;
	array.resize(N);

	//arrayfilling
	fillarray(array);
	
	//processing
	double result= statistics1(array);
	std::cout << result << std::endl;
	return 0;
}
void fillarray (std::vector<double>& data)
{
	//double x = -19.456;
	//std::fill(data, data+size,x);
	//std::iota(data, data+size,1);
	//numeros aletorios
	const int seed =0;
	std:: mt19937 mt(seed);
	std:: uniform_real_distribution<double> dist(0.0,1.0);
	for (auto &val : data){
		val = dist(mt);
	}
}

double statistics1(const std::vector<double> &data)
{
	double suma = 0.0;
	for(auto val : data){
		suma+= val;
	}
	
	return suma/data.size();
}