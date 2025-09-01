#include <iostream>
#include "clsMyStack.h"

using namespace std;

int main()
{
	clsMyStack <int> MyStack;

	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);

	cout << "\nStack:";
	MyStack.Print();

	cout << "\nStack Size: " << MyStack.Size();
	cout << "\nStack Top: " << MyStack.Top();
	cout << "\nStack Bottom: " << MyStack.Bottom();

	MyStack.pop();

	cout << "\n\nStack after pop():";
	MyStack.Print();

	// Extension #1
	cout << "\n\nItem(2): " << MyStack.GetItem(2);

	// Extension #2
	MyStack.Reverse();
	cout << "\n\nStack after reverse: ";
	MyStack.Print();

	// Extension #3
	MyStack.UpdateItem(2, 600);
	cout << "\n\nStack after updating Item(2) to 600:";
	MyStack.Print();

	// Extension #4
	MyStack.InsertAfter(2, 800);
	cout << "\n\nStack after Inserting 800 after Item(2):";
	MyStack.Print();

	// Extension #5
	MyStack.InsertAtFront(1000);
	cout << "\n\nStack after Inserting 1000 at front:";
	MyStack.Print();

	// Extension #6
	MyStack.InsertAtBack(2000);
	cout << "\n\nStack after Inserting 2000 at back:";
	MyStack.Print();

	// Extension #7
	MyStack.Clear();
	cout << "\n\nStack after clear:";
	MyStack.Print();
}
