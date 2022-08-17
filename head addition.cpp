//
//  head addition.cpp
//  node creation
//
//  Created by Bisma on 17/08/2022.
//

#include <stdio.h>

#include<iostream>
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
        head= NULL;
        tail= NULL;
        
    }
    void addheadnode(int position){
        Node *ptr= new Node;
        ptr->data= position;
        ptr->next= head;
        if (tail == NULL){
            head= ptr;
            tail=ptr;
            ptr= NULL;
        }
        else{
            ptr->next= head;
            head=ptr;
            ptr = NULL;
        }
    }
    void printdata(){
        for (Node *i=head; i!=tail; ){
            cout<<i->data<<endl;
            i= i->next;
        }
        cout<< tail->data<<endl;

    }
};

int main(){
    Linklist l;
    l.addheadnode(2);
    l.addheadnode(4);
    l.addheadnode(6);
    l.printdata();
    return 0;
}
   
