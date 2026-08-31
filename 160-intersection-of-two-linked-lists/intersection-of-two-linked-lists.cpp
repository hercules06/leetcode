/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       ListNode* curr1=headA;
       ListNode* curr2=headB;
       int lena=0;
       int lenb=0;
       while(curr1!=NULL){
        lena++;
        curr1=curr1->next;
       } 
       while(curr2!=NULL){
        lenb++;
        curr2=curr2->next;
       }
      curr1=headA;
      curr2=headB;
      while(lena>lenb){
        curr1=curr1->next;
        lena--;
      }
      while(lena<lenb){
        curr2=curr2->next;
        lenb--;
      }
      while(curr1!=curr2){
        curr1=curr1->next;
        curr2=curr2->next;
      }
      return curr1;
    }
};