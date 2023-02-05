#include "Rectangle.h"

Rectangle::Rectangle()
{
	height = 5;
	width = 6;
}

Rectangle::~Rectangle()
{

}

void Rectangle::Size()
{
	product = height * width;
}

void Rectangle::Draw()
{
	printf("éläpå`ÇÃñ êœÇÕ%d\n", product);
}