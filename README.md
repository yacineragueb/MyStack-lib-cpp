# 📚 clsMyStack Library (C++)

## ✨ Overview
A lightweight **C++ template-based stack implementation** built on top of a custom **Queue** library ([clsMyQueue](https://github.com/yacineragueb/MyQueue-lib-cpp)).  
This project provides an easy-to-use stack class with standard operations (LIFO: Last-In First-Out), additional helper methods, and extended functionality beyond the standard C++ `std::stack`.

This project is perfect for learning **Object-Oriented Programming (OOP)** in C++ and for building reusable libraries.

---

## 🚀 Features

- Generic template support (`clsMyStack<T>`) for any data type.
- Stack operations implemented using a **Doubly Linked List**:
  - `push()` → Add item on top of the stack.
  - `pop()` → Remove item from the top.
  - `Top()` → Get the top element.
  - `Bottom()` → Get the bottom element.
- Utility functions:
  - `Print()` → Display all elements.
  - `Size()` → Get the number of elements.
  - `IsEmpty()` → Check if stack is empty.
  - `Clear()` → Remove all elements.
- Extended operations (not available in `std::stack`):
  - `GetItem(index)` → Access element by index.
  - `UpdateItem(index, value)` → Update element at index.
  - `InsertAfter(index, value)` → Insert after a given index.
  - `InsertAtFront(value)` → Insert at beginning.
  - `InsertAtBack(value)` → Insert at end.
  - `Reverse()` → Reverse the stack.

---

## 💻 Example Usage

```cpp
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
    return 0;
}

// Expected Output
/*
Stack:
50 40 30 20 10

Stack Size: 5
Stack Top: 50
Stack Bottom: 10

Stack after pop():
40 30 20 10

Item(2): 20

Stack after reverse:
10 20 30 40

Stack after updating Item(2) to 600:
10 20 600 40

Stack after Inserting 800 after Item(2):
10 20 600 800 40

Stack after Inserting 1000 at front:
1000 10 20 600 800 40

Stack after Inserting 2000 at back:
1000 10 20 600 800 40 2000

Stack after clear:

*/
```

---

## 🛠️ Requirements: 
- A C++ compiler (GCC, Clang, MSVC, etc.)
