#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
bool isValidCreditCard(const std::string& creditCardNumber) {
    std::string number = creditCardNumber;
    std::reverse(number.begin(), number.end());
    //uses c++ STL to reverse inputted credit card number
    int sum = 0;
    for (size_t i = 0; i < number.length(); ++i) {
        int digit = number[i] - '0';

        if (i % 2 == 1) {
            digit *= 2; // Double every other digit
            if (digit > 9)
                digit -= 9; // Subtract 9 if the result is greater than 9
        }

        sum += digit;
    }

    return (sum % 10) == 0; // The card is valid if the sum is divisible by 10
}

int main() {
    std::string creditCardNumber;

    std::cout << "Enter credit card number: ";
    std::cin >> creditCardNumber;

    if (isValidCreditCard(creditCardNumber))
        std::cout << "Valid credit card number." << std::endl;
    else
        std::cout << "Invalid credit card number." << std::endl;

    return 0;
}
