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
	int size();
	bool empty();
	void push(Item entry);
	Item front();
	void pop();
	void displayHeap();
};