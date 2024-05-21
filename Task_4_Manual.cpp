#include <iostream>
#include <list>
#include <algorithm> 

void readIntoList(std::list<int>& lst) {
    int input;
    while (std::cin >> input && input != 0) {
        lst.push_back(input);
    }
}

int main() {
    std::list<int> list1, list2;

    //two lists
    std::cout << "first list:\n";
    readIntoList(list1);
    std::cout << "second list:\n";
    readIntoList(list2);

    // Merge list2 into list1
    list1.merge(list2);

    // Sort the merged list
    list1.sort();

    std::cout << "Merged and sorted output: ";
    for (const int& value : list1) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
