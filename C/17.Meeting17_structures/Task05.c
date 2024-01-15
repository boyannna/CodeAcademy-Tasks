#include<stdio.h>
#include <math.h>

typedef struct point2f {
	float x;
	float y;
} point2f;

float distance(point2f p1, point2f p2)
{
	return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}