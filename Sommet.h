#pragma once
#include <string>
#include <list>
#include "Arc.h"
using namespace std;

class Sommet
{
	public:
		Sommet();
		Sommet(string type, list<Arc> arcs);
	private:
		string type_;
		list<Arc> arcs_;
};