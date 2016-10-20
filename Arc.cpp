/**
* Implémentation Classe Arc
* @author : Fabrice Charbonneau, Soukaina Moussaoui et Martin Klissarov
* @date   : 19 octobre 2016
*/

#include "Arc.h"
#include "Sommet.h"
///*Constructeurs*///
//Constructeur par défaut
Arc::Arc()
{
	distance_ = 0;
	sommetA_ = nullptr;
	sommetB_ = nullptr;
};

//Constructeur par paramètres
Arc::Arc(int d, int EssA, int EleA, Sommet* A, Sommet* B)
	:distance_(d), EssenceMaxA_(EssA), EleMaxA_(EleA), sommetA_(A), sommetB_(B)
{};

///*Accesseurs*///
const int Arc::GetDistance()
{
	return distance_;
};
void Arc::SetDistance(int d)
{
	distance_ = d;
};

const int Arc::GetEssenceMaxA()
{
	return EssenceMaxA_;
};
void Arc::SetEssenceMaxA(int essMaxA)
{
	EssenceMaxA_ = essMaxA;
};

const int Arc::GetEleMaxA()
{
	return EleMaxA_;
};
void Arc::SetEleMaxA(int eleMaxA)
{
	EleMaxA_ = eleMaxA;
};

const Sommet* Arc::GetSommetA()
{
	return sommetA_;
};
void Arc::SetSommetA(Sommet* sommet)
{
	sommetA_ = sommet;
};

const Sommet* Arc::GetSommetB()
{
	return sommetB_;
};
void Arc::SetSommetB(Sommet* sommet)
{
	sommetB_ = sommet;
};
