#include <iostream>
#include <ctime>   // Recursos para medir tiempos
#include <cstdlib> // Para generación de números pseudoaleatorios
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <climits>
#include <cassert>

using namespace std;
void initMejor(int *v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        v[i] = i;
    }
}

void initPeor(int *v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        v[i] = n - i;
    }
}

void ordenar(int *v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int aux = v[j];
                v[j] = v[j + 1];
            }
        }
    }
}

void sintaxis()
{
    cerr << "Sintaxis:" << endl;
    cerr << "  TAM: Tamaño del vector (>0)" << endl;
    exit(EXIT_FAILURE);
}

int main(int argc, char const *argv[])
{

    if (argc != 2)
        sintaxis();

    int tam = atoi(argv[1]); // Tamaño del vector

    if (tam <= 0)
        sintaxis();

    int v[tam];
    srand(time(0)); // Inicialización del generador de números pseudoaleatorios

    //initMejor(v, tam);
    initPeor(v,tam);
    clock_t tini; // Anotamos el tiempo de inicio

    tini = clock();

    // Algoritmo a evaluar
    ordenar(v, tam);

    clock_t tfin; // Anotamos el tiempo de finalización
    tfin = clock();
    cout << tam << "\t" << (tfin - tini) / (double)CLOCKS_PER_SEC << endl;
    return 0;
}