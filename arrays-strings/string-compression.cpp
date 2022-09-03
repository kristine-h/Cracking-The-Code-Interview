#include <iostream>

std::string compress_string(const std::string& str) {
    std::string compressed_string;
    int count = 0;
    for (int i = 0; i < str.size(); ++i) {
        ++count;
        if (str[i] != str[i + 1]) {
            compressed_string += str[i];
            compressed_string += std::to_string(count);
            count = 0;
        }
    }
    return compressed_string.size() < str.size() ? compressed_string : str;
}

int main() {
    std::string str = "aabcccccaaa";
    std::cout << compress_string(str);
}