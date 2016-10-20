/**
* Classe Graphe
* @author : Fabrice Charbonneau, Soukaina Moussaoui et Martin Klissarov
* @date   : 19 octobre 2016
*/

#pragma once
#include <iostream>
#include <string>
#include <list>

#include "Arc.h"
#include "Sommet.h"

using namespace std;

class Graphe
{
	public: 
		//constructeur par défaut
		Graphe();
		//constructeur par paramètre
		Graphe(int ess, int essMax, int ele, int eleMax, list<Arc> listeArc, list<Sommet> listeSommet);
		//Sets, Gets
		const int GetEssence();
		void SetEssence(int e);

		const int GetEssenceMax();
		void SetEssenceMax(int e);

		const int GetElectricite();
		void SetElectricite(int e);

		const int GetElectriciteMax();
		void SetElectriciteMax(int e);

		//Ajout dans les listes
		void AjouterArc(Arc arc);
		void AjouterSommet(Sommet sommet);
		
private:
		int essenceMax_;
		int essence_;
		int electriciteMax_;
		int electricite_;
		list<Arc> listeArc_;
		list<Sommet> listeSommet_;
};