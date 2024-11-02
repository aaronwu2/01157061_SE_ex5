#include <iostream>
using namespace std;

int main() {
    // Greeting message
    cout << "Hello!";

    // Variables for two numbers
    int num1, num2, sum;

    // Prompt the user to enter two numbers
    cout << "first number: ";
    cin >> num1;
    cout << "econd number: ";
    cout << "third number: ";
    cin >> num2;

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << ".\n";

    return 0;
}
