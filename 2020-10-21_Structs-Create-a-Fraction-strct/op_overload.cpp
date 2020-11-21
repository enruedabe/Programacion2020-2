#include <iostream>

struct Fractional{
//by default structs use public:
		int num {0} ;
		int den {1} ;
		//aux function
		void print(void);
		//overload
		Fractional operator+(const Fractional & f2);
		Fractional operator-(const Fractional & f2);
		Fractional operator*(const Fractional & f2);
		Fractional operator/(const Fractional & f2);
};


int main(int argc, char const *argv[])
{
	Fractional f, g {2,3};


	//access interval variables write
	f.num = 4; //public access
	f.den = 7; //public access

	f.print();
	g.print();

	//op overloading
	Fractional h;
	h=f+g ;
	h.print();
	h = f-g;
	h.print();//h=f-g;
	h= f*g;
	h.print();//h=f*g;
	h=f/g;
	h.print();//h= f/g

	//access interval variables read
	h.print();;

	return 0;
}

void Fractional::print(void){
	std::cout << "(" << num << "/" << den << ")\n";
}

Fractional Fractional::operator+(const Fractional & f2)
{
	Fractional result;
	result.num = num*f2.den +f2.num*den;
	result.den = den * f2.den;
	return result;
}


Fractional Fractional::operator-( const Fractional & f2)
{
	Fractional result;
	result.num = num*f2.den -f2.num*den;
	result.den = den * f2.den;
	return result;
}

Fractional Fractional::operator*(const Fractional & f2)
{
	Fractional result;
	result.num = num*f2.num;
	result.den = den * f2.den;
	return result;
}
Fractional Fractional::operator/( const Fractional & f2)
{
	Fractional result;
	result.num = num*f2.den;
	result.den = den * f2.num;
	return result;
}