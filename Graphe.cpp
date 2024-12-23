#include "Graphe.h"
#include<iterator>
Graphe::Graphe()
{
}

void Graphe::inserer(Liste* L)
{
	G.push_back(L);
}

void Graphe::afficher()
{
	for (int i = 0; i < G.size(); i++)
	{
		cout << i << "-->";
		G[i]->afficher();
	}
}
void Graphe::Dijkstra()
{


}
Graphe::~Graphe()
{

}
