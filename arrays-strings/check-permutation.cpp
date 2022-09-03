#include <iostream>

bool is_permutation(const std::string& str1, const std::string& str2) {
    if (str1.size() != str2.size()) {
        return false;
    }
    unsigned int str_size = str1.size();
    unsigned int arr_size = 128;
    char arr[arr_size] = {0};
    for (int i = 0; i < str_size; ++i) {
        ++arr[str1[i]];
        --arr[str2[i]];
    }
    for (int i = 0; i < arr_size; ++i) {
        if (arr[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string str1{"abc"};
    std::string str2{"bca"};
    if (is_permutation(str1, str2)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
    return 0;
}
