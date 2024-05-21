#include <iostream>
#include <list>

void display(const std::list<int>& lst) {
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it;
        if (std::next(it) != lst.end()) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::list<int> lst;
    int input;

    // Input phase
    std::cout << "Enter numbers to add to the list, enter 0 to end: ";
    while (std::cin >> input && input != 0) {
        lst.push_back(input);
    }

    // Deletion phase
    std::cout << "Enter index to delete, enter negative number to end: ";
    while (std::cin >> input && input >= 0) {
        if (input < lst.size()) {
            auto it = lst.begin();
            std::advance(it, input);
            lst.erase(it);
            display(lst);
        } else {
            std::cout << "Invalid index ";
            display(lst);
        }
        std::cout << "Enter next index to delete, enter negative number to end:";
    }

    lst.clear();

    return 0;
}
