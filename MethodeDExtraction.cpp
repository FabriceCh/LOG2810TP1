/**
* Méthode d'extraction de graphe
* @author : Fabrice Charbonneau, Soukaina Moussaoui et Martin Klissarov
* @date   : 19 octobre 2016
*/

#include "Graphe.h"
#include "Sommet.h"
#include "Arc.h"
#include <string>

using namespace std;

void Parcour(Sommet & sommet, Sommet** listeSommets, Graphe & graphe)
{
	list<Arc> arcs = sommet.GetArcs();

}

Graphe ExtractionGraphe(Graphe & grapheBase)
{
	Graphe graph2; //Sous-graphe qui sera extrait
	return graph2;
}


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