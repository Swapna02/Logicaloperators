#include <iostream>
using namespace std;
int main()
{
    double lengthInches, lengthCentimeters; // declaring variables with datatypes of Double (Shahzain Ahmed)
    cout << "Length in inches: "; // displaying the string (Shahzain Ahmed)
    cin >> lengthInches; // Taking input from the user (Shahzain Ahmed)
    lengthCentimeters = lengthInches * 2.54; // Formula (Shahzain Ahmed)
    cout << lengthInches << " inches is equal to " << lengthCentimeters << " centimeters."; // Displaying the final result (Shahzain Ahmed)
}
