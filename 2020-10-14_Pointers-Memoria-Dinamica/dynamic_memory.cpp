#include <iostream>

int main(int argc, char const *argv[])
{
	const int N = 4100000;
	//int data [N] {1,2};
	int * data =nullptr;

	//dynamic memory new
	data = new int [N];

	//use memory
	std::cout << data[0] << std::endl;

	//release memory delete
	delete [] data;
	data = nullptr;
	return 0;
}