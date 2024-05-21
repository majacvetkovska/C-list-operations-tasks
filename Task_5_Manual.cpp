#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void addInteger(list<int>& intList, int value) {
    auto it = lower_bound(intList.begin(), intList.end(), value);
    intList.insert(it, value);
}

void deleteInteger(list<int>& intList, int value) {
    auto it = find(intList.begin(), intList.end(), value);
    if (it != intList.end()) {
        intList.erase(it);
    }
}

void queryGreaterThan(list<int>& intList, int value) {
    auto it = upper_bound(intList.begin(), intList.end(), value);
    while (it != intList.end()) {
        cout << *it << " ";
        ++it;
    }
    cout << endl;
}

int main() {
    list<int> intList;
    int num;

    cout << "Please insert numbers into the list.To stop insert 0 ";
    while (cin >> num && num != 0) {
        addInteger(intList, num);
    }

    char command;
    int value;

    cout << "Commands:\n"
         << "  A + number to add a number to the list,\n"
         << "  D + number to delete a number from the list,\n"
         << "  Q + number to query numbers greater than a given number,\n"
         << "  P to print the list,\n"
         << "  E to exit.\n";

    do {
        cout << "Command: ";
        cin >> command;

        switch (command) {
            case 'A':
            case 'a': 
                cin >> value;
                addInteger(intList, value);
                cout << value << "number added.\n";
                break;
            case 'D':
            case 'd': 
                cin >> value;
                deleteInteger(intList, value);
                cout << value << " deleted, if the number was in the list.\n";
                break;
            case 'Q':
            case 'q': 
                cin >> value;
                cout << "numbers greater than " << value << ": ";
                queryGreaterThan(intList, value);
                break;
            case 'P':
            case 'p': 
                cout << "List: ";
                for (const auto& n : intList) {
                    cout << n << " ";
                }
                cout << endl;
                break;
            case 'E':
            case 'e': 
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid command. Try again.\n";
        }
    } while (command != 'E' && command != 'e');

    return 0;
}
