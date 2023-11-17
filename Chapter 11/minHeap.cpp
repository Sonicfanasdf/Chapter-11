#include "minHeap.h"

template<class Item>
minHeap<Item>::minHeap()
{
	make_heap(heap.begin(), heap.end(), greater<Item>());
}

template<class Item>
int minHeap<Item>::size()
{
	return heap.size();
}

template<class Item>
bool minHeap<Item>::empty()
{
	return heap.empty();
}

template<class Item>
void minHeap<Item>::push(Item entry)
{
	heap.push_back(entry);
	make_heap(heap.begin(), heap.end(), greater<Item>());
}

template<class Item>
Item minHeap<Item>::front()
{
	return heap.front();
}

template<class Item>
void minHeap<Item>::pop()
{
	pop_heap(heap.begin(), heap.end());
	heap.pop_back();
}

template<class Item>
void minHeap<Item>::displayHeap()
{
	cout << "\n\t\t\tThe Heap: ";
	for (int i = 0; i < heap.size(); i++)
	{
		cout << heap[i] << " ";
	}

	cout << endl;
}

