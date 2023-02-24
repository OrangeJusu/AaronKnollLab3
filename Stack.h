#pragma once
#include <iostream>
#include "Item.h"

using namespace std;

class Stack {
private:
	Item* top;
	Item* bot;
	int maxItems;
	int currentItems;
public:
	Stack(int maxI);
	bool isEmpty();
	bool isFull();
	void Push(int val);
	void Pop();
	Item* getTop();
	void display();
};
