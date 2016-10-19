#pragma once
#include <iostream>
#include <string>
#include <list>


#include "Arc.cpp"
#include "Sommet.cpp"

using namespace std;

class Graphe
{
	public: 
		//constructeur par d�faut
		Graphe();
		//constructeur par param�tre
		Graphe(int ess, int essMax, int ele, int eleMax, list<Arc> listeArc, list<Sommet> listeSommet);
		//

private:
		int essenceMax_;
		int essence_;
		int electriciteMax_;
		int electricite_;
		list<Arc> listeArc_;
		list<Sommet> listeSommet_;
};