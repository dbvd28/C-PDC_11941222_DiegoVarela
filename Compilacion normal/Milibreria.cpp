#include "Milibreria.hpp"
Miclase::Miclase(){

}
void Miclase:: Inicializar(int _contador){
    this->contador=_contador;
}
void Miclase::Contar(int paso){
    contador+=paso;
}
int Miclase::Contador()
{
    return contador;
}
