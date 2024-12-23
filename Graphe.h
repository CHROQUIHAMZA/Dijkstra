#pragma once
#include<iostream>
#include<vector>
#include"Liste.h"
using namespace std;
class Graphe
{
	
private:
	vector<Liste*> G;
public:
	Graphe();
	void inserer(Liste* L);
	void afficher();
	void Dijkstra();
	~Graphe();
};

