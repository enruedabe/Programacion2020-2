#include <iostream>



int main(int argc, char const *argv[])
{	
	int N =5;
	int data[N] {1,2};
	int * ptr = nullptr;

	std::cout << data[0] <<std::endl;//1
	std::cout << &data[0] <<std::endl;//direccion de memoria dle primer elemento
	std::cout << data <<std::endl;//Direccion del primer elemento
	std::cout << (data+1) <<std::endl;// Direccion del segundo elemento
	std::cout << *(data+1) <<std::endl;//p
	//std::cout << (data+N) <<std::endl;
	//std::cout << *(data+N) <<std::endl;

	std::cout << "ptr ->" <<ptr<< std::endl;
	ptr = &N;
	std::cout << "ptr ->" <<ptr<< std::endl;
	ptr = data;
	std::cout << "ptr ->" <<ptr<< std::endl;
	std::cout << "*ptr+1 ->" <<*(ptr+1)<< std::endl;

	//data = &N;// ERROR: data no puede apuntar a ptras direcciones de memoria

	return 0;
}