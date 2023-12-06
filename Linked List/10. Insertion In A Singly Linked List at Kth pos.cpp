/************************************************************

    Following is the LinkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

Node * insert(Node * head, int n, int pos, int val) {
    // Write your code here
    if(pos == 0)
    {
        Node* newHead = new Node(val);
        newHead->next = head;
        return newHead;
    }
    Node* temp = head;
    int cnt = 0;
    while(cnt != pos-1)
    {
        temp = temp->next;
        cnt++;
    }
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;

}
