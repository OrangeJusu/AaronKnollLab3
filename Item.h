#pragma once
#include <iostream>

using namespace std;

class Item {
public:
	int data;
	Item* next;

	Item(int v) {
		data = v;
		next = nullptr;
	}
	int getData() {
		return data;
	}
};
