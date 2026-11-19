#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input;

    std::cout << "Odd or Even Checker\n";

    while (true) {
        std::cout << "Enter an integer (or q to quit): ";

        // Read input as text so we can recognize 'q' and handle invalid input safely.
        if (!(std::cin >> input)) {
            std::cout << "\nInput ended. Goodbye!\n";
            break;
        }

        if (input == "q" || input == "Q") {
            std::cout << "Goodbye!\n";
            break;
        }

        // Parse the text as an integer, and reject extra characters like "7abc".
        std::istringstream inputStream(input);
        int number;
        char extraCharacter;

        if (!(inputStream >> number) || (inputStream >> extraCharacter)) {
            std::cout << "Invalid input. Please enter a whole integer or 'q' to quit.\n";
            // The input was read as text, so cin is still usable for the next attempt.
            std::cin.clear();
            continue;
        }

        // The remainder is zero for even numbers, including zero and negatives.
        if (number % 2 == 0) {
            std::cout << number << " is Even.\n";
        } else {
            std::cout << number << " is Odd.\n";
        }
    }

    return 0;
}
