#include <iostream>
#include <unordered_map>


bool is_palindrome_permutation(const std::string& str) {
    std::unordered_map<char, int> m;
    for (int c : str) {
        ++m[str[c]];
    }

    char count = 0;
    for (auto elem : m) {
        if (count > 1) {
            return false;
        }
        if (elem.second % 2 == 1) {
            ++count;
        }
    }
    return true;
}

int main() {
    if (is_palindrome_permutation("tactcao")) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
}