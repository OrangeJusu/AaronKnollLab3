#include <iostream>
#include "Stack.h"
#include "Item.h"

using namespace std;

int main() {
	Stack list(5);

	list.Pop();

	list.Push(1);
	list.display();

	list.Push(2);
	list.Push(3);
	list.Push(4);
	list.Push(5);
	list.Push(6);
	list.display();
	
	list.Pop();
	list.display();

	list.Push(6);
	list.display();

	cout << list.getTop()->data << endl;

	return 0;
}
