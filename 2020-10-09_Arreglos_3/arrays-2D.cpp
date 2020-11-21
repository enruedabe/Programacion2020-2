#include <iostream>

const int M=5; //rows
const int N=4; //columns

void fill (double data[][N],const int sizex, const int sizey);
void print (double data[][N],const int sizex, const int sizey);
void print (double data[][M],const int sizex, const int sizey);
void trasnpose(double data[][N], double datat[][M], const int sizex, const int sizey);

int main(int argc, char const *argv[])
{
	//declarar variables y matriz

	double matrix [M][N] {{0.0}};
	
	//llenar
	fill (matrix,M,N);
	
	//trasnponer
	double matrixt [N][M] {{0.0}};
	trasnpose(matrix,matrixt,M,N);
	//imprimir
	print(matrix,M,N);
	print(matrixt,N,M);

	return 0;
}

void fill (double data[][N],const int sizex, const int sizey)
{
	for (int ix = 0; ix < sizex; ++ix)
	{
		for (int iy = 0; iy < sizey; ++iy)
		{
			data[ix][iy]=ix*sizey +iy;
		}
	}
}
void print (double data[][N],const int sizex, const int sizey)
{
	for (int ix = 0; ix < sizex; ++ix)
	{
		for (int iy = 0; iy < sizey; ++iy)
		{
			std::cout <<data[ix][iy]<<"  ";
		}
		std::cout <<"\n";
	}
}

void print (double data[][M],const int sizex, const int sizey)
{
	for (int ix = 0; ix < sizex; ++ix)
	{
		for (int iy = 0; iy < sizey; ++iy)
		{
			std::cout <<data[ix][iy]<<"  ";
		}
		std::cout <<"\n";
	}
}

void trasnpose(double data[][N], double datat[][M], const int sizex, const int sizey)
{
		for (int ix = 0; ix < sizex; ++ix)
	{
		for (int iy = 0; iy < sizey; ++iy)
		{
			datat[iy][ix]=data[ix][iy];
		}
		std::cout <<"\n";
	}
}