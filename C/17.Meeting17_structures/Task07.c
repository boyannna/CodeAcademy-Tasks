#include<stdio.h>

typedef struct point2f {
	float x;
	float y;
}point2f;

void printPoint2f(point2f p) {
	printf("Point2f: (%.2f, %.2f)\n", p.x, p.y);
}

typedef struct triangle2 {
	struct point2f vertex1;
	struct point2f vertex2;
	struct point2f vertex3;
}triangle2;

void printTriangle2(triangle2 t) {
	printf("Triangle2:\n");
	printPoint2f(t.vertex1);
	printPoint2f(t.vertex2);
	printPoint2f(t.vertex3);
}	

typedef struct circle {
	float radius;
	struct point2f center;
}circle;

void printCircle(circle c) {
	printf("Radius: %.2f\n", c.radius);
	printf("Circle:\n");
	printPoint2f(c.center);
}

typedef struct rect2df {
	float x;
	float y;
	float width;
	float height;
}rect2df;

void printRect2df(rect2df r) {
	printf("Rectangle with top left corner at (%f, %f), width %f, and height %f\n", r.x, r.y, r.width, r.height);
}

typedef struct polygon {
	int numVertices;
	struct point2f vertices[8];
}polygon;

void printPolygon(polygon p) {
	printf("Number of vertices: %d\n", p.numVertices);

	printf("Polygon:\n");
	for (int i = 0; i < p.numVertices; i++) {
		printPoint2f(p.vertices[i]);
	}
}