#include <iostream>

using namespace std;

main()
{
    double lengthInInches, lengthCentimeters;

    cout << "Length in inches: ";
    cin >> lengthInInches;

    lengthCentimeters = lengthInInches * 4.86;

    cout << lengthInInches << " inches is equal to " << lengthCentimeters << " centimeters.";

}


