#include "C++pilhas.h"
#include <iostream>

using namespace std;

Stack::Stack(int lenght) {
    this->lenght = lenght;
    structure = new itemType[this->lenght];
    top = -1;
}

Stack::~Stack() {
    delete[] structure;
}

bool Stack::isEmpty() const {
    return top == -1;
}

bool Stack::isFull() const {
    return top == lenght - 1;
}

void Stack::print() const {
    for (int i = 0; i <= top; ++i) {
        cout << structure[i] << ' ';
    }
    cout << endl;
}

void Stack::push(itemType value) {
    if (!isFull()) {
        structure[++top] = value;
    }
}

itemType Stack::pop() {
    if (!isEmpty()) {
        return structure[top--];
    }
    return itemType();
}