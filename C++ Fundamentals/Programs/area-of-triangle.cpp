#include <iostream>
using namespace std;

float area(float length, float breadth) {
    return (length * breadth) / 2;
}

int main()
{
    int length, breadth;
    cout << "Enter the length and breadth of the triangle: ";
    cin >> length >> breadth;
    cout << "Area: " << area(length, breadth) << endl;
    return 0;
}