#pragma once
#include <iostream>
#include "clsMyQueue.h" // You can get this lib from https://github.com/yacineragueb/MyQueue-lib-cpp

using namespace std;

template <typename T>
class clsMyStack: public clsMyQueue <T>
{

public:
	void push(T value) {
		clsMyQueue <T>::_MyDblLinkedList.InsertAtBeginning(value);
	}

	T Top() {
		return clsMyQueue <T>::front();
	}

	T Bottom() {
		return clsMyQueue <T>::back();
	}
};

