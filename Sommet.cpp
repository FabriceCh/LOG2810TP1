#include "Sommet.h"

Sommet::Sommet()
{
	type_ = "";
};
Sommet::Sommet(string type, list<Arc> arcs)
	:type_(type), arcs_(arcs)
{};