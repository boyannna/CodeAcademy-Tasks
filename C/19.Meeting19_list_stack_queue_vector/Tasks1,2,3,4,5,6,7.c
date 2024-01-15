#include<stdio.h>
#include<stdbool.h>
#define VECTOR_INIT_CAPACITY 10

typedef struct my_vector{
	char** data;
	size_t size;
	size_t capacity;
} my_vector;

//Task1
void my_vector_init(my_vector* v){

	v->size = 0;
	v->capacity = VECTOR_INIT_CAPACITY;
	v->data = (char**)malloc(v->capacity * sizeof(char*));
}
bool my_vector_empty(my_vector v){

	return v.size == 0;
}
void my_vector_clear(my_vector v){

	for (int i = 0; i < v.size; i++){
		free(v.data[i]);
	}
	v.size = 0;
}
size_t my_vector_size(my_vector v) {

	return v.size;
}

//Task2
void my_vector_push_back(char* data, my_vector* vec){

	if (vec->size >= vec->capacity) {
		vec->capacity *= 2;
		vec->data = (char**)realloc(vec->data, vec->capacity * sizeof(char*));
	}
	vec->data[vec->size++] = data;
}
void my_vector_insert(char* data, my_vector* vec, size_t pos) {

	if (pos > vec->size) {
		printf("It is not allowed\n");
		return;
	}

	if (vec->size == vec->capacity) {
		vec->capacity *= 2;
		vec->data = (char**)realloc(vec->data, vec->capacity * sizeof(char*));
	}

	for (int i = vec->size; i > pos; i--) {
		vec->data[i] = vec->data[i - 1];
	}
	vec->data[pos] = data;
	vec->size++;
}

//Task3
void my_vector_pop_back(my_vector vec){

	if (vec.size == 0) {
		return;
	}

	free(vec.data[vec.size - 1]);
	vec.data[vec.size - 1] = NULL;
	vec.size--;
}
void my_vector_erase(my_vector vec, size_t pos) {

	if (pos >= vec.size) {
		return;
	}

	free(vec.data[pos]);

	for (int i = pos; i < vec.size - 1; i++) {
		vec.data[i] = vec.data[i + 1];
	}
	vec.size--;
}

//Task4
size_t my_vector_capacity(my_vector vec){

	return vec.capacity;
}
void my_vector_reserve(my_vector vec, size_t minCapacity){

	if (vec.capacity >= minCapacity) {
		return;
	}

	char** newData = (char**)realloc(vec.data, sizeof(char*) * minCapacity);
	if (newData) {
		vec.data = newData;
		vec.capacity = minCapacity;
	}
}

//Task5
void my_vector_resize(my_vector vec, size_t elementsCount) {
	
	if (elementsCount > vec.capacity) {
		my_vector_reserve(vec, elementsCount);
	}
	vec.size = elementsCount;
}
void my_vector_resize_init(my_vector vec, size_t elementsCount, char* defaultValue) {
	
	if (elementsCount > vec.capacity) {
		my_vector_reserve(vec, elementsCount);
	}

	for (size_t i = vec.size; i < elementsCount; i++) {
		vec.data[i] = defaultValue;
	}
	vec.size = elementsCount;
}

//Task6
char* my_vector_front(my_vector vec){

	if (vec.size == 0) {
		return NULL;
	}
	return vec.data[0];
}
char* my_vector_back(my_vector vec){

	if (vec.size == 0) {
		return NULL;
	}
	return vec.data[vec.size - 1];
}
char* my_vector_at(my_vector vec, size_t index) {

	if (index >= vec.size) {
		return NULL;
	}
	return vec.data[index];
}

//Task7
void my_vector_iterate(my_vector vec, void (*iterFunc)(char*)){

	for (int i = 0; i < vec.size; i++){
		iterFunc(vec.data[i]);
	}
}
