#include "Circle.h"

Circle::Circle()
{
	radius = 4;
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
	printf("�~�̖ʐς�%f\n", product);
}