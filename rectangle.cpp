#include <iostream>
using namespace std;

int main() {
    // Variables for length and width of the rectangle
    double length, width, area;

    // Prompt the user for the rectangle's dimensions
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate the area
    area = length * width;

    // Display the result
    cout << "The area of the rectangle is " << area << ".\n";

    return 0;
}
