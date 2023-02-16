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
	Stack(int maxI) {
		maxItems = maxI;
		currentItems = 0;
		top = nullptr;
		bot = nullptr;
	}

	bool isEmpty() {
		if (currentItems == 0) {
			return true;
		}
		return false;
	}
	bool isFull() {
		if (currentItems == maxItems) {
			return true;
		}
		return false;
	}
	void Push(int val) {
		Item* item = new Item(val);
		if (!isFull()) {
			if (top == nullptr) {
				top = item;
				bot = top;
			}
			else {
				bot->next = item;
				bot = bot->next;
			}
			currentItems++;
		}
		else {
			cout << "The List is Full!" << endl;
		}
	}
	void Pop() {
		if (!isEmpty()) {
			top = top->next;
			currentItems--;
		}
		else {
			cout << "The List is Empty!" << endl;
		}
	}
	Item* getTop() {
		Item* copyTop = top;
		return copyTop;
	}
	void display() {
		Item* temp = top;
		for (int i = 0; i < currentItems; i++) {
			cout << temp->data << endl;
			temp = temp->next;
		}
		cout << endl;
	}
};
