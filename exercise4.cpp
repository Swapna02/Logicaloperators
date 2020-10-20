#include <iostream> // header files by Shahzain Ahmed
using namespace std;

int main() // added int 
{
    double firstElement, secondElement, subtractionResult; // Declaring Variables by Shahzain Ahmed

    cout << "This is the simplest Subtraction program in C++." << endl; // displaying the output by Shahzain Ahmed.
    cout << "Input first number: "; 
    cin >> firstElement; // Taking first number as input from the user (Shahzain Ahmed)
    cout << "Input second number: ";
    cin >> secondElement; // Taking second number as input from the user (Shahzain Ahmed)
    
    if( firstElement > secondElement)
         subtractionResult = firstElement - secondElement; // Subtraction formula by Shahzain Ahmed
    else
        subtractionResult = secondElement - firstElement;
    
    cout << "First number: " << firstElement << endl;
    cout << "Second number: " << secondElement << endl;
    cout << "Subtraction result: " << subtractionResult << endl; // Displaying the final result (Shahzain Ahmed)
}
