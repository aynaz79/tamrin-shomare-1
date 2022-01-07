#include <iostream>
using namespace std;

int main()
{
    float weight;
    float height;
    cout << "Enter weight in kg: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;
    float BMI = weight / (height * height);
    cout << "BMI: " << BMI << '\n';
    if (BMI < 18.5)
    {
        cout << "Underweight";
    }
    else if (BMI < 25)
    {
        cout << "Normal";
    }
    else if (BMI < 30)
    {
        cout << "Obese";
    }
    else
    {
        cout << "Extremely Obese";
    }
}