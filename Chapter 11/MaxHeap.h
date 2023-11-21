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
	MaxHeap(const vector<T>& array);

	// Public member functions
	int getSize();
	bool checkEmpty();
	T getFront();
	void popHeap();
	void pushHeap(T value);
	void display();
	bool search(const T& Item);
	void sort();
	bool isHeap(const vector<T>& array);

	bool operator<(MaxHeap<T> obj);
};

