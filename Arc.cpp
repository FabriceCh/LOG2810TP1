#include "Arc.h"

Arc::Arc()
{
	distance_ = 0;
	sommetA_ = nullptr;
	sommetB_ = nullptr;
};
Arc::Arc(int d, Sommet* A, Sommet* B)
	:distance_(d), sommetA_(A), sommetB_(B)
{};