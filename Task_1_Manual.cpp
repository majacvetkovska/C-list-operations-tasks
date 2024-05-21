#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;  
    int input;

    while (true) {
        std::cin >> input;
        if (input == 0) {
            break;  
        }
        numbers.push_back(input);  
    }

    bool isFirst = true;
    for (int num : numbers) {
        if (!isFirst) {
            std::cout << "->";  
        }
        std::cout << num;
        isFirst = false;
    }
    std::cout << std::endl;

    numbers.clear();  
    return 0;
}
