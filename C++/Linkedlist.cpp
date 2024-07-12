#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode *current = &dummy;
    int carry = 0;
    
    while (l1 || l2 || carry) {
        int sum = carry;
        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }
        
        carry = sum / 10;
        current->next = new ListNode(sum % 10);
        current = current->next;
    }
    
    return dummy.next;
}

// Function to print a linked list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example usage:
    // Create two linked lists representing numbers 243 and 564
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    // Print the input linked lists
    std::cout << "Input: ";
    printList(l1);
    printList(l2);

    // Add the two numbers
    ListNode* result = addTwoNumbers(l1, l2);

    // Print the result
    std::cout << "Output: ";
    printList(result);

    // Clean up allocated memory
    delete l1;
    delete l2;
    delete result;

    return 0;
}

/* C solution for the same problem:
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    // Create a dummy node which is the starting point of the result linked list
    struct ListNode dummy;
    struct ListNode *current = &dummy;
    dummy.next = NULL;

    int carry = 0;
    while (l1 != NULL || l2 != NULL) {
        int sum = carry;
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        // Update carry for next iteration
        carry = sum / 10;
        // Create a new node with the digit value of sum % 10 and attach it to the result
        struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
        newNode->val = sum % 10;
        newNode->next = NULL;
        current->next = newNode;
        current = current->next;
    }

    // If there is a carry left after the final addition, create a new node for it
    if (carry > 0) {
        struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
        newNode->val = carry;
        newNode->next = NULL;
        current->next = newNode;
    }

    // Return the next node of dummy node which is the head of the resulting linked list
    return dummy.next;
}
*/