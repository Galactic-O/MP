#ifndef MATRIZ2D_1
#define MATRIZ2D_1

#include "TipoBase.h"

class Matriz2D{
	private:
		Matriz datos;
		int filas;
		int columnas;

	public:
		Matriz2D();
		Matriz2D(const int);
		Matriz2D(const int, const int);
		Matriz2D(const int, const int, const TipoBase);
		Matriz2D(const Matriz2D &);
		~Matriz2D();

		bool EstaVacia() const;
		void ModificarValor (const int ,const int ,const TipoBase );
		TipoBase LeerValor (const int ,const int ) const;
		void CambiarTamanio(const int, const int);
		int Filas() const;
		int Columnas() const;
		void RellenarAleatorios(const int, const int);

	private:
		void Inicializar(const TipoBase);
		void LiberarMemoria();
		void ReservarMemoria(const int, const int);
		void CopiarDatos(const Matriz2D &);

};



#endif