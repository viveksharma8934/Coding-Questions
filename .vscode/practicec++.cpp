#include <iostream>

using namespace std;

class Student
{
public:
    string Name;
    int age;
    char gender;
    void printInfo()
    {
        cout << Name << " " << age << " " << gender << " " << endl;
    }
};
int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i].Name >> a[i].age >> a[i].gender;
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        a[i].printInfo();
    }
}