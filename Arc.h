/**
* Classe Arc
* @author : Fabrice Charbonneau, Soukaina Moussaoui et Martin Klissarov
* @date   : 19 octobre 2016
*/

#pragma once
#include <string>
#include "Sommet.h"

using namespace std;

class Arc
{
	public:
		//constructeurs
		Arc();
		Arc(int d, int EssA, int EleA, Sommet* A, Sommet* B);

		//Accesseurs
		const int GetDistance();
		void SetDistance(int d);

		const int GetEssenceMaxA();
		void SetEssenceMaxA(int essMaxA);

		const int GetEleMaxA();
		void SetEleMaxA(int eleMaxA);

		const Sommet* GetSommetA();
		void SetSommetA(Sommet* sommet);

		const Sommet* GetSommetB();
		void SetSommetB(Sommet* sommet);

	private:
		int distance_;			//Distance entre les sommets A et B
		int EssenceMaxA_;		//Essence maximale au sommet A
		int EleMaxA_;			//Essence maximale au sommet B
		Sommet* sommetA_;		//Sommet A (point de départ)
		Sommet* sommetB_;		//Sommet B (point d'arrivée)
};