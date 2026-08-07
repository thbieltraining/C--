#ifndef CPPPILHAS_H
#define CPPPILHAS_H

using itemType = char;   // define o tipo de item da pilha

class Stack {
private:
    int lenght;
    itemType* structure;
    int top;
public:
    Stack(int size);
    ~Stack();
    bool isEmpty() const;
    bool isFull() const;
    void print() const;
    void push(itemType value);
    itemType pop();
};

#endif
