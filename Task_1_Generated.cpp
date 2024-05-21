#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;
    int input;

    // Read integers continuously until '0' is entered
    while (true) {
        std::cin >> input;
        if (input == 0) break;
        numbers.push_back(input);
    }

    // Display the numbers in the order they were entered
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (it != numbers.begin()) {
            std::cout << "->";
        }
        std::cout << *it;
    }
    std::cout << std::endl;

    // Clear the list to ensure proper memory management
    numbers.clear();

    return 0;
}
