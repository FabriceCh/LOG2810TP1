#include "Graphe.h"

//constructeur par d�faut
Graphe::Graphe()
{
	essence_ = 0;
	essenceMax_ = 0;
	electricite_ = 0;
	electriciteMax_ = 0;
};
//constructeur par param�tre
Graphe::Graphe(int ess, int essMax, int ele, int eleMax, list<Arc> listeArc, list<Sommet> listeSommet)
	:essence_(ess), essenceMax_(essMax), 
	electricite_(ele), electriciteMax_(eleMax),
	listeArc_(listeArc), listeSommet_(listeSommet)
{};