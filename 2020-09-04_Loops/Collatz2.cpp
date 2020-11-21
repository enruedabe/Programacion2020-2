#include <iostream>
int main(int argc,char **argv){
int n=1;
int k=1;
int op1 = n;
int op2 = n;
std::cout <<"Ingrese un numero: "; std:: cin>>n;
while(n != 1){
	if(n%2==0){
		op1 = (n/2);
		n= op1;
		k++;
		std::cout<<n<<",";
	}
	else{op2=(3*n+1);
		n=op2;
		k++;std::cout << n <<",";
	}
}
std::cout<<"El numero de elementos de la secuencia es "<< k << std::endl;
std::cout<<"jsfnkjvn\n";
return 0;
}