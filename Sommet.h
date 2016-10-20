/**
* Classe Sommet
* @author : Fabrice Charbonneau, Soukaina Moussaoui et Martin Klissarov
* @date   : 19 octobre 2016
*/

#pragma once
#include <string>
#include "Arc.h"
#include <list>
using namespace std;

class Sommet
{
	public:
		//Constructeurs
		Sommet();
		Sommet(string type, list<Arc> arcs);
		//Accesseurs
		const string GetType();
		void SetType(string & type);
		const list<Arc> GetArcs();
		const list<Arc> GetArcsEmpruntables();

		//Ajout dans les listes
		void AjouterArc(Arc arc);
		void AjouterArcEmpruntable(Arc arc);
	private:
		string type_;
		list<Arc> arcs_;
		list<Arc> arcsEmpruntables_;
};
