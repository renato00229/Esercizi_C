#include "geometria.h"

bool colineari(struct punto p1, struct punto p2, struct punto p3)
{
	return ((p3.x-p2.x)*(p1.y-p2.y)==(p3.y-p2.y)*(p1.x-p2.x));
}