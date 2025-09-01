#pragma once
#include <iostream>
#include "../project-2/clsMyQueue.h"

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

