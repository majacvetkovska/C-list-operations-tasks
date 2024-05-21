#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList;
    int value;

    // Continuous reading of integer values until a zero is entered
    cout << "Enter integer values (enter 0 to stop input): ";
    while (true) {
        cin >> value;
        if (value == 0) {
            break;
        }
        myList.push_back(value);
    }

    // Displaying the initial list
    cout << "Initial list: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it;
        if (next(it) != myList.end()) {
            cout << ", ";
        }
    }
    cout << endl;

    // Deletion phase
    cout << "Enter indices to delete (enter a negative integer to end): ";
    while (true) {
        int index;
        cin >> index;
        if (index < 0) {
            break;
        }
        if (index >= 0 && index < myList.size()) {
            auto it = myList.begin();
            advance(it, index);
            myList.erase(it);
        }
    }

    // Displaying the list after deletions
    cout << "List after deletions: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it;
        if (next(it) != myList.end()) {
            cout << ", ";
        }
    }
    cout << endl;

    // Clearing the list
    myList.clear();
    cout << "List cleared." << endl;

    return 0;
}
