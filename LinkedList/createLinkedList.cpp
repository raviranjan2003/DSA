#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
    Node(Node* front, int x){
        data = x;
        next = front;
    }
};

Node* convertArr(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1; i<arr.size(); i++){
        Node* newNode = new Node(arr[i]);
        temp->next = newNode;
        temp = temp->next;
    }
    return head;
}

void display(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* oddEvenList(Node* head) {
    if(head == NULL || head->next == NULL) return head;

    Node* first = head;
    Node* second = head->next;
    Node* prev = head;
    Node* temp = prev;
    // cout<<temp->data;
    while(first != NULL && first->next != NULL){
        // Node* newNode = new Node(first->val);
        first = first->next->next;
        if(first == NULL) break;
        Node* newNode = new Node(first->data);
        prev->next = newNode;
        prev = newNode;
    }
    while(second != NULL){
        
        Node* newNode = new Node(second->data);
        prev->next = newNode;
        prev = newNode;

        // Edgecase for last node in even nos of nodes;
        if(second->next == NULL) break;

        second = second->next->next;
    }
    return temp;
}

int countNodes(Node* head){
    int count = 0;
    while(head){
        count++;
        head = head->next;
    }
    return count;
    }
Node* removeNthFromEnd(Node* head, int n) {
    //Edge cases
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    int size = countNodes(head);

    if(size == n) return head->next;

    Node* temp = head;
    Node* prev = NULL;
    int node = size-n+1;
    int flag = 0;

    while(temp != NULL && temp->next != NULL){
        flag++;
        if(flag == node){
            prev->next = temp->next;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node* deleteMiddle(Node* head) {
    if(head == NULL || head->next == NULL) return NULL;

    int size = countNodes(head);
    int node = size/2 + 1;

    Node* temp = head;
    Node* prev = NULL;
    int flag = 0;

    while(temp != NULL){
        flag++;
        if(flag == node){
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}


int main(){
    vector<int> arr{1,3,4,7,1,2,6};
    Node* head = convertArr(arr);

    display(head);
    // Node* odd = oddEvenList(head);
    // display(odd);


    // cout<<countNodes(head);
    // Node* temp = removeNthFromEnd(head, 3);
    // display(temp);

    // Node* temp = deleteMiddle(head);
    // display(temp);

    map<int, int> mpp;

    while(head){
        mpp[head->data]++;
        head = head->next;
    }
    for(auto i : mpp){
        cout << i.first <<" ";
    }

    return 0;
}