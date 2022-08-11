#include <iostream>
#include "ContactNode.h"

using namespace std;
using std::string;

ContactNode::ContactNode()
{
}

ContactNode::ContactNode(string name, string phoneNum) {

    contactName = name;
    contactPhoneNum = phoneNum;
    nextNodePtr = NULL;

}

void ContactNode::InsertAfter(ContactNode* nextNode) {

    ContactNode* temp;

    if (nextNodePtr == NULL) {
        nextNodePtr = nextNode;
    }
    else {
        temp = nextNodePtr;

        while (temp->nextNodePtr != NULL) {
            temp = temp->GetNext();
        }
        temp->nextNodePtr = nextNode;
    }


}

string ContactNode::GetName() {
    return contactName;
}

string ContactNode::GetPhoneNumber() {
    return contactPhoneNum;
}

ContactNode* ContactNode::GetNext() {
    return nextNodePtr;
}

void ContactNode::PrintContactNode() {

    if (nextNodePtr != NULL) {

        cout << "Name: " << nextNodePtr->GetName() << endl;
        cout << "Phone Number: " << nextNodePtr->GetPhoneNumber() << endl;
        cout << endl;
        GetNext()->PrintContactNode();

    }
}