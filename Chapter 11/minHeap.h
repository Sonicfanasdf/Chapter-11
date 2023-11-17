#pragma once
#include<iostream>
#include<vector>
using namespace std;

template<class Item>
class minHeap
{
private:
	vector<Item> heap;
public:
	minHeap();
	int sizeHeap();
	bool emptyHeap();
	void pushHeap(Item entry);
	Item frontHeap();
	void popMinHeap();
	void displayHeap();
};