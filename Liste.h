
#pragma once
#include<iostream>
using namespace std;
typedef struct lst {
	int value;
	int distance;
	struct lst* svt;
}LST;
class Liste
{
public:
	LST* L;
public:
	Liste();
	LST* creerNoeud(int value,int distance);
	void inserer(int value, int distance);
	void afficher();
	void addList(LST* L);
	LST* getNeighbour(int value);
	~Liste();
};
