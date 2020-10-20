#include <iostream>
using namespace std;
int main()
{
    double firstElement, secondElement, divisionResult; // declaring variables with datatype of Double (Shahzain Ahmed)

    cout << "This is a simple division program." << endl; // Cout used for displaying output (Shahzain Ahmed)
    cout << "Input first number: "; 
    cin >> firstElement; // Taking first input from the user (Shahzain Ahmed)
    cout << "Input second number: ";
    cin >> secondElement; // Taking second input from the user (Shahzain Ahmed)
    
    if(secondElement == 0) //Anything divided by 0 is undefined.
    {    cout << "Invalid input " << endl;}
    else     
    { divisionResult = firstElement / secondElement; // Formula for Division (Shahzain Ahmed)
    cout << "First number: " << firstElement << endl;
    cout << "Second number: " << secondElement << endl;
    cout << "Division result: " << divisionResult << endl;} // Displaying the final result after Division (Shahzain Ahmed)
    
}
