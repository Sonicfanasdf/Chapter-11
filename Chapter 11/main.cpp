#include<iostream>
#include<string>
#include"input.h"
#include"minHeap.h"
using namespace std;

int main()
{
	minHeap<int> min;
	do
	{
		cout << "\n\tCMPR131 Chapter 11: Heaps by Joe Bryant (11/20/23)\n";
		cout << "\t" << string(100, char(205)) << endl;
		cout << "\t\t1> Heap using vector\n";
		cout << "\t\t2> Union and intersect of heaps\n";
		cout << "\t\t3> Heap in C++ STL\n";
		cout << "\t" << string(100, char(196)) << endl;
		cout << "\t\t0> Exit\n";
		cout << "\t" << string(100, char(205)) << endl;

		switch (inputInteger("\t\tOption: ", 0, 3))
		{
		case 0:
		{
			exit(1);
		}
		break;
		case 1:
		{
			min.push(3);
			min.heapSize();
		}
		break;
		case 2:
		{

		}
		break;
		case 3:
		{

		}
		break;
		}
	} while (true);
	
	return 0;
}