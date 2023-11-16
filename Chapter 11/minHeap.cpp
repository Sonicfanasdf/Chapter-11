#include "minHeap.h"

template<class Item>
int minHeap<Item>::heapSize()
{
	return heap.size();
}

template<class Item>
bool minHeap<Item>::isEmpty()
{
	return heap.empty()
}

template<class Item>
void minHeap<Item>::push(Item entry)
{
	heap.push_back(entry);
}