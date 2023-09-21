#include <iostream>
#include <string>

int maximize_x(int x) {
    std::string x_str = std::to_string(x);
    std::string modified_x = "";

    for (size_t i = 0; i < x_str.length(); ++i) {
        if (x_str[i] - '0' >= 5) {
            modified_x += std::to_string(x_str[i] - '0' + 1);
            break;
        } else {
            modified_x += x_str[i];
        }
    }

    modified_x += std::string(x_str.length() - modified_x.length(), '0');

    return std::stoi(modified_x);
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int x;
        std::cin >> x;
        int result = maximize_x(x);
        std::cout << result << std::endl;
    }

    return 0;
}
