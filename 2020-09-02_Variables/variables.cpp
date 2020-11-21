#include <iostream>

int main(int argc, char **argv)
{
  double x=-9.6e3; //64bits, 8bytes 10.e-16, 2^1024 \simeq 16*[10*307]
  long double y = 9.6e3; //>64bits
  float z = 10.54e-8; // 32 bits, 1.0e*6, 10^40
  int a = 5678;  //  
  long int b = -98765443; // pueden tener signo
  short int c = 678; //
  char l = 'a'; //
  bool flag =true; //
  
  std::cout <<sizeof(short int) <<std::endl;
  std::cout <<sizeof(int) <<std::endl;
  std::cout <<sizeof(long int) <<std::endl;
  std::cout <<sizeof(float) <<std::endl;
  std::cout <<sizeof(double) <<std::endl;
  std::cout <<sizeof(long double) <<std::endl;
  return 0;
}
