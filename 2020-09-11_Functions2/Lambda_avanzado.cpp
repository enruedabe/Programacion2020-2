#include <iostream>
#include <vector> // Arreglo de datos
#include <algorithm> //
#include <cmath>
//Lambda no se declara, hechas para ser usadas localmente

int main(int argc, char const *argv[])
{
	std::vector <int> data = {3,4,-1,-10,0};

	auto comp = [](int a, int b){return std::abs(a) < std::abs(b);}; //si cambio el < por un > queda en orden descendente
	std::sort(data.begin(),data.end(), comp);
	for (int ii = 0; ii <5 ; ++ii)
	{
		std::cout << "data[" << ii <<"]: " <<data[ii] << "\n";
	}
	return 0;
	
}