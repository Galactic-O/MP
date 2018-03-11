#include <iostream>
#include "MiCadenaClasica.h"

using namespace std;

int main( void ){
	const int MAX = 100;
	char cadenaC [MAX];
	char cadenaC_2 [MAX];
	char cadenaC_copia [MAX];
	char subcadenaC [MAX];
	char cadenaC_invertida [MAX];

	cout << "Introduce una cadena: ";
	cin.getline(cadenaC, MAX);
	cout << "Introduce otra cadena: ";
	cin.getline(cadenaC_2, MAX);

	cout << "Longitud de la cadena 1 : " << longitud_cadena(cadenaC) << endl;

	cout << "La cadena 1 es palindromo : " << es_palindromo(cadenaC) << endl;

	cout << "Comparacion de cadenas : " << comparar_cadenas(cadenaC, cadenaC_2) << endl;

	copiar_cadena(cadenaC_copia, cadenaC);

	cout << "Copia : " << cadenaC_copia << endl;

	encadenar_cadena(cadenaC, cadenaC_2);

	cout << "Nueva cadenaC encadenada : " << cadenaC << endl;

	extraer_subcadena(subcadenaC, cadenaC, 1, 20);

	cout << "Subcadena : " << subcadenaC << endl;

	invertir_cadena(cadenaC_invertida,cadenaC);

	cout << "cadenaC invertida : " <<  cadenaC_invertida;

	return (0);
}