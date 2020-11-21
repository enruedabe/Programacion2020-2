#include <iostream>
//no usar variables globales,excepto de la forma cons int
void print_message(int a)
{
	std::cout <<"Shit dude, I'm hungry \n";
	std::cout <<"Parametro a: "<< a <<" \n";
	std::cout <<"Direccion de a en main " << &a << std::endl;
}
int main(void)
{
	int a =12; //variable local,usar siempre de estas
	std::cout <<"Direccion de a en main " << &a << std::endl;
	print_message(a);
	return 0;
}