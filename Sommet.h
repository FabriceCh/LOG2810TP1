#pragma once
#include <string>
#include <list>
#include "Arc.h"
using namespace std;

class Sommet
{
	public:
		//Constructeurs
		Sommet();
		Sommet(string type, list<Arc> arcs);
		//Accesseurs
		string GetType();
		void SetType(string type);

		//Ajout dans les listes
		void AjouterArc(Arc arc);
		void AjouterArcEmpruntable(Arc arc);
	private:
		string type_;
		list<Arc> arcs_;
		list<Arc> arcsEmpruntables_;
};
/*
EXTRACTION GRAPH 
parcour(Sommet sommet)
{ //graph2 est le nouveau sous-graph
	for each arc in sommet
		if arc.distance < essence + electricite && qteEssence > qteEssenceMax
			ajouter arc in graph2
			ajoute arc.sommetb in graph2 si 
			parcour(sommetb)
}
*/