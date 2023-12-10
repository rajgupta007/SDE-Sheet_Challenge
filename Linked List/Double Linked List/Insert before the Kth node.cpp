/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;
        Node *prev;

        Node(int val) {
            this->data = val;
            next = NULL;
            prev = NULL;
        }
        ~Node() {
            if(next != NULL || prev != NULL){
                delete next;
            }
        }
};

************************************************************/

Node* insert(Node *head, int k, int val) {
    // Write Your Code Here.
    Node* newNode = new Node(val);
    if(k == 1){
        newNode->next = head;
        head->prev = newNode;
        return newNode;
    }
    Node* temp = head;
    while(k != 1)
    {
        temp = temp->next;
        k--;
    }
    temp->prev->next = newNode;
    newNode->prev = temp->prev;
    newNode->next = temp;
    temp->prev = newNode;

    return head;

}
