#include<iostream>
#include<cmath>
bool verif(int m);
int main(int argc, char const *argv[])
{
	int m=1;
	std::cout<< "Escriba un numero: ";
	std::cin>>m;
	std::cout<< verif(m) <<"\n";
	return 0;
}

bool verif(int n)
{
	if (n==2 || n==3) return 1;
	for (int i = 2; i <= std::sqrt(n); ++i)
	{
		if (n%i==0){return 0;};
	}
	return 1;}