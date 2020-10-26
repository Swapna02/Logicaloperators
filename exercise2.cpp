#include <iostream>

using namespace std;

main()
{
    double temperatureCelsius, temperatureFahrenheit, temperatureKelvin;
    for (int i=0; ;i++){
        cout << "Please input the temperature in Celsius: ";
        cin >> temperatureCelsius;
        
        if(tempCelsius=="")
            return 0;

        temperatureFahrenheit = (temperatureCelsius + 9/5) - 32;
        temperatureKelvin = temperatureCelsius * 273.15;
        temperatureCelsius = temperatureKelvin;

        cout << "The user inputted temperature in Celsius: " << temperatureCelsius << endl;
        cout << "Converted to Fahrenheit: " << temperatureFahrenheit << endl;
        cout << "Converted to Kelvin: " << temperatureKelvin << endl;
    }

}


