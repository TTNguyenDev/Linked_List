#include <iostream>

using namespace std;

struct NODE {
    int key;
    NODE* next;
};

NODE* CreateNode(int data);
bool AddHead(NODE* &head, int data);
bool AddTail(NODE* head, int data);
void RemoveHead(NODE* &head);
bool RemoveTail(NODE* head);
void RemoveAll(NODE* &head);
void PrintList(NODE* head);
int SumList (NODE* head);
int CountList (NODE* head);
int MaxList (NODE* head);
