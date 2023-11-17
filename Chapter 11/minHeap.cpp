#include "minHeap.h"

template<class Item>
minHeap<Item>::minHeap()
{
	make_heap(heap.begin(), heap.end(), greater<Item>());
}

template<class Item>
int minHeap<Item>::sizeHeap()
{
	return heap.size();
}

template<class Item>
bool minHeap<Item>::emptyHeap()
{
	return heap.empty();
}

template<class Item>
void minHeap<Item>::pushHeap(Item entry)
{
	heap.push_back(entry);
	make_heap(heap.begin(), heap.end(), greater<Item>());
}

template<class Item>
Item minHeap<Item>::frontHeap()
{
	return heap.front();
}

template<class Item>
void minHeap<Item>::popHeap()
{
	pop_heap(heap.begin(), heap.end(), greater<Item>());

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

