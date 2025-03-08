
#include<bits/stdc++.h>
using namespace std;
 

struct ListNode{
    int val;
    ListNode*next;
    ListNode(int x): val(x), next(nullptr){}
};



ListNode* addTwoNumbers(ListNode*l1, ListNode*l2){
    ListNode*dummyHead = new ListNode(0);
    ListNode* current = dummyHead;
    int carry = 0;

    while (l1||l2||carry){
        int sum = carry;
        if(l1){
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2){
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum/10;
        current->next = new ListNode(sum%10);
        current = current->next;
    }
    return dummyHead->next;
}



ListNode*createLinkedList(int arr[], int size){
    ListNode*head = new ListNode(arr[0]);
    ListNode*current = head;
    for(int i=1; i<size; i++){
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

 void printLinkedList(ListNode*head){
    while (head){
        cout<<head->val;
        if(head->next) cout<<" -> ";
        head = head->next;
    }
    cout<<endl;
 }


int main()
{

    int arr1[] = {2,4,3};
    int arr2[] = {5,6,4};

    ListNode*l1 = createLinkedList(arr1, 3);
    ListNode*l2 = createLinkedList(arr2,3);
    ListNode*result1 = addTwoNumbers(l1,l2);

    cout<<"Example 1: ";
    printLinkedList(result1);


    int arr3[] = {0};
    int arr4[] = {0};
    ListNode*l3 = createLinkedList(arr3,1);
    ListNode*l4 = createLinkedList(arr4,1);
    ListNode*result2 = addTwoNumbers(l3,l4);

    cout<<"Example 2: ";
    printLinkedList(result2);



    int arr5[] = {9,9,9,9,9,9,9};
    int arr6[] = {9,9,9,9};
    ListNode*l5 = createLinkedList(arr5,7);
    ListNode*l6 = createLinkedList(arr6,4);
    ListNode*result3 = addTwoNumbers(l5,l6);
    cout<<"Example 3: ";
    printLinkedList(result3);

 
 
 
    return 0;
}