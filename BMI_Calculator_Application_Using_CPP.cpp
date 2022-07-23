// BMI_Calculator_Application_Using_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    float weight, height, bmi;
    cout << "Weight(kg), height(m) ";
    cin >> weight >> height;
    bmi = weight / (height * height);

    if (bmi < 18.5)
        cout << "UNderweight" << endl;
    else if(bmi>25)
        cout << "Overweight" << endl;
    else
        cout << "Normal Weight" << endl;
    cout << "your BMI is" << bmi;


   


    
}

