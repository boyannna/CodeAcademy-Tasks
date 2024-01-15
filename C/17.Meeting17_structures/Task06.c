#include<stdio.h>

typedef struct point2f {
	float x;
	float y;
}point2f;

void readPoint2f(point2f* p) {
	printf("Enter point coordinates (x y): ");
	scanf_s("%f %f", &p->x, &p->y);
}

typedef struct triangle2 {
	struct point2f vertex1;
	struct point2f vertex2;
	struct point2f vertex3;
}triangle2;

void readTriangle2(triangle2* t) {

	printf("Enter the coordinates of the first vertex: ");
	scanf_s("%f %f", &t->vertex1.x, &t->vertex1.y);

	printf("Enter the coordinates of the second vertex: ");
	scanf_s("%f %f", &t->vertex2.x, &t->vertex2.y);

	printf("Enter the coordinates of the third vertex: ");
	scanf_s("%f %f", &t->vertex3.x, &t->vertex3.y);
}


typedef struct circle {
	float radius;
	struct point2f center;
}circle;

void readCircle(circle* c) {
	printf("Enter circle center: ");
	readPoint2f(&c->center);

	printf("Enter circle radius: ");
	scanf_s("%f", &c->radius);
}


typedef struct rect2df {
	float x;
	float y;
	float width;
	float height;
}rect2df;

void readRect2df(rect2df* r) {
	printf("Enter the x: ");
	scanf_s("%f", &r->x);
	printf("Enter the y: ");
	scanf_s("%f", &r->y);
	printf("Enter the width: ");
	scanf_s("%f", &r->width);
	printf("Enter the height: ");
	scanf_s("%f", &r->height);
}

typedef struct polygon {
	int numVertices;
	struct point2f vertices[8];
}polygon;

void readPolygon(polygon* p) {
	printf("Enter the number of vertices: ");
	scanf_s("%d", &p->numVertices);

	printf("Enter the coordinates of the vertices: \n");
	for (int i = 0; i < p->numVertices; i++) {
		scanf_s("%f", &p->vertices[i].x);
		scanf_s("%f", &p->vertices[i].y);
	}
}