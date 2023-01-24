#include "Rectangle.h"

Rectangle::Rectangle()
{
	height = 5;
	width = 6;
	Size();
	Draw();
}
void Rectangle::Size()
{
	product = width * height;
}

void Rectangle::Draw()
{
	printf("éläpå`ÇÃñ êœÇÕ%d\n", product);
}