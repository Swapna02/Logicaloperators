#include <iostream>
using namespace std;

main()
{
    int number;
    cout<<"Enter number of elements you want to multiply: ";
    cin>>number;
    double element[number], multiplicationResult=1; // declaring variables.
    cout << "This is a C++ Program." << endl; // Output display
    cout << "This is a simple multiplication program." << endl;
    for (int i=0; i<number; i++){
        cout << "Asking user for input: ";
        cin>>element[i];
        multiplicationResult*=element[i];
    }
    
    cout << "Multiplication result: " << multiplicationResult << endl; // Displaying the output after Multiplication
    
}


