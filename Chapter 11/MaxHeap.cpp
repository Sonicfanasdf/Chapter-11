#include "MaxHeap.h"

//************************** Constructor **********************//
// Default constructor
template <class T>
MaxHeap<T>::MaxHeap()
{
	make_heap(Heap.begin(), Heap.end());
}

//************************** Public Functions **********************//

//Precondition: NA
//Postcondition: return the size of the heap
template <class T>
int MaxHeap<T>::getSize()
{
	return Heap.size();
}

//Precondition: NA
//Postcondition: return true if the heap is empty otherwise false
template <class T>
bool MaxHeap<T>::checkEmpty()
{
	return Heap.empty();
}

//Precondition: NA
//Postcondition: return the front element of the heap
template <class T>
T MaxHeap<T>::getFront()
{
	return Heap.front();
}

//Precondition: the heap has to be not empty
//Postcondition: pop the front element of the heap
template <class T>
void MaxHeap<T>::popHeap()
{
	pop_heap(Heap.begin(), Heap.end());
	Heap.pop_back();
}

//Precondition: NA
//Postcondition: insert an element to the heap
template <class T>
void MaxHeap<T>::pushHeap(const T& value)
{
	Heap.push_back(value);
	push_heap(Heap.begin(), Heap.end());
}
	
//Precondition: the heap has to be not empty
//Postcondition: display the heap
template <class T>
void MaxHeap<T>::display()
{
	cout << "\n\t\t\tThe Heap: ";
	for (int i = 0; i < Heap.size(); i++)
	{
		cout << Heap[i] << " ";
	}
	cout << "\n";
}
