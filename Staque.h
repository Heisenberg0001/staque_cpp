#ifndef STAQUE_H
#define STAQUE_H
#include <iostream>

using namespace std;

class Staque
{
public:
    Staque();
    Staque(Staque const &);// copy constructor
    virtual ~Staque();
    bool isEmpty() const ;// check link is empty or not
    void push(int);// adds int type data to the list either from left or right
    void delLeftMost();// delete one node from left
    void delRightMost();// delete one node from right
    void remove(int); //delete the last node
    void printList(ostream &out);// displays members of linked list

private:
    class Node{
    public:

        Node(int x, int i, Node* n, Node* p){ // construct node with data value passed in parameter x
            data = x;
            index = i;
            next = n;
            prev = p;
        }

        static int counter;
        int index;
        int data;
        Node* next;
        Node* prev;
    };

    Node* leftMostPtr  = nullptr;
    Node* rightMostPtr = nullptr;
};
ostream &operator<< (ostream &out, Staque &S);


inline  Staque::Staque()      = default;
int     Staque::Node::counter = 0;


inline Staque::Staque(Staque const &st){
    if(!st.isEmpty()){ // if list that is going to be copied isn't empty then continue

        if(!this->isEmpty()) // if the list, where we want to copy the passed list, isn't empty then we will clear this list
            this->~Staque();

        // construct new node which hold members of the first node of st::node
        Node* temp = new Node(st.leftMostPtr->data, st.leftMostPtr->index, st.leftMostPtr->next, st.leftMostPtr->prev);
        this->leftMostPtr = temp;
        int counter=0;

        for (Node* tempOne = st.leftMostPtr->next; tempOne != nullptr; tempOne = tempOne->next)// traverse until you reach end of list
        {
            temp->next = new Node(tempOne->data, tempOne->index, tempOne->next, tempOne->prev);
            temp = temp->next;
            counter++;
        }

        this->rightMostPtr = temp;

        temp->next = nullptr;
        temp->prev = nullptr;
    }
}
inline bool Staque::isEmpty() const{
    return leftMostPtr == nullptr;
}
inline void Staque::push(int cinElem){

    if(isEmpty()){ // if current list is empty
        // creating a new node
        // which will point to nothing to the Next of him
        // and will point to nothing to the Previous of him
        leftMostPtr = new Node(cinElem, Staque::Node::counter++, nullptr, nullptr);
        rightMostPtr = leftMostPtr; //in case we have one member LeftMost and RightMost nodes are the same

    }
    else if (cinElem % 2 == 0){ // if cinElem is even we will push it from the left side
        // create new node to store integer
        // we store address first node in the even node's next pointer
        // we store nullptr to the prev of the even node's prev pointer
        Node* even = new Node(cinElem, Staque::Node::counter++, leftMostPtr, nullptr);

        even->next->prev = even; // we store current nodes pointer in the next node
        leftMostPtr = even; //new node becomes leftmost node because it's pushed from left
    }
    else { // if cinElem is odd we push node from right side
        //creating a new node
        // odd becomes last node and it's next pointer will point to nothing
        // odd prev pointer is pointing to the rightMostPtr
        Node* odd = new Node(cinElem, Staque::Node::counter++,nullptr,rightMostPtr);

        rightMostPtr->next = odd; //last node connects to a new node
        rightMostPtr = odd; // rightmost becomes odd
    }
}
inline void Staque::delLeftMost(){
    if(!isEmpty()){
        Node* node = leftMostPtr; // store first node address at "node"
        leftMostPtr = leftMostPtr->next;// leftMost becomes second node
        leftMostPtr->prev = nullptr;
        Staque::Node::counter--;
        delete node; // delete first node
    }
}
inline void Staque::delRightMost(){
    if(!isEmpty()){
        Node* temp = leftMostPtr;
        while(temp->next != rightMostPtr)// traverse until you reach rightmost node
            temp = temp->next;

        rightMostPtr = nullptr;
        rightMostPtr = temp;// rightmost becomes previous
        rightMostPtr->next = nullptr;
        Staque::Node::counter--;
        temp = nullptr;
        delete temp;
    }
}
inline void Staque::remove(int elemCount) {
    for (int i = 0; i < elemCount; ++i) {
        if(leftMostPtr->index > rightMostPtr->index)
        {
            delLeftMost();
        } else
            delRightMost();
    }
}
inline Staque::~Staque()
{
    Node* temp;

    while(leftMostPtr != nullptr)
    {
        temp = leftMostPtr;//we create a new node that is holding the first node
        leftMostPtr = leftMostPtr->next;// LeftMost is holding the second node
        delete temp;// delete the first node
    }

    leftMostPtr = nullptr;
    rightMostPtr = nullptr;
}
inline void Staque::printList(ostream &out){
    Node* temp = leftMostPtr;
    if(isEmpty())
        out<<"***The List is Empty***"<<endl;
    else{
        out<<"**************************************\n";
        out<<"Total nodes of Linked List: "<<Staque::Node::counter<<endl;
        out<<"Head :"<<leftMostPtr->data<<"\t"<<"Tail :"<<rightMostPtr->data<<endl;
        out<<"Members of the Linked List are:"<<endl;
        while(temp!=nullptr){
            out<<temp->data<<"->"
               <<temp->index<<"\t";
            temp = temp->next;
        }
        out<<endl;
    }
}
inline ostream &operator<< (std::ostream &out, Staque &S){// operator<< overloading
    S.printList(out);
    return out;
}

#endif // STAQUE_H
