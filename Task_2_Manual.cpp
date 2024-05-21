#include <iostream>
#include <list>
#include <algorithm>

class LinkedListManager {
private:
    std::list<int> myList;

public:
    void insert(int value) {
        auto it = myList.begin();
        while (it != myList.end() && *it > value) {
            ++it;
        }
        myList.insert(it, value);
    }

    void reverse() {
        myList.reverse();
    }

    void display() const {
        for (auto it = myList.begin(); it != myList.end(); ++it) {
            std::cout << *it;
            if (std::next(it) != myList.end()) std::cout << "->";
        }
        std::cout << std::endl;
    }

    ~LinkedListManager() {
        myList.clear();
    }
};

int main() {
    LinkedListManager listManager;
    int input;
    std::cout << "Enter numbers to add to the list (enter 0 to stop): ";
    
    while (true) {
        std::cin >> input;
        if (input == 0) {
            break;
        }
        listManager.insert(input);
    }

    std::cout << "List: ";
    listManager.display();

    listManager.reverse();
    
    std::cout << "List after reversing: ";
    listManager.display();

    return 0;
}
