#include <iostream>

struct Fractional{
//by default structs use public:
		int num {0} ;
		int den {1} ;
};

void print (const Fractional & m);
Fractional plus (const Fractional & f1, const Fractional & f2);
Fractional minus (const Fractional & f1, const Fractional & f2);
Fractional mult (const Fractional & f1, const Fractional & f2);
Fractional div (const Fractional & f1, const Fractional & f2);

int main(int argc, char const *argv[])
{
	Fractional f, g {2,3};


	//access interval variables write
	f.num = 4; //public access
	f.den = 7; //public access

	print(f);
	print(g);

	//op overloading
	Fractional h;
	h=plus(f,g);//h=f+g;
	print(h);
	h = minus(f,g);
	print(h);//h=f-g;
	h= mult(f,g);
	print(h);//h=f*g;
	h=div(f,g);
	print(h);//h= f/g

	//access interval variables read
	print(h);

	return 0;
}

void print (const Fractional & m)
{ 
	std::cout << "( "<< m.num << " / " << m.den << " )\n";
}

//a/b +c/d = (ad+bc)/(bd)

Fractional plus(const Fractional & f1, const Fractional & f2)
{
	Fractional result;
	result.num = f1.num*f2.den +f2.num*f1.den;
	result.den = f1.den * f2.den;
	return result;
}
Fractional minus(const Fractional & f1, const Fractional & f2)
{
	Fractional result;
	result.num = f1.num*f2.den -f2.num*f1.den;
	result.den = f1.den * f2.den;
	return result;
}

Fractional mult(const Fractional & f1, const Fractional & f2)
{
	Fractional result;
	result.num = f1.num*f2.num;
	result.den = f1.den * f2.den;
	return result;
}
Fractional div(const Fractional & f1, const Fractional & f2)
{
	Fractional result;
	result.num = f1.num*f2.den;
	result.den = f1.den * f2.num;
	return result;
}