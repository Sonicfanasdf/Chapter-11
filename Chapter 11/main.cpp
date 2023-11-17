#include<iostream>
#include<string>
#include"input.h"
#include"minHeap.cpp"
#include"MaxHeap.cpp"
using namespace std;

void Option1();
void Max_Heap();
void Min_Heap();

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
            system("cls");
            Option1();
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

void Option1()
{
    do
    {
        system("cls");
        cout << "\n\t\t1> Heap using vector";
        cout << "\n\t\t" + string(70, char(205));
        cout << "\n\t\t\tA> Min heap";
        cout << "\n\t\t\tB> Max heap";

        cout << "\n\t\t" + string(70, char(196));
        cout << "\n\t\t\t0> return";
        cout << "\n\t\t" + string(70, char(205));

        switch (toupper(inputChar("\n\t\t\tOption: ", static_cast<string>("AB0"))))
        {
        case '0': return;
        case 'A': system("cls"); Min_Heap(); break;
        case 'B': system("cls"); Max_Heap(); break;
        default: cout << "\t\t\tERROR - Invalid option."; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}

//Precondition: NA
//Postcondition: Display Option Max Heap Option
void Max_Heap()
{
    MaxHeap<int> heap;

    do
    {
        system("cls");
        cout << "\n\t\tB> Max Heap";
        cout << "\n\t\t" + string(70, char(205));
        cout << "\n\t\t\t1. size";
        cout << "\n\t\t\t2. empty";
        cout << "\n\t\t\t3. push";
        cout << "\n\t\t\t4. front";
        cout << "\n\t\t\t5. pop";
        cout << "\n\t\t\t6. display";

        cout << "\n\t\t" + string(70, char(196));
        cout << "\n\t\t\t0> return";
        cout << "\n\t\t" + string(70, char(205));

        switch (inputInteger("\n\t\t\tOption: ", 0, 6))
        {
        case 0: return;
        case 1:
        {
            cout << "\n\t\t\tSize of the heap: " << heap.getSize() << "\n";
        }
        break;

        case 2:
        {
            if (heap.checkEmpty())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                cout << "\n\t\t\tThe heap is not empty.\n";
            }
        }
        break;

        case 3:
        {
            heap.pushHeap(inputInteger("\n\t\t\tEnter an integer element to push onto the heap: "));
        }
        break;

        case 4:
        {
            if (heap.checkEmpty())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                cout << "\n\t\t\tThe first element of the heap: " << heap.getFront() << "\n";
            }
        }
        break;

        case 5:
        {
            if (heap.checkEmpty())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                cout << "\n\t\t\tThe first element of the heap has been removed: " << heap.getFront() << "\n";
                heap.popHeap();
            }
        }
        break;

        case 6:
        {
            if (heap.checkEmpty())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                heap.display();
            }
        }
        break;

        default: cout << "\t\t\tERROR - Invalid option."; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}

void Min_Heap()
{
    minHeap<int> heap2;

    do
    {
        system("cls");
        cout << "\n\t\tA> Min Heap";
        cout << "\n\t\t" + string(70, char(205));
        cout << "\n\t\t\t1. size";
        cout << "\n\t\t\t2. empty";
        cout << "\n\t\t\t3. push";
        cout << "\n\t\t\t4. front";
        cout << "\n\t\t\t5. pop";
        cout << "\n\t\t\t6. display";

        cout << "\n\t\t" + string(70, char(196));
        cout << "\n\t\t\t0> return";
        cout << "\n\t\t" + string(70, char(205));

        switch (inputInteger("\n\t\t\tOption: ", 0, 6))
        {
        case 0: return;
        case 1:
        {
            cout << "\n\t\t\tSize of the heap: " << heap2.sizeHeap() << "\n";
        }
        break;

        case 2:
        {
            if (heap2.emptyHeap())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                cout << "\n\t\t\tThe heap is not empty.\n";
            }
        }
        break;

        case 3:
        {
            heap2.pushHeap(inputInteger("\n\t\t\tEnter an integer element to push onto the heap: "));
        }
        break;

        case 4:
        {
            if (heap2.emptyHeap())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                cout << "\n\t\t\tThe first element of the heap: " << heap2.frontHeap() << "\n";
            }
        }
        break;

        case 5:
        {
            if (heap2.emptyHeap())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                cout << "\n\t\t\tThe first element of the heap has been removed: " << heap2.frontHeap() << "\n";
                heap2.popMinHeap();
            }
        }
        break;

        case 6:
        {
            if (heap2.emptyHeap())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                heap2.displayHeap();
            }
        }
        break;

        default: cout << "\t\t\tERROR - Invalid option."; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}