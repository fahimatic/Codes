#include<bits/stdc++.h>
using namespace std;

struct Node {
int data;
Node* next;
};
class LinkedList {
private:
    Node* head;
public:
    LinkedList(){
        head= NULL;
}
void push_back(int newElement) {
    Node* newNode =new Node();
    newNode->data= newElement;
    newNode->next = NULL;
    if(head ==NULL) {
            head =newNode;
} else {
    Node* temp= head;
while(temp->next !=NULL)
    temp =temp->next;
temp->next= newNode;
}
}
void push_at(int newElement, int position) {
Node* newNode= new Node();
newNode->data= newElement;
newNode->next=NULL;
if(position< 1) {
        cout<<"\nposition must be>=1";
} else if (position== 1) {
    newNode->next =head;
head= newNode;
} else {
    Node* temp = head;
for(int i= 1; i<position-1;i++) {
    if(temp !=NULL) {

temp= temp->next;

}
}
if(temp !=NULL) {
    newNode->next =temp->next;
    temp->next= newNode;
} else {
    cout<<"previous node is null.\n";
}
}
}

void PrintList() {
    Node* temp =head;
if(temp!= NULL) {
    cout<<"The list contains: ";
while(temp !=NULL) {
    cout<<temp->data<<" ";
temp =temp->next;
}
cout<<endl;
} else {
    cout<<"list is empty.\n";
}
}
};

int main() {
 LinkedList MyList;

 MyList.push_back(1);
 MyList.push_back(2);


 MyList.PrintList();

MyList.push_at(11, 1);
MyList.push_at(12, 2);
MyList.push_at(13, 3);
MyList.push_at(14, 4);
MyList.push_at(15, 5);
MyList.push_at(16, 6);
MyList.push_at(17, 7);
MyList.push_at(18, 8);
MyList.push_at(19, 9);
MyList.push_at(20, 10);

MyList.PrintList();

return 0;
}
