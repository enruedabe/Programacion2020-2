#include <iostream>

int main(int argc, char const *argv[])
{
	int sum =0;
	int i =0;
	for (int i = 0; i <= 100; ++i)
	{
		if (i%2==0)
		{
			sum+=i;
		}
	}
	/*while(i<=100){
		if(i%2==0){
			sum+=i;
		}
		
		i += 1;
	}*/
	std::cout << "La suma es " << sum << "\n";
	return 0;
}