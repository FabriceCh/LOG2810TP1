#include "Arc.h"
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
int Arc::GetDistance()
{
	return distance_;
};
void Arc::SetDistance(int d)
{
	distance_ = d;
};

int Arc::GetEssenceMaxA()
{
	return EssenceMaxA_;
};
void Arc::SetEssenceMaxA(int essMaxA)
{
	EssenceMaxA_ = essMaxA;
};

int Arc::GetEleMaxA()
{
	return EleMaxA_;
};
void Arc::SetEleMaxA(int eleMaxA)
{
	EleMaxA_ = eleMaxA;
};

Sommet* Arc::GetSommetA()
{
	return sommetA_;
};
void Arc::SetSommetA(Sommet* sommet)
{
	sommetA_ = sommet;
};

Sommet* Arc::GetSommetB()
{
	return sommetB_;
};
void Arc::SetSommetB(Sommet* sommet)
{
	sommetB_ = sommet;
};
