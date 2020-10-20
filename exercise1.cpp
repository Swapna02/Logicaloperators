#include <iostream>
using namespace std;
int main()
{
int main
    double lengthInches, lengthCentimeters; // declaring variables with datatypes of Double (Shahzain Ahmed)
    cout << "Length in inches: "; // displaying the string (Shahzain Ahmed)
    cin >> lengthInches; // Taking input from the user (Shahzain Ahmed)
    lengthCentimeters = lengthInches * 2.54; // Formula (Shahzain Ahmed)
    cout << lengthInches << " inches is equal to " << lengthCentimeters << " centimeters."; // Displaying the final result (Shahzain Ahmed)
=======
    double lengthInInches, lengthCentimeters;

    cout << "Length in inches: ";
    cin >> lengthInInches;

    lengthCentimeters = lengthInInches * 4.86;

    cout << lengthInInches << " inches is equal to " << lengthCentimeters << " centimeters.";
=======
    
char input;
int i = 0; 
while ( i > -1 ){
 cout << "Length in inches: ";
double lengthInInches, lengthCentimeters;
cin >> lengthInInches;
lengthCentimeters = lengthInInches * 4.86;
cout << lengthInInches << " inches is equal to " << lengthCentimeters << " centimeters."<< endl;;
cout << "Do you want to try again? (y/n)"<< endl;
cin >> input;
if(input == 'n')
break;
i++;
}
}
