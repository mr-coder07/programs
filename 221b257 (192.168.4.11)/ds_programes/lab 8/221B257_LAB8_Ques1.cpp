
#include<iostream>
using namespace std;
def insertNodeAtTail(head, data):
    nwnode = SinglyLinkedListNode(data)
    if head is None:
        return nwnode
    last = head
    while last.next != None:
        last = last.next
    last.next = nwnode
    return head

