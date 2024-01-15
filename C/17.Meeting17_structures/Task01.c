#include<stdio.h>

struct point2f {
	float x;
	float y;
};

struct triangle2 {
	struct point2f vertex1;
	struct point2f vertex2;
	struct point2f vertex3;
};

struct circle {
	float radius;
	struct point2f center;
};

struct rect2df {
	float x;
	float y;
	float width;
	float height;
};

struct polygon {
	int numVertices;
	struct point2f vertices[8];
};