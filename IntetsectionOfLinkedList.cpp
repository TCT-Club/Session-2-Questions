#include<unordered_map>
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node* ptr1 = firstHead;
    Node* ptr2 = secondHead;
    unordered_map<Node*, bool> umap;
    while(ptr1)
    {
        umap[ptr1] = 1;
        ptr1 = ptr1->next;
    }
    while(ptr2)
    {
        if(umap[ptr2]) return ptr2;
        ptr2 = ptr2->next;
    }
    return NULL;
}

