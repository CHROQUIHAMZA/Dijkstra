#include <iostream>
#include"Liste.h"
#include"Graphe.h"
using namespace std;



int main()
{
    Graphe* G = new Graphe();
    Liste* L = new Liste();
    Liste* L1 = new Liste();
    Liste* L2 = new Liste();

    L->inserer(1,9);
    L->inserer(2,8);
    L->inserer(3,7);
    L->inserer(4,6);
    G->inserer(L);

    L1->inserer(5,5);
    L1->inserer(6,4);
    L1->inserer(7,3);
    G->inserer(L1);

    L2->inserer(8,2);
    L2->inserer(9,1);
    G->inserer(L2);

    G->afficher();





}

