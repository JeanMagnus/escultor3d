#include <iostream>
#include "sculptor.cpp"
#include <math.h>

using namespace std;

int main()
{
    Sculptor arvore(50,50,50);
    arvore.setColor(0,1,0,1);
    arvore.putBox(0,25,0,0,0,25); //grama
    arvore.setColor(0.34,0.18,0.05,1);
    arvore.putBox(11,14,1,8,11,14); // tronco arvore
    arvore.setColor(0.054,0.211,0.031,1);
    arvore.putBox(8,17,8,14,8,17); //topo da arvore
    arvore.cutBox(8,8,8,14,8,8); //corte lateral 
    arvore.cutBox(17,17,8,14,17,17); // corte lateral 2
    arvore.cutBox(17,8,8,14,17,8); // corte lateral 3
    arvore.writeOFF((char*)"arvore.off");
    
    return 0;
}