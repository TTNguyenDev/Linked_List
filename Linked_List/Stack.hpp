//
//  Stack.hpp
//  Linked_List
//
//  Created by TT Nguyen on 11/18/18.
//  Copyright © 2018 TT Nguyen. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <iostream>
#include "linkedList.hpp"

using namespace std;

class Stack {
private:
    NODE* head;
    int MAX_DEPTH;
    
public:
    Stack(int);
    void push(int);
    int pop();
    bool isEmpty();
    bool isFull();
    int sizeOf();
    void show();
};

#endif /* Stack_hpp */
