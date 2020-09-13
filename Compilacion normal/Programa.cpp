#include "Milibreria.hpp"
#include <iostream>
using namespace std;
int main()
{
    Miclase mc;
    mc.Inicializar();
    mc.Contar(10);
    for (int i = 0; i < 100; i++)
    {
        cout << "Contador= " << mc.Contador() << endl;
        mc.Inicializar(1000);
    }
    cout << "Contador= " << mc.Contador() << endl;
}