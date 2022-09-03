#include <iostream>

bool is_substring(std::string, std::string);

bool is_rotation(const std::string& str1, const std::string& str2) {
    int size = str1.size();
    if (size == str2.size() && size > 0) {
        std::string str = str1 + str2;
        return is_substring(str, str2);
    }
    return false;
}
