/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int val;
 *		Node *next;
 * 		Node *prev;
 *		Node() : val(0), next(nullptr), prev(nullptr){};
 *		Node(int x) : val(x), next(nullptr), prev(nullptr) {}
 *		Node(int x, Node *next, Node *prev) : val(x), next(next), prev(prev) {}
 * };
 */

Node *deleteNode(Node *head, int k){
    // Write your code here
    if(k == 1)
    {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt != k)
    {
        temp = temp->next;
        cnt++;
    }

    temp->prev->next = temp->next;
    if(temp->next != NULL)
    {
        temp->next->prev = temp->prev ;
    }
    
    delete temp;
    return head;
}
