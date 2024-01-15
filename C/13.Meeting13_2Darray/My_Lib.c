#include"My_Lib.h"

void print(const float arr[ARR_ROWS4][ARR_COLS4]){
	printf("\n The array is: \n");
	for (int i = 0; i < ARR_ROWS4; i++) {
		for (int j = 0; j < ARR_COLS4; j++) {
			printf("%.2f ", arr[i][j]);
		}
		printf("\n");
	}
}
void print3(const float arr[ARR_ROWS3][ARR_COLS3]) {
	printf("\n The array is: \n");
	for (int i = 0; i < ARR_ROWS3; i++) {
		for (int j = 0; j < ARR_COLS3; j++) {
			printf("%.2f ", arr[i][j]);
		}
		printf("\n");
	}
}
void input(const float arr[ARR_ROWS4][ARR_COLS4]) {
	for (int i = 0; i < ARR_ROWS4; i++) {
		for (int j = 0; j < ARR_COLS4; j++) {
			printf("Enter value of array [%d][%d]: ", i, j);
			scanf_s("%f", &arr[i][j]);
		}
	}
}
void input3(const float arr[ARR_ROWS3][ARR_COLS3]) {
	for (int i = 0; i < ARR_ROWS3; i++) {
		for (int j = 0; j < ARR_COLS3; j++) {
			printf("Enter value of array [%d][%d]: ", i, j);
			scanf_s("%f", &arr[i][j]);
		}
	}
}

//Task 1
void multiply(const float arr[ARR_ROWS4][ARR_COLS4], const float arr2[ARR_ROWS4][ARR_COLS4], float arr3[ARR_ROWS4][ARR_COLS4]) {
	for (int i = 0; i < ARR_ROWS4; i++) {
		for (int j = 0; j < ARR_COLS4; j++) {
			arr3[i][j] = arr[i][j] + arr2[i][j];
		}
	}
}
//Task 2
void areSame(const float arr[ARR_ROWS4][ARR_COLS4], const float arr2[ARR_ROWS4][ARR_COLS4]) {

	for (int i = 0; i < ARR_ROWS4; i++) {
		for (int j = 0; j < ARR_COLS4; j++) {
			if (arr[i][j] == arr2[i][j]) {
				continue;
			}
			else {
				printf("\nWARNING!They are not the same.\n");
				return;
			}
		}
	}
	printf("\nThey are the same!\n");	
}
//Task 3
int identityMatrix(const float arr[ARR_ROWS4][ARR_COLS4]) {

	for (int i = 0; i < ARR_ROWS4; i++) {
		for (int j = 0; j < ARR_COLS4; j++) {
			if (i == j && arr[i][j] != 1.0f) {
				return 0;
			}
		}
	}
	return 1;
}
//Task 4 
void swapPositionsRows(float arr[ARR_ROWS3][ARR_COLS3], int position1, int position2) {

	for (int i = 0; i < ARR_ROWS3; i++) {
		for (int j = 0; j < ARR_COLS3; j++) {
			if (i == position1) {
				float temp = arr[position1][j];
				arr[position1][j] = arr[position2][j];
				arr[position2][j] = temp;
			}
		}
	}
}
//Task 5
void swapPositionsCols(float arr[ARR_ROWS3][ARR_COLS3], int position1, int position2) {

	for (int i = 0; i < ARR_ROWS3; i++) {
		for (int j = 0; j < ARR_COLS3; j++) {
			if (j == position1) {
				float temp = arr[i][position1];
				arr[i][position1] = arr[i][position2];
				arr[i][position2] = temp;
			}
		}
	}
}
//Task 6
void input3D(const float arr[ARR_BLOCK3][ARR_ROWS3][ARR_COLS3]) {
	for (int i = 0; i < ARR_BLOCK3; i++) {
		for (int j = 0; j < ARR_ROWS3; j++) {
			for (int k = 0; k < ARR_COLS3; k++) {
				printf("Enter value of array [%d][%d][%d]: ", i, j, k);
				scanf_s("%f", &arr[i][j][k]);
			}
		}
	}
}
void print3D(const float arr[ARR_BLOCK3][ARR_ROWS3][ARR_COLS3]) {
	printf("\n The array is: \n");
	for (int i = 0; i < ARR_BLOCK3; i++) {
		for (int j = 0; j < ARR_ROWS3; j++) {
			for (int k = 0; k < ARR_COLS3; k++) {
				printf("%.2f ", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
void multiplyWithNumber2D(float arr[ARR_ROWS3][ARR_COLS3], float number) {
	for (int i = 0; i < ARR_ROWS3; i++) {
		for (int j = 0; j < ARR_COLS3; j++) {
			arr[i][j] *= number;
		}
	}
}
void multiplyWithNumber3D(float arr[ARR_BLOCK3][ARR_ROWS3][ARR_COLS3], float number) {
	for (int i = 0; i < ARR_BLOCK3; i++) {
		for (int j = 0; j < ARR_ROWS3; j++) {
			for (int k = 0; k < ARR_COLS3; k++) {
				arr[i][j][k] *= number;
			}
		}
	}
}
//Task 7
void multiplyWith3Vector(float arr[ARR_ROWS3][ARR_COLS3], const float arr2[3]) {
	int sum = 0;
	for (int i = 0; i < ARR_ROWS3; i++) {
		for (int j = 0; j < ARR_COLS3; j++) {
			sum += arr[i][j] * arr2[i];
		}
		printf("%d \n", sum);
		sum = 0;
	}
}
//Task 8
void multiplyMatrix(const float arr[ARR_ROWS3][ARR_COLS3], const float arr2[ARR_ROWS3][ARR_COLS3], float arr3[ARR_ROWS3][ARR_COLS3]) {

	for (int i = 0; i < ARR_ROWS3; i++) {
		for (int j = 0; j < ARR_COLS3; j++) {
			float temp = 0.0f;
			temp = (arr[i][0] * arr2[0][j]) + (arr[i][1] * arr2[1][j]) + (arr[i][2] * arr2[2][j]);	
			arr3[j][i] = temp;
		}
	}
}
//Task 9
int uniqueCols(const float arr[ARR_ROWS3][ARR_COLS3]) {
	int counter = 0;
	int number = 0;
	for (int i = 0; i < ARR_ROWS3; i++) {
		for (int j = 0; j < ARR_COLS3; j++) {
			if (arr[j][i] == 1) {
				counter++;
				if (counter == 3) {
					++number;
				}
			}
		}
		counter = 0;
	}
	return number;
}
//Task 10
void sumRows(const float arr[ARR_ROWS3][ARR_COLS3]) {
	float sumRow = 0;
	for (int i = 0; i < ARR_ROWS3; i++) {
		for (int j = 0; j < ARR_COLS3; j++) {
			sumRow += arr[i][j];
			
		}
		printf("Sum of row %d = %.2f \n", i , sumRow);
		sumRow = 0;
	}
}
void sumCols(const float arr[ARR_ROWS3][ARR_COLS3]) {
	float sumCol = 0;
	for (int i = 0; i < ARR_ROWS3; i++) {
		for (int j = 0; j < ARR_COLS3; j++) {
			sumCol += arr[j][i];
		}
		printf("Sum of col %d = %.2f \n", i , sumCol);
		sumCol = 0;
	}
}
//Task 11
int search(const float arr[ARR_ROWS3][ARR_COLS3], const float arr2[3]) {
	int counter = 0;
	for (int i = 0; i < ARR_ROWS3; i++) {
		for (int j = 0; j < ARR_COLS3; j++) {
			if (arr[i][j] == arr2[j]) {
				counter++;
				if (counter == 3) {
					return 1;
				}
			}
		}
		counter = 0;
	}
	return 0;
}
