#include <iostream>
#include "Graphe.h"

using namespace std;

int main() {
    // Créer un graphe
    Graphe* graphe = new Graphe();

    // Créer des listes pour chaque sommet
    Liste* L1 = new Liste();
    Liste* L2 = new Liste();
    Liste* L3 = new Liste();
    Liste* L4 = new Liste();
    Liste* L5 = new Liste();
    Liste* L6 = new Liste();


    L1->inserer(1, 1);
    L1->inserer(2, 3);

    L2->inserer(0, 1);
    L2->inserer(2, 1);
    L2->inserer(3, 3);

    L3->inserer(0, 3);
    L3->inserer(1, 1);
    L3->inserer(4, 4);
    L3->inserer(3, 0);

    L4->inserer(3, 1);
    L4->inserer(3, 5);
    L4->inserer(2, 0);

    L5->inserer(5, 6);
    L5->inserer(2, 4);

    L6->inserer(3, 5);
    L6->inserer(4, 6);




    graphe->inserer(L1, 0);
    graphe->inserer(L2, 1);
    graphe->inserer(L3, 2);
    graphe->inserer(L4, 3);
    graphe->inserer(L5, 4);
    graphe->inserer(L6, 5);


    graphe->Dijkstra(0,5);






    delete graphe; // Nettoyer la mémoire
    return 0;
}
