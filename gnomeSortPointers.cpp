#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;



void gnomeSort(int* arr, int tamano); // ordenar arreglo , declarando funcion

void Print(int tam, int arr[]); // imprimir arreglo , declaran do funcion



int main()
{
	const int tam = 20; //declarando una constante de tipo entero con el tamano del array
	
	int arr[tam]; //declarando el array el cual a continuacion insertaremos los numeros

	for (int i = 0; i < tam; ++i)
	{
		arr[i] = rand() % 50 ; //creando array con numeros aleatorios los cuales son del 0 al 50
	}

	cout << "Desordenado--> ";
	Print(tam, arr); //Imprimiendo arreglo desordenado
	gnomeSort(arr, tam); // Funcion de ordenamiento
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "ordenado--->   ";
	Print(tam, arr); // imprimiendo arreglo ordenado

	return 0;
}

void gnomeSort(int* arr, int tam)
{	

	int newTam = tam - 1;

	int* p1 = arr;

	int* p2 = arr + newTam;

	int* pivo = p1;

	while (p1 < p2)
	{
		pivo++;

		while (*p1 > *(p1 + 1)) // mientras el elemento al cual apunta p1 sea mayor al numero que esta en la siguiente posicion ocurre lo siguiente
		{
			int auxiliar = *p1; //intercambiamos los valores para ordenar el array en vez de usar funcion swap usamos punteros
			*p1 = *(p1 + 1);
			*(p1 + 1) = auxiliar;

			if (p1 > arr)
			{
				p1--;
			}
		}
		p1 = pivo;
	}
}


void Print(int tam, int arr[]) // funcion para imprimir el array von un buble que recorra todo el array y vaya imprimiendo 1 por uno
{
	for (int i = 0; i < tam; i++)
	{
		cout << arr[i] << " , ";
	}
	
}