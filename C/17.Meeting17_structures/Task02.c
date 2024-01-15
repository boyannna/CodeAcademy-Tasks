#include<stdio.h>
#include<stdbool.h>
#include <math.h>

typedef struct point2f {
	float x;
	float y;
} point2f;

typedef struct circle {
	float radius;
	struct point2f center;
} circle;

bool pointInsideCircle(point2f p, circle c) {

    double distanceToCenter = sqrt((p.x - c.center.x) * (p.x - c.center.x) + (p.y - c.center.y) * (p.y - c.center.y));
    
	return distanceToCenter <= c.radius;
}