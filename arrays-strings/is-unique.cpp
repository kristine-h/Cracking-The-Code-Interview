#include <iostream>
#include <unordered_map>

bool is_unique(const std::string& str) {
    std::unordered_map<char, char> m;
    for (auto c : str) {
        if (m[c]) {
            return false;
        } else {
            ++m[c];
        }
    }
    return true;
}

int main() {
    std::string str = "string";
    if (is_unique(str)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
    return 0;
}