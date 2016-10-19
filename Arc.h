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
		int GetDistance();
		void SetDistance(int d);

		int GetEssenceMaxA();
		void SetEssenceMaxA(int essMaxA);

		int GetEleMaxA();
		void SetEleMaxA(int eleMaxA);

		Sommet* GetSommetA();
		void SetSommetA(Sommet* sommet);

		Sommet* GetSommetB();
		void SetSommetB(Sommet* sommet);

	private:
		int distance_;			//Distance entre les sommets A et B
		int EssenceMaxA_;		//Essence maximale au sommet A
		int EleMaxA_;			//Essence maximale au sommet B
		Sommet* sommetA_;		//Sommet A (point de départ)
		Sommet* sommetB_;		//Sommet B (point d'arrivée)
};