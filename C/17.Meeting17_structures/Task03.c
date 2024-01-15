#include<stdio.h>
#include<stdbool.h>

typedef struct point2f {
	float x;
	float y;
}point2f;

typedef struct rect2df {
	float x;
	float y;
	float width;
	float height;
} rect2df;


bool pointInsideAabb (const point2f point, const rect2df aabb) {
	return (point.x >= aabb.x && point.x <= aabb.y &&
            point.y >= aabb.width && point.y <= aabb.height);
}