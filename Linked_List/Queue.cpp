//
//  Queue.cpp
//  Linked_List
//
//  Created by TT Nguyen on 11/18/18.
//  Copyright © 2018 TT Nguyen. All rights reserved.
//

#include "Queue.hpp"

Queue::Queue(int max_length) {
    head = NULL;
    MAX_LENGTH = max_length;
}

void Queue::enQueue(int data) {
    if (isFull())
        return;
    else {
        if (isEmpty())
            head = CreateNode(data);
        else
            AddTail(head, data);
    }
}

int Queue::deQueue() {
    RemoveHead(head);
    if (!isEmpty())
        return (head->key);
    else
        return 0;
}

bool Queue::isEmpty() {
    if (head == NULL)
        return true;
    return false;
}

bool Queue::isFull() {
    int count = CountList(head);
    
    if (count == MAX_LENGTH)
        return true;
    return false;
}

int Queue::sizeOf() {
    int count = CountList(head);
    return count * sizeof(int);
}

void Queue::show() {
    if (isEmpty())
        cout << "Queue is empty now!" << endl;
    else
        for (NODE * cur = head; cur != NULL; cur = cur -> next)
            cout << cur->key << " ";
}

int main() {
    Queue a(3);
    a.enQueue(2);
    a.enQueue(3);
    a.enQueue(4);
    a.deQueue();
    a.deQueue();
    a.deQueue();
    a.show();
}
