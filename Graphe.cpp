/**
* Implémentation Classe Graphe
* @author : Fabrice Charbonneau, Soukaina Moussaoui et Martin Klissarov
* @date   : 19 octobre 2016
*/

#include "Graphe.h"
///*Constructeurs*///
//constructeur par défaut
Graphe::Graphe()
{
	essence_ = 0;
	essenceMax_ = 0;
	electricite_ = 0;
	electriciteMax_ = 0;
};
//constructeur par paramètre
Graphe::Graphe(int ess, int essMax, int ele, int eleMax, list<Arc> listeArc, list<Sommet> listeSommet)
	:essence_(ess), essenceMax_(essMax), 
	electricite_(ele), electriciteMax_(eleMax),
	listeArc_(listeArc), listeSommet_(listeSommet)
{};

///*Accesseurs*///
const int Graphe::GetEssence()
{
	return essence_;
};
void Graphe::SetEssence(int e)
{
	essence_ = e;
};

const int Graphe::GetEssenceMax()
{
	return essenceMax_;
};
void Graphe::SetEssenceMax(int e)
{
	essence_ = e;
};

const int Graphe::GetElectricite()
{
	return electricite_;
};
void Graphe::SetElectricite(int e)
{
	essence_ = e;
};

const int Graphe::GetElectriciteMax()
{
	return electriciteMax_;
};
void Graphe::SetElectriciteMax(int e)
{
	essence_ = e;
};

///*Ajout dans les listes*///
void Graphe::AjouterArc(Arc arc)
{
	listeArc_.push_back(arc);
};

void Graphe::AjouterSommet(Sommet sommet)
{
	listeSommet_.push_back(sommet);
};