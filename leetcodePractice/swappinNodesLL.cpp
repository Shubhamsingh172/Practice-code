#include <bits/stdc++.h>
using namespace std;

/**
//* Definition for singly-linked list.
*/
 class ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
     friend class Solution;
 };

class Solution
{
public:
    ListNode *swapNodes(ListNode *head, int k)
    {
        // Kth node from start
        // kth node from end i.e (length - k + 1)th node
        ListNode *Node1 = nullptr;
        ListNode *Node2 = nullptr;
        ListNode *temp = head;
        while (temp)
        {
            if (Node2 != nullptr)
                Node2 = Node2->next; // this will execute after the if block condition were
            // initialized to the head

            k--;        // when it becomes 0 then it will go for if block execution
            if (k == 0) // here the node1 is at the element from the front to be swapped
            {
                Node1 = temp;
                Node2 = head;
            }
            temp = temp->next;
        }
        swap(Node1->val, Node2->val);
        return head;
    }
};

//firstly i will do the linked list revision after that we will go for solving this question for sure 