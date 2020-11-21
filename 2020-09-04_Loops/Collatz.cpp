#include <iostream>
int main(int argc, char const *argv[])
{
	int n;
	int k=1;
	std::cout <<"Escribe un numero\n";
	std::cin >> n;
	while(n!=1)
		{ if((n%2)==0){n=(n/2); k++; std::cout <<n <<",";}
		  else{n=(3*n)+1; k++; std::cout<<n <<",";}
		}
	std::cout <<"El numero de elementos de las secuencia es " <<k <<std::endl;
	std::cout <<"El nombre de los integrantes del grupo es Karen Gomez, Edgar Rueda, Daniel Peralta" <<std::endl;
	return 0;
}