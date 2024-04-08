#include <iostream>
#include <optional>

std::optional<int> divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        return std::nullopt; // indicates no value
    }
}

int main() {
    int x = 10;
    int y = 0;

    auto result = divide(x, y);

    if (result.has_value()) {
        std::cout << "Result: " << result.value() << std::endl;
    } else {
        std::cout << "Division by zero!" << std::endl;
    }

    return 0;
}
