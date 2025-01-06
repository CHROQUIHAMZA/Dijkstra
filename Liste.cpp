
#include "Liste.h"

Liste::Liste()
{
    L = nullptr;
}

LST* Liste::creerNoeud(int value, int distance)
{
    LST* ne = new LST();
    if (!ne) {
        exit(0);
    };
    ne->svt = nullptr;
    ne->value = value;
    ne->distance = distance;
    return ne;
}
LST* Liste::getNeighbour(int value) {
    LST* temp = L;
    while (temp != nullptr) {
        if (temp->value == value) {
            return temp;
        }
        temp = temp->svt;
    }
    return nullptr;  // Pas de voisin trouvé
}

void Liste::inserer(int value,int distance)
{
    LST* ne = creerNoeud(value,distance);
    if (!L) L = ne;
    else {
        LST* courant = L;
        while (courant->svt) courant = courant->svt;
        courant->svt = ne;
    }

}

void Liste::afficher()
{
    for (LST* courant = L; courant;) {
        cout << courant->value << " (" << courant->distance << ") ";
        courant = courant->svt;
    }
    cout << endl;
}
void Liste::addList(LST* ne) {

    if (!L) {
        L = ne;
        return;
    }
    LST* courant = L;
    while (courant->svt) courant = courant->svt;
    courant->svt = ne;
    return;

}


Liste::~Liste()
{
    while (L)
    {
        LST* temp = L;
        L = L->svt;
        delete temp;
    }

}
