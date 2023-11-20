#pragma once
#include "MaxHeap.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int inputInteger(string prompt);

template <class T>
class MaxHeap
{
private:
	vector <T> Heap;
public:
	
	// Constructor
	MaxHeap();

	// Public member functions
	int getSize();
	bool checkEmpty();
	T getFront();
	void popHeap();
	void pushHeap(T value);
	void display();
};

