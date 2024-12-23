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
private:
	LST* L;
public :
	Liste();
	LST* creerNoeud(int value,int distance);
	void inserer(int value,int distance);
	void afficher();
	//LST* supprimerNoeud(int value);
	~Liste();
};

