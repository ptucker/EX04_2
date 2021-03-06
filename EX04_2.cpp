// EX04_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int* doubleCapacity(const int* list, int size)
{
	int* newList = new int[size * 2];

	for (int i = 0; i < size; i++)
	{
		newList[i] = list[i];
	}
	return newList;
}

int main()
{
	int SZ = 2;
	const int list1[2] = { 0, 1 };
	int* array = doubleCapacity(list1, 2);

	for (int i = 0; i < SZ * 2; i++)
		cout << array[i] << endl;

	return 0;
}