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
	int heapSize();
	bool isEmpty();
	void push(Item entry);
};