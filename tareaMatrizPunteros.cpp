// tareaMatrizPunteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <windows.h>

using namespace std;

void multiplicacionMatrices();

void recorrer(int** M, int fil, int col);
void print(int** M, int fil, int col);


int main()
{

    cout << "Multiplicacion de Matrizes (Para que se puedan multiplicar el numero de columnas de la matriz 1 debe ser igual al numero de filas de la matriz 2)" << endl;
    Sleep(5000);
    system("cls");

    multiplicacionMatrices();

}




void multiplicacionMatrices()
{
    int f1, c1, filB, colB;

 

    cout << "\nMatriz 1:";
    cout << "\nFilas de la matriz: "; 
    cin >> f1;
    cout << "Columnas de la matriz: "; 
    cin >> c1;

    int** M1 = new int* [f1];
    for (int i = 0; i < f1; i++)
        M1[i] = new int[c1];

    recorrer(M1, f1, c1);

    cout << "\nMatriz 2:";
    cout << "\nFilas de la matriz: "; 
    cin >> filB;
    cout << "Columnas de la matriz: "; 
    cin >> c1;

    int** M2 = new int* [filB];
    for (int i = 0; i < filB; i++)
        M2[i] = new int[c1];

    recorrer(M2, filB, colB);

    int** MatrizAux = new int* [f1];
    for (int i = 0; i < f1; i++)
        MatrizAux[i] = new int[c1];

    if (c1 == filB) {
        for (int i = 0; i < f1; ++i) {
            for (int j = 0; j < colB; ++j) {
                C[i][j] = 0;
                for (int z = 0; z < c1; ++z)
                    C[i][j] += M1[i][z] * M2[z][j];
            }
        }

        cout << "\nMATRIZ 1\n";
        print(M1, f1, c1);
        cout << "\nMATRIZ 2\n";
        print(M2, filB, colB);
        cout << "\nRESULTADO DE MULTIPLICACION (M1*M2):\n";
        print(MatrizAux, f1, colB);

    }
    else
        cout << "\n         error a multiplicar ya que num de columnas de matriz 1 debe ser = a num de filas de matriz 2 " << endl;
}


void print(int** M, int fil, int col)
{
    for (int i = 0; i < fil; i++) {
        cout << "\n ";
        for (int j = 0; j < col; j++)
            cout << M[i][j] << " ";

        cout << " ";
    }
    cout << endl;
}


void recorrer(int** M, int fil, int col)
{
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            M[i][j] = rand() % 5;
            cout << "\t" << M[i][j];
        }
        cout << endl;
    }
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
