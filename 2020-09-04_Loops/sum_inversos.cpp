#include <iostream>

int main(int argc, char const *argv[])
{
	double sum =0;
	double i =1;
	double lim=0 ;
	std::cout <<"Ingrese el un numero positivo:" << "\n";
	std:: cin>> lim;
	while(i<=lim){
		sum+=(1/(i));
		i += 1;
	}
	std::cout << "La suma es " << sum << "\n";
	return 0;
}