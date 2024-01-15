#include<stdio.h>
#include<stdbool.h>

typedef struct point2f {
	float x;
	float y;
}point2f;

typedef struct circle {
	float radius;
	struct point2f center;
}circle;

bool circlesOverlap(circle c1, circle c2) {

	float distance = sqrt(pow(c2.center.x - c1.center.x, 2) + pow(c2.center.y - c1.center.y, 2));

	return distance < c1.radius + c2.radius;
}