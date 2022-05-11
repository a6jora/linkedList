#include <iostream>
using namespace std;

struct Link
{
    int data;
    Link* next;
};

class LinkedList
{
private:
    Link* first;
public:
    LinkedList()
    {
        first = NULL;
    }
    ~LinkedList(){
        Link* current = first;
        while (current){
            cout << current->data << " deleted" << endl;
            Link* temp = current;
            current = current->next;
            delete temp;
        }
    }
    void addItem(int d);
    void display();
};

void LinkedList::addItem(int d) {
    Link* newLink = new Link;
    newLink->data = d;
    newLink->next = first;
    first = newLink;
}

void LinkedList::display() {
    Link* current = first;
    while (current)
    {
        cout << current->data << endl;
        current = current->next;
    }
}

int main() {

    LinkedList ll;
    ll.addItem(9);
    ll.addItem(11);
    ll.addItem(5);
    ll.addItem(8);
    ll.display();
    return 0;
}
