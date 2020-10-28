#include <iostream>
#include "Lista.h"
using namespace std;
int main()
{
    Lista l;
    l.agregar(5);
    l.agregar(4);
    l.agregar(3);
    l.agregar(1);
    l.borrar(4);
    l.mostrar();
    //l.agregar(11);
    //l.mostrar();
}
