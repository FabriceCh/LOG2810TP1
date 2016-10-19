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
		//constructeur par défaut
		Graphe();
		//constructeur par paramètre
		Graphe(int ess, int essMax, int ele, int eleMax, list<Arc> listeArc, list<Sommet> listeSommet);
		//Sets, Gets
		int GetEssence();
		void SetEssence(int e);
		int GetEssenceMax();
		void SetEssenceMax(int e);
		int GetElectricite();
		void SetElectricite(int e);
		int GetElectriciteMax();
		void SetElectriciteMax(int e);
		void AjouterArc(Arc arc);
		void EnleverArc(Arc arc);
private:
		int essenceMax_;
		int essence_;
		int electriciteMax_;
		int electricite_;
		list<Arc> listeArc_;
		list<Sommet> listeSommet_;
};