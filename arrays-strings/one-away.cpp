#include <iostream>

bool are_one_edit_insert(const std::string& str1, const std::string& str2) {
    bool dif = false;
        for (int i = 0; i < str1.size(); ++i) {
            if (!dif) {
                return false;
            }
            if (str1[i] != str2[i]) {
                dif = true;
            }
        }
    return true;
}

bool are_one_edit_remove(const std::string& str1, const std::string& str2) {
    bool dif = false;
    int j = 0; // index of str2
    for (int i = 0; i < str1.length(); i++, j++) {
    if (str1[i] != str2[j]) {
      if (dif) {
        return false;
      }
      dif = true;
      ++i;
    }
  }
  return true;
}

bool are_one_edit_away(const std::string& str1, const std::string& str2) {
    if (str1.size() == str2.size()) {
        return are_one_edit_insert(str1, str2);
    }
    if (str1.length() - 1 == str2.length()) {
        return are_one_edit_remove(str1, str2);
    } else if(str2.length() - 1 == str1.length()){
        return are_one_edit_remove(str2, str1);
    }
    return false;
}

int main() {
    std::string str1 = "pale";
    std::string str2 = "bae";
    if (are_one_edit_away(str1, str2)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
}