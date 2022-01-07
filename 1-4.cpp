#include <iostream>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    float grades[3];
};

float calculateAverageGrade(Student student);

int main()
{
    Student student;
    cout << "First name: ";
    cin >> student.firstName;
    cout << "Last name: ";
    cin >> student.lastName;
    for (int index = 0; index < 3; ++index)
    {
        cout << "Grade no." << index + 1 << " : ";
        cin >> student.grades[index];
    }
    float average = calculateAverageGrade(student);
    if (average >= 17)
    {
        cout << "Great";
    }
    else if (average >= 12)
    {
        cout << "Normal";
    }
    else
    {
        cout << "Fail";
    }
}

float calculateAverageGrade(Student student)
{
    float sum = 0;
    for (int index = 0; index < 3; ++index)
    {
        sum += student.grades[index];
    }
    float result = sum / 3;
    return result;
}