#include<stdio.h>
#include<stdbool.h>

#ifndef MY_LIB_H
#define MY_LIB_H

#define ARR_ROWS4 4
#define ARR_COLS4 4

#define ARR_BLOCK3 3
#define ARR_ROWS3 3
#define ARR_COLS3 3

void print3(const float arr[ARR_ROWS3][ARR_COLS3]);
void input3(const float arr[ARR_ROWS3][ARR_COLS3]);

void print(const float arr[ARR_ROWS4][ARR_COLS4]);
void input(const float arr[ARR_ROWS4][ARR_COLS4]);

void multiply              (const float arr[ARR_ROWS4][ARR_COLS4], const float arr2[ARR_ROWS4][ARR_COLS4], float arr3[ARR_ROWS4][ARR_COLS4]);
void areSame               (const float arr[ARR_ROWS4][ARR_COLS4], const float arr2[ARR_ROWS4][ARR_COLS4]);
int identityMatrix        (const float arr[ARR_ROWS4][ARR_COLS4]);
void swapPositionsRows     (float arr[ARR_ROWS3][ARR_COLS3], int position1, int position2);
void swapPositionsCols     (float arr[ARR_ROWS3][ARR_COLS3], int position1, int position2);
void multiplyWithNumber2D  (float arr[ARR_ROWS3][ARR_COLS3], float number);
void input3D               (const float arr[ARR_BLOCK3][ARR_ROWS3][ARR_COLS3]);
void print3D               (const float arr[ARR_BLOCK3][ARR_ROWS3][ARR_COLS3]);
void multiplyWithNumber3D  (float arr[ARR_BLOCK3][ARR_ROWS3][ARR_COLS3], float number);
void multiplyWith3Vector   (float arr[ARR_ROWS3][ARR_COLS3], const float arr2[3]);
void multiplyMatrix        (const float arr[ARR_ROWS3][ARR_COLS3],const float arr2[ARR_ROWS3][ARR_COLS3], float arr3[ARR_ROWS3][ARR_COLS3]);
int uniqueCols            (const float arr[ARR_ROWS3][ARR_COLS3]);
void sumRows               (const float arr[ARR_ROWS3][ARR_COLS3]);
void sumCols               (const float arr[ARR_ROWS3][ARR_COLS3]);
int search                (const float arr[ARR_ROWS3][ARR_COLS3], const float arr2[3]);

#endif