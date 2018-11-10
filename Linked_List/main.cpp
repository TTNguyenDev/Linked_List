#include <iostream>

using namespace std;

struct NODE {
    int key;
    NODE* next;
};

NODE* CreateNode(int data) {
    NODE * p = new NODE;
    if (p == NULL)
        return NULL;
    
    p -> key = data;
    p -> next = NULL;
    
    return p;
}

bool AddHead(NODE* &head, int data) {
    NODE * p = CreateNode(data);
    if (p == NULL)
        return false;
    else {
        p -> next = head;
        head = p;
        return true;
    }
}

bool AddTail(NODE* head, int data) {
    NODE * p = CreateNode(data);
    if (p == NULL)
        return false;
    else {
        NODE* temp = new NODE;
        temp = head;
        while (temp -> next != NULL)
            temp = temp -> next;
        
        
        if (temp -> next == NULL)
            temp -> next = p;
        return true;
    }
}

void RemoveHead(NODE* &head) {
    if (head == NULL)
        return;
    if (head -> next == NULL) {
        NODE* temp = head;
        head = temp->next;
        free(temp);
        return;
    }
    NODE* p = head;
    head = head -> next;
    delete p;
}

bool RemoveTail(NODE* head) {
    if (head == NULL)
        return false;
    if (head -> next == NULL) {
        delete head;
        head == NULL;
        return true;
    }
    
    NODE* p = head;
    NODE* temp;
    
    while (p->next != NULL) {
        temp = p;
        p = p -> next;
    }
    delete p;
    temp -> next = NULL;
    return true;
}

void RemoveAll(NODE* &head) {
    if (head == NULL)
        return;
    NODE* temp;
    while (head != NULL) {
        temp = head;
        head = temp->next;
        free(temp);
    }
}

void PrintList(NODE* head) {
    if (head == NULL)
        cout << "Linked List is empty!" << endl;
    for (NODE * cur = head; cur != NULL; cur = cur -> next) {
        cout << cur->key << " ";
    }
}

int SumList (NODE* head) {
    if (head == NULL)
        return -1;
    int sum = 0;
    for (NODE* cur = head; cur; cur = cur -> next)
        sum += cur->key;
    return sum;
}

int CountList (NODE* head) {
    if (head == NULL)
        return -1;
    int count = 0;
    
    for (NODE* cur = head; cur; cur = cur -> next)
        count++;
    
    return count;
}

int MaxList (NODE* head) {
    if (head == NULL)
        return -1;
    int max = head -> key;
    
    for (NODE* cur = head -> next; cur; cur = cur -> next)
        if (cur->key > max)
            max = cur->key;
    return max;
}

int main() {
    
    NODE * p = CreateNode(10);
    RemoveHead(p);
    PrintList(p);
    
}
