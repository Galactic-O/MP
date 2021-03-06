/*************************************************************/
/**                                                         **/
/**  Autor : Antonio David Villegas Yeguas                  **/
/**  1GII - Universidad de Granada                          **/
/**  Metodologia de la Programacion 2017/18                 **/
/**  Sesion 11 - Ejercicio 11 - Sumar Enteros               **/
/**                                                         **/
/**                                                         **/
/*************************************************************/

#include <iostream>

using namespace std;

int main(){

	//Caracter con el que leemos la entrada
	int n;
	int suma = 0;

	//Pedimos los caracteres
	cout << "Introduce una secuencia de enteros: ";
	//Leemos una cadena, delimitada por la marca
	cin >> n;
	//n = atoi(c);


	while ( !cin.eof() ){

		//Añadimos a la suma
		suma += n;

		cin >> n;
	}

	cout << endl << "La suma es " << suma << endl;


	return 0;
}