/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */
void add_to_list(Node &head , Node &last , int val)
{
    if(head.data == 0)
    {
        Node newNode = new Node(val);
        head = newNode;
        last = newNode;
        return;
    }

    Node newNode;
    newNode.data = val;
    last.next = newNode;
    last = newNode;
    
}

Node* constructLL(vector<int>& arr) {
    // Write your code here
    
    Node head;
    Node last; 
    for(int i = 0 ; i < arr.size() ;i++)
    {
        add_to_list(head ,last , arr[i]);
    }
    return head;
}
