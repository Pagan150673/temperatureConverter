// This program is to convert degrees from farenheit to celcious.
//Author:Felix X. Pagan Gonzalez

#include <iostream>

using namespace std;



int main()
{

	float temperature;//Variable designated to store the input value for temperature.

	cout << "Input the temperature in Farenheit." <<endl;
	cin >>temperature ;//User input the desire value to convert.

	cout << "The temperature is ";
	cout << (temperature-32)*.5556;//Farenheit to celcious formula ((x-32)*.5556). Output the desire value.
	cout<<" in celcious." << endl;
	
	return 0;

}
