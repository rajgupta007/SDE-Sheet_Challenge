/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    // Write your code here.
    int countZero = 0 , countOne = 0 , countTwo = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == 0)countZero++;
        else if(temp->data == 1)countOne++;
        else countTwo++;

        temp = temp->next;
    }
    temp = head;
    while(temp != NULL)
    {
        if(countZero-- > 0)
        {
            temp->data = 0;
        }else if(countOne-- > 0)
        {
            temp->data = 1;
        }else{
            temp->data = 2;
            countTwo--;
        }
        temp = temp->next;
    }
    return head;
    

}
