#include <iostream>  // Biblioteca para entrada y salida de datos
using namespace std;   // Permite usar cout y cin sin std::

// Parte 3: Uso de punteros para imprimir en orden inverso
// Un puntero es una variable que almacena la dirección de memoria de otra variable.
// La operación *(arr + i) accede al valor en la posición i, desplazándose desde la dirección inicial.
void imprimirInverso(int* arr, int tam) {
    cout << "Imprimiendo en orden inverso: ";
    for (int i = tam - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";  // Desreferenciamos el puntero desplazado para obtener el valor
    }
    cout << endl;
}

// Parte 4: Reto final – Filtro por promedio
// Esta función filtra valores mayores al promedio en un nuevo arreglo
void filtrarMayoresPromedio(int* arr, int tam, int* outArr, int& outTam) {
    int total = 0;
    for (int i = 0; i < tam; i++) total += arr[i];

    double promedio = static_cast<double>(total) / tam;  // Cálculo del promedio
    outTam = 0;

    // Llenar outArr con los valores mayores al promedio
    for (int i = 0; i < tam; i++) {
        if (arr[i] > promedio) {
            outArr[outTam++] = arr[i];
        }
    }

    // Extra: ordenar el arreglo resultante de mayor a menor (orden descendente)
    for (int i = 0; i < outTam - 1; i++) {
        for (int j = 0; j < outTam - i - 1; j++) {
            if (outArr[j] < outArr[j + 1]) {
                int temp = outArr[j];
                outArr[j] = outArr[j + 1];
                outArr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // Demostración Parte 3
    int arrDemo[8] = { 5, 10, 15, 20, 25, 30, 35, 40 };
    cout << "Array demo (8 elementos): ";
    for (int i = 0; i < 8; i++) cout << arrDemo[i] << " ";
    cout << endl;
    imprimirInverso(arrDemo, 8);  // Llamada a la función con punteros

    // Separador entre partes
    cout << "\n--- Reto Final: Filtro por promedio ---" << endl;

    const int TAM4 = 15;
    int arreglo[TAM4];
    cout << "Ingrese " << TAM4 << " números enteros:" << endl;
    for (int i = 0; i < TAM4; i++) {
        cout << "Valor " << i << ": ";
        cin >> arreglo[i];
    }

    // Filtrar valores mayores al promedio
    int mayores[TAM4];
    int tamMayores = 0;
    filtrarMayoresPromedio(arreglo, TAM4, mayores, tamMayores);

    // Mostrar arreglos
    cout << "\nArreglo original: ";
    for (int i = 0; i < TAM4; i++) cout << arreglo[i] << " ";
    cout << endl;

    cout << "Valores mayores al promedio (orden descendente): ";
    for (int i = 0; i < tamMayores; i++) cout << mayores[i] << " ";
    cout << endl;

    return 0;
}
