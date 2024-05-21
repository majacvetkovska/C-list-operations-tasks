#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    list<int> list1, list2;
    int value;

    // Reading integers into the first list
    cout << "Enter integers for the first list (enter 0 to stop input): ";
    while (true) {
        cin >> value;
        if (value == 0) {
            break;
        }
        list1.push_back(value);
    }

    // Reading integers into the second list
    cout << "Enter integers for the second list (enter 0 to stop input): ";
    while (true) {
        cin >> value;
        if (value == 0) {
            break;
        }
        list2.push_back(value);
    }

    // Merging the two lists
    list1.merge(list2);

    // Sorting the merged list
    list1.sort();

    // Displaying the sorted list
    cout << "Merged and sorted list: ";
    for (auto it = list1.begin(); it != list1.end(); ++it) {
        cout << *it;
        if (next(it) != list1.end()) {
            cout << ", ";
        }
    }
    cout << endl;

    // Ensuring all memory is released properly (lists will automatically clear when they go out of scope)

    return 0;
}
