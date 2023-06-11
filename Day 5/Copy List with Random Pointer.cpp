#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    LinkedListNode<int>*ans;
    int t=1;
    while(head){
        LinkedListNode<int>*temp=new LinkedListNode<int>(head->data);
        if(t){
            ans=temp;
            t=0;
        }
        temp->next=head->next;
        temp->random=head->random;
        head=head->next;
        temp=temp->next;
    }
    return ans;
}
