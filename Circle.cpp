#include "Circle.h"

Circle::Circle()
{
	radius = 4;
	Size();
	Draw();
}

Circle::~Circle()
{

}

void Circle::Size()
{
	product = radius * 3.14;
}

void Circle::Draw()
{
	printf("â~ÇÃñ êœÇÕ%f\n", product);
}