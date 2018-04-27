#ifndef MATRIZ2D_1
#define MATRIZ2D_1

#include "TipoBase.h"

class Matriz2D{
	private:
		TipoBase ** datos;
		int filas;
		int columnas;

	public:

		//Constructores y destructor
		Matriz2D();
		Matriz2D(const int);
		Matriz2D(const int, const int);
		Matriz2D(const int, const int, const TipoBase);
		Matriz2D(const Matriz2D &);
		~Matriz2D();


		//Operadores
		Matriz2D & operator = (const Matriz2D &);
		Matriz2D & operator = (const TipoBase);
		TipoBase & operator () (const int, const int) const; 
		Matriz2D operator + () const;
		Matriz2D operator - ();

		friend Matriz2D operator + (const Matriz2D &, const Matriz2D &);
		friend Matriz2D operator + (const Matriz2D &, const TipoBase);
		friend Matriz2D operator + (const TipoBase, const Matriz2D &);

		friend Matriz2D operator - (const Matriz2D &, const Matriz2D &);
		friend Matriz2D operator - (const Matriz2D &, const TipoBase);
		friend Matriz2D operator - (const TipoBase, const Matriz2D &);

		//Metodos

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