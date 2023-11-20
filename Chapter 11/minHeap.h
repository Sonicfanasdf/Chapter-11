#pragma once
#include<iostream>
#include<vector>
using namespace std;

int inputInteger(string prompt);

template<class Item>
class minHeap
{
private:
	vector<Item> heap;
public:
	minHeap();
	int sizeHeap();
	bool emptyHeap();
	void pushMinHeap(Item entry);
	Item frontHeap();
	void popMinHeap();
	void displayHeap();
};