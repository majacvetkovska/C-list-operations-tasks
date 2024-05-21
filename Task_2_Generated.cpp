#include <iostream>
#include <list>

using namespace std;

class LinkedListManager {
private:
    list<int> myList;

public:
    // Method to insert a node at the end of the list
    void insertNode(int value) {
        myList.push_back(value);
    }

    // Method to reverse the list
    void reverseList() {
        myList.reverse();
    }

    // Method to display the list in forward direction
    void displayForward() {
        for (auto it = myList.begin(); it != myList.end(); ++it) {
            cout << *it;
            if (next(it) != myList.end()) {
                cout << "->";
            }
        }
        cout << endl;
    }

    // Method to display the list in reverse direction
    void displayReverse() {
        for (auto it = myList.rbegin(); it != myList.rend(); ++it) {
            cout << *it;
            if (next(it) != myList.rend()) {
                cout << "->";
            }
        }
        cout << endl;
    }

    // Destructor to clear the list
    ~LinkedListManager() {
        myList.clear();
    }
};

int main() {
    LinkedListManager manager;
    
    // Inserting nodes
    manager.insertNode(5);
    manager.insertNode(3);
    manager.insertNode(2);
    manager.insertNode(0);
    
    // Displaying the list
    cout << "Forward: ";
    manager.displayForward();
    cout << "Reverse: ";
    manager.displayReverse();

    return 0;
}
