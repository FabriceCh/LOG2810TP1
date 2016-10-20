/**
* Implémentation Classe Sommet
* @author : Fabrice Charbonneau, Soukaina Moussaoui et Martin Klissarov
* @date   : 19 octobre 2016
*/

#include "Sommet.h"
#include "Arc.h"

///*Constructeurs*///
Sommet::Sommet()
{
	type_ = "";
	arcs_ = ;
};
Sommet::Sommet(string type, list<Arc> arcs)
	:type_(type), arcs_(arcs)
{};

///*Accesseurs*///
const string Sommet::GetType()
{
	return type_;
};
void Sommet::SetType(string & type)
{
	type_ = type;
};
const list<Arc> Sommet::GetArcs()
{
	return arcs_;
};
const list<Arc> Sommet::GetArcsEmpruntables() 
{
	return arcsEmpruntables_;
};

//Ajout dans les listes
void Sommet::AjouterArc(Arc arc)
{
	arcs_.push_back(arc);
};
void Sommet::AjouterArcEmpruntable(Arc arc)
{
	arcsEmpruntables_.push_back(arc);
};