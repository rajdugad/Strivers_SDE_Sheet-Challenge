#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    LinkedListNode<int>*p=head;
    vector<int>v;
    while(p){
        v.push_back(p->data);
        p=p->next;
    }
    vector<int>r=v;
    reverse(r.begin(),r.end());
    if(r==v) return true;
    else return false;

}