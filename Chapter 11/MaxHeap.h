#pragma once
#include "MaxHeap.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

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
	void pushHeap(const T &value);
	void display();
};

