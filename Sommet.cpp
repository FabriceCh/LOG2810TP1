#include "Sommet.h"
///*Constructeurs*///
Sommet::Sommet()
{
	type_ = "";
};
Sommet::Sommet(string type, list<Arc> arcs)
	:type_(type), arcs_(arcs)
{};

///*Accesseurs*///
string Sommet::GetType()
{
	return type_;
};
void Sommet::SetType(string type)
{
	type_ = type;
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