#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::cin;

/*Se inicializan las funciones 'matrix_product' y 'get_matrix'con sus respectivos parámetros de entrada*/

double **matrix_product(double **a, double **b, int fila1, int col1, int fil2, int col2);
double **get_matrix(int M, int N);

int main(){

/*Se inicializan la variables del tamaño de filas/columnas que toma el imput
 Y se realiza el codigo para preguntar el valor de entrada de las filas/columnas*/

int a1; int b1; int a2; int b2;

cout << "Ingrese un numero column primer mat: " << endl;
cin >> a1;

cout << "Ingrese un numero filas primer mat: " << endl;
cin >> b1;

cout << "Ingrese un numero column segunda mat: " << endl;
cin >> a2;

cout << "Ingrese un numero filas segunda mat: " << endl;
cin >> b2;

//cout << <<//
}


double **matrix_product(double **a, double **b, int fila1, int col1, int fil2, int col2){

double **resultado = new double*[fila1];

for (int i=0; i<fila1; i++){
	resultado[i] = new double[col2];
}
int j;
int k;
for(int i =0; i<fila1; i++){
	for(int j=0; j<col2; j++){
		resultado[i][j]=0;
			for(int k=0; k<col1; k++){
				resultado[i][j]= a[i][k]*b[k][j];
}}}
return resultado;
}

/*Se realiza */
double **get_matrix(int M, int N){

	double **r = new double*[M];
	for (int i=0; i<M ;i++){
		r[i] = new double[N];
	}
	
	for (int i=0; i<M ;i++){
		for(int k=0; k<N; k++){
			double val;
			
			cout << "Ingrese el valor matriz i"<< i << "valor j: " << k << endl;
	 		std::cin >> val;
			r[i][k]= val;

		}
	}

return r;
}


