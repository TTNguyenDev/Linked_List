//
//  Stack.cpp
//  Linked_List
//
//  Created by TT Nguyen on 11/18/18.
//  Copyright © 2018 TT Nguyen. All rights reserved.
//

#include "Stack.hpp"

Stack::Stack(int max_depth) {
    head = NULL;
    MAX_DEPTH = max_depth;
}

void Stack::push(int data) {
    if (isFull())
        return;
    else {
        if (isEmpty())
            head = CreateNode(data);
        else
            AddTail(head, data);
    }
}

int Stack::pop() {
    if (head->next == NULL)
        RemoveHead(head);
    else
        RemoveTail(head);
    if (!isEmpty())
        return (head->key);
    else
        return 0;
}

bool Stack::isEmpty() {
    if (head == NULL)
        return true;
    return false;
}

bool Stack::isFull() {
    int count = CountList(head);
    
    if (count == MAX_DEPTH)
        return true;
    return false;
}

int Stack::sizeOf() {
    int count = CountList(head);
    return count * sizeof(int);
}

void Stack::show() {
    if (isEmpty())
        cout << "Stack is empty now!" << endl;
    else
        for (NODE * cur = head; cur != NULL; cur = cur -> next)
            cout << cur->key << " ";
}
