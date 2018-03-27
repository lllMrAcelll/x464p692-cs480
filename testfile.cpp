// Assignment  :  1
// Author      :  David Timmons
// Student ID  :  X464P692
// File Name   :  assignment1.cpp
// This program allows the user to find how many chocolate bars they have to eat a day to maintain their weight

#include <iostream>
using namespace std;

int main(){
	
	char gender;
	double weight, age, height;
	double bmr;
	
	cout << "Please enter an \"m\" if you are male or a \"f\" if you are female \n"; // Asks user if they are male or female.
	cin >> gender;
	
	if (gender == 'm') //If they are male, then these commands run.
	{
	cout << "Please enter your weight in pounds. \n"; // Asks for weight.
	cin >> weight;
	cout << "Please enter your height in inches. \n"; // Asks for height.
	cin >> height;
	cout << "Please enter your age. \n"; // Asks for age.
	cin >> age;
	
	bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age); //Calculates total bmr for a male.
}
	else if (gender == 'f') //If they are female, than these commands run.
	{
	cout << "Please enter your weight in pounds. \n"; // Asks for weight.
	cin >> weight;
	cout << "Please enter your height in inches. \n"; // Asks for height.
	cin >> height;
	cout << "Please enter your age. \n"; // Asks for age.
	cin >> age;
	
	bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);// Calculates total bmr for a female.
}

	cout << "You have to eat "; // Tells user how many chocolate bars they have to eat in a day to maintain that weight.
	cout << bmr;
	cout << " chocolate bars a day to maintain your weight. \n";
	
	return 0 ;
}
