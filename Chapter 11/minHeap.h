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
	minHeap(const vector<Item>& array);
	int sizeHeap();
	bool emptyHeap();
	void pushMinHeap(Item entry);
	Item frontHeap();
	void popMinHeap();
	void displayHeap();
	bool search(const Item& value);

	bool operator<(minHeap<Item> obj);
};