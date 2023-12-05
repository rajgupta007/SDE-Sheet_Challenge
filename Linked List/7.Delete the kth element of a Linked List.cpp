/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
	if(head == NULL)
	{
		return head;
	}

	if(pos == 0)
	{
		Node* newHead = head->next;
		delete head;
		return newHead;
	}
	Node* pre = NULL;
	Node* temp = head;
	int count = 0;
	while(temp != NULL)
	{
		if(count == pos)
		{
			pre->next = pre->next->next;
			delete temp;
			break;
		}
		pre = temp;
		temp = temp->next;
		count++;
	}
	return head;
}
