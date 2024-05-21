#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

void printList(const std::list<int>& lst) {
    for (int num : lst) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void addInteger(std::list<int>& lst, int num) {
    auto it = std::find_if(lst.begin(), lst.end(), [num](int x) { return x > num; });
    lst.insert(it, num);
}

void deleteInteger(std::list<int>& lst, int num) {
    lst.remove(num);
}

void queryGreaterThan(std::list<int>& lst, int num) {
    auto it = std::find_if(lst.begin(), lst.end(), [num](int x) { return x > num; });
    while (it != lst.end()) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
}

int main() {
    std::list<int> lst;
    int num;

    // Read initial list of integers
    std::cout << "Enter integers (0 to stop): ";
    while (std::cin >> num && num != 0) {
        addInteger(lst, num);
    }

    // Display the list
    std::cout << "Initial sorted list: ";
    printList(lst);

    // Commands to modify the list
    addInteger(lst, 1); // Adding 1
    deleteInteger(lst, 5); // Deleting 5

    // Display the modified list
    std::cout << "List after adding 1 and deleting 5: ";
    printList(lst);

    // Query and display results
    std::cout << "Elements greater than 3: ";
    queryGreaterThan(lst, 3);

    return 0;
}
