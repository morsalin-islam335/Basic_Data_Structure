//program to implement stack by using singly linked list
//problem link:  https://www.codingninjas.com/studio/problems/implement-stack-with-linked-list_630475

/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

class Stack
{
    //Write your code here

public:
    Stack()
    {
        
    }
    Node*head=NULL, *tail=NULL;
    int size = 0;

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        if(size>0)return false;
        else return true;  
    }

    void push(int data)
    {
        size++;
        Node*newNode = new Node(data);
        if(head == NULL)
        {
            head  = newNode;
            tail  = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        if(size>0)
        {
           if(size== 1)
           {
               head = NULL;
               tail = NULL;
               size--;
           }
           else
           {
               Node*tmp = head;
               for(int i = 1; i<size-1; i++)
               {
                   tmp = tmp->next;
               }
               tmp->next = tmp->next->next;
               tail = tmp;
               size--;
           }

        }
    }

    int getTop()
    {
        if(size>0)
        {
            return tail->data;
        }
        else return -1;
    }
};