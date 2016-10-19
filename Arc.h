#pragma once
#include <string>
#include "Sommet.h"

using namespace std;

class Arc
{
	public:
		Arc();
		Arc(int d, Sommet* A, Sommet* B);
	private:
		int distance_;
		Sommet* sommetA_;
		Sommet* sommetB_;
};