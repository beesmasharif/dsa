//
//  node1.cpp
//  node creation
//
//  Created by Bisma on 15/08/2022.
//

#include "node1.hpp"
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    
};

class Linklist{
public:
    Node *head;
    Node *tail;
    Linklist(){
        head = NULL;
        tail = NULL;
        
    }
    void addnode(int position){
        Node *ptr = new Node;
        ptr-> data = position;
        ptr-> next = NULL;
        if (head == NULL){
            head = ptr;
            tail = ptr;
            ptr = NULL;
        }
        else{
            tail->next= ptr;
            tail= ptr;
            ptr= NULL;
            
        }
    }
   
    void printList()
    {
        for (Node *i= head ; i!=tail ; )
        {
            cout<< i->data<<endl;
            i = i->next;
        }
        cout<< tail->data<<endl;
    }
};

int main(){
    Linklist l;
    l.addnode(2);
    l.addnode(4);
    l.addnode(6);
    l.printList();
    return 0;
}
   
