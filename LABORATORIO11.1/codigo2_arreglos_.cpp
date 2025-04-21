#include <iostream>  // Biblioteca para entrada y salida de datos

using namespace std;   // Permite usar cout y cin sin el prefijo std::

int main()
{
    const int TAM = 10;           // Definimos el tamaño del arreglo como una constante
    int arreglo[TAM];             // Declaración de un arreglo de enteros de tamaño TAM
    int total = 0;

    // Bucle para leer e ingresar los valores al arreglo
    for (int i = 0; i < TAM; i++) {
        cout << "Ingrese el valor No.: " << i << "." << endl;  // Solicita al usuario el valor en la posición i
        cin >> arreglo[i];                                      // Almacena el valor ingresado en arreglo[i]
        total += arreglo[i];
    }

    // Bucle para mostrar los valores ingresados en el arreglo
    for (int i = 0; i < TAM; i++) {
        cout << "Numero " << i << " del arreglo: " << arreglo[i] << endl;  // Muestra el índice y el valor correspondiente
    }
    cout << "Total: " << total << "\nPromedio: " << (total / TAM) << endl;

    return 0;  // Fin de la función main. En C++ el retorno 0 es implícito si no se especifica.
}
