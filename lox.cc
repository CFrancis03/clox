#include <iostream>
#include <string>
#include "scanner.h"

void run(const std::string& line) {
    Scanner scanner(line);
    auto tokens = scanner.scanTokens();
    for (const auto& token : tokens) {
        std::cout << token.toString() << std::endl;
    }
}

int main() {
    std::string line;
    while (true) {
        std::cout << "-> ";
        if (!std::getline(std::cin, line)) break;
        run(line);
    }
    return 0;
}

