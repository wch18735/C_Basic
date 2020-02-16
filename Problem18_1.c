#include<stdio.h>

// 문제1: 아래에 보이는 main 함수에서 물음표 ??? 을 대신할 수 있는 포인터 변수를 선언해보자
/*
	int * arr1[5];
	int * arr2[3][5];

	??? = arr1;
	??? = arr2;

*/

int main() {
	int * arr1[5];
	int * arr2[3][5];

	// int * arr1[5]; 는 int 형 포인터 변수를 가리키는 배열을 가리키는 포인터이다
	int **ptr1 = arr1;

	// int * arr2[3][5] 는 행:3, 열:5 인 2차원 배열이며 그 원소는 int형 포인터 변수이다. 따라서
	int* (*ptr2)[5] = arr2; //라고 선언할 수 있다.

	// int* : 포인터가 가리키는 원소 형태
	// (*ptr2): ptr2 가 포인터임을 나타냄
	// [5]: 포인터 연산 시 5칸씩 진행 됨
}