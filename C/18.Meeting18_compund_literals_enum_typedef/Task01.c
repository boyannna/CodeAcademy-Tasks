#include<stdio.h>
#include<string.h>
#define MAX_SIZE 64

typedef const enum AnimalType{ Herbivore, Carnivore, Omnivore } AnimalType;

typedef struct Animal {
	const char* name;
	//char name[MAX_SIZE];
	AnimalType type;
	struct Animal* animalPtr;
} animal;

typedef animal* animal_ptr;

void printAnimal(const animal_ptr arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%s\n", arr[i].name);
		printf("%d\n", arr[i].type);
	}
}


int main() {

	animal anim[3] = {
		{
			.name = "Lion",
			.type = Carnivore
		},
		{
			.name = "Giraffe",
			.type = Herbivore
		},
		{
			.name = "Raven",
			.type = Omnivore
		}
	};

	printAnimal(anim,3);

	return 0;
}