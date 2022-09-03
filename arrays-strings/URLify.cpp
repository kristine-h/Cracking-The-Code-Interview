#include <iostream>

std::string URLify(std::string& str, int size) {
  int space_count = 0;
  for (int i = 0; i < size; ++i) {
    if (str[i] == ' ')
      ++space_count;
  }
  int last_index = size + space_count * 2 - 1;
  for (int i = size - 1; i >= 0; --i) {
    if (str[i] != ' ') {
      str[last_index] = str[i];
      --last_index;
    } else {
      str[last_index] = '0';
      str[last_index - 1] = '2';
      str[last_index - 2] = '%';
      last_index -= 3;
    }
  }
  return str;
}

int main() {
  std::string str = "Mr John Smith    "; 
  std::cout<< URLify(str, 13) << std::endl;
  return 0;
}