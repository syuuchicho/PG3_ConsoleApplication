#include "Circle.h"

Circle::Circle()
{
	radius = 4;
	Size();
	Draw();
}

void Circle::Size()
{
	product = radius * 3.14;
}

void Circle::Draw()
{
	printf("�~�̖ʐς�%f\n", product);
}