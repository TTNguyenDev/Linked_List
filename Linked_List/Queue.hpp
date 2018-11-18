//
//  Queue.hpp
//  Linked_List
//
//  Created by TT Nguyen on 11/18/18.
//  Copyright © 2018 TT Nguyen. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp
#include <iostream>
#include "linkedList.hpp"

using namespace std;

class Queue {
private:
    NODE* head;
    int MAX_LENGTH;
    
public:
    Queue(int);
    void enQueue(int a);
    int deQueue();
    bool isEmpty();
    bool isFull();
    int sizeOf();
    void show();
};


#endif /* Queue_hpp */
