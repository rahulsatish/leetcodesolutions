/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
 
      
        for(RandomListNode* temp=head;temp!=NULL;temp=temp->next->next)
        {
            RandomListNode* t=new RandomListNode(temp->label);
            t->next=temp->next;
            temp->next=t;
        }
        for(RandomListNode* temp=head;temp!=NULL;temp=temp->next->next)
        {
            if(temp->random!=NULL)
            temp->next->random=temp->random->next;
        }
          RandomListNode* newhead=head->next;
        RandomListNode* header=newhead;
        RandomListNode* l1,*l2;
   for(l1=head;l1!=NULL;l1=l1->next)
   {
       l2=l1->next;
       l1->next=l2->next;
       if(l2->next!=NULL)
       {
           l2->next=l2->next->next;
       }
   }

        return newhead;
    }
};