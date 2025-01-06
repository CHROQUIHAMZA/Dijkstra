
#include "Graphe.h"
#include <queue>
#define MAX 10000
using namespace std;

Graphe::Graphe() {
    nbrElem = 0;
    elemts = vector<int>(10, -1);
    G = vector<Liste*>(10, nullptr);
}

Graphe::~Graphe() {
    for (auto liste : G) {
        delete liste;
    }
}

void Graphe::inserer(Liste* L, int index) {
    for (LST* courant = L->L; courant; courant = courant->svt) {
        auto it = find(elemts.begin(), elemts.end(), courant->value);

        if (it == elemts.end()) {
            elemts.insert(elemts.begin() + index, courant->value);
            nbrElem++;
        }
    }

    if (index >= 0 && index <= G.size()) {
        G.insert(G.begin() + index, L);
    }
    else {
        cout << "Index out of bounds!" << endl;
    }



}

void Graphe::afficher() {
    for (int i = 0; i < nbrElem; ++i) {
        cout << "Noeud " << i << " : ";
        if (G[i]) {
            G[i]->afficher();
        }
        cout << endl;
    }
}
void Graphe::Dijkstra(int SNode,int ENode) {
   
    if (G.empty()) {
        cout << "graphe vide" << endl;
        return;
    }
    if (0 > SNode || SNode > nbrElem) {
        cout << "SNode invalide " << endl;
        return;
    }
    if (0 > ENode || ENode > nbrElem) {
        cout << "ENode invalide " << endl;
        return;
    }
    bool* IsVisited = new bool[nbrElem];
    int* Distance = new int[nbrElem];
    int elementTraite = SNode;
    //initialiser les tableaux
    for (int i = 0; i < nbrElem; IsVisited[i++] = false);
    for (int i = 0; i < nbrElem; Distance[i++] = INT_MAX);
    bool isAllvisited = false;
    Distance[elementTraite] = 0;

    for (int count = 0; count < nbrElem - 1; count++) {
        int min = -1;
        for (int i = 0; i < nbrElem; i++) {
            if (!IsVisited[i] && (min == -1 || Distance[i] < Distance[min])) {
                min = i;
            }
        }

        if (min == -1) break;

        IsVisited[min] = true;

        LST* courant = G[min]->L;
        while (courant) {
            if (!IsVisited[courant->value]) {
                int newDist = Distance[min] + courant->distance;
                if (newDist < Distance[courant->value]) {
                    Distance[courant->value] = newDist;
                }
            }
            courant = courant->svt;
        }
    }
    for (int i = 0; i < nbrElem; i++) {
        cout << "Sommets "<<i<<" : ";
        if (Distance[i] == INT_MAX) {
            cout << "infinie" << endl;
        }
        else {
            cout << Distance[i]<<endl;
        }
    }
   







}


