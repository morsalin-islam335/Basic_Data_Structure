//program to implement queue by using singly linked list
//problem link:  https://www.codingninjas.com/studio/problems/queue-using-array-or-singly-linked-list_2099908


#include <bits/stdc++.h>
class Node{
    public:
        int data;
        Node*next, *prev;
        Node(int data)
        {
            this->next = NULL;
            this->prev = NULL;
            this->data = data;
        }
}; 

class Queue {
public:
    Queue() {
        // Implement the Constructor
    }

    Node*head = NULL, *tail = NULL;
    int size = 0;

    bool isEmpty() {
        if(size>0) return false;
        return true;
    }

    void enqueue(int data) {
        size++;
        Node*newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode; tail = newNode; return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    int dequeue() {
        if(size == 0) return -1;
        size--;
        int x = head->data;
        Node*deleteNode = head;
        head = head->next;
        if(head == NULL) tail = NULL;
        delete deleteNode;
        return x;
    }

    int front() {
        if(size == 0) return -1;
        return head->data;
    }
};





