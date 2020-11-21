#include <iostream>
//Lambda no se declara, hechas para ser usadas localmente

int main(int argc, char const *argv[])
{
	int c =90;
	for (int ii = 0; ii < 3; ++ii)
	{
		auto flambda = [&c,ii](auto a,auto b){
		std::cout << "c:"<< c << std::endl;
		c =100*ii;
		return a<b;
	};
		bool flag = flambda(3, 3.14);
		std::cout <<flag << "\n";
		std::cout << flambda(3.14, 3) << "\n";
	}
	return 0;
	
}