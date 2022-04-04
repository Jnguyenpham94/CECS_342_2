// assignment_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
////645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25
/*The following sequence of people with nameand age of each person.The name is a string
and the age an integer :
Hal, 20; Susann, 31; Dwight, 19; Kassandra, 21; Lawrence, 25; Cindy, 22; Cory, 27;
Mac, 19; Romana, 27; Doretha, 32; Danna, 20; Zara, 23; Rosalyn, 26; Risa, 24; Benny,
28; Juan, 33; Natalie, 25
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <array>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int getAge() { return age; }
    string getName() { return name; }

    Person()
    {
        name = "NOBODY";
        age = 0;
    }

    Person(string n, int a)
    {
        name = n;
        age = a;
    }

};

template <typename T>
auto mySort(T a)
{
    return a < 0;
}




int main()
{
    double numbers[] = { 645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25 };
    int n = sizeof(numbers) / sizeof(numbers[0]);
    sort(numbers, numbers + n);
    cout << "Numbers sorted:" << endl;
    for(double i : numbers)
    {
        cout << i << " ";
    }
    cout << endl << endl;

    Person people[] = { Person("Hal", 20), Person("Susann", 31), Person("Dwight", 19), Person("Kassandra", 21), Person("Lawrence", 25), Person("Cindy", 22), Person("Cory", 27), Person("Mac", 19), Person("Romana", 27), Person("Doretha", 32), Person("Danna", 20), Person("Zara", 23), Person("Rosalyn", 26), Person("Risa", 24), Person("Benny", 28), Person("Juan", 33), Person("Natalie", 25) };
    int pn = sizeof(people) / sizeof(people[0]);

    cout << "People name sort:" << endl;
    for (size_t i = 0; i < size(people); i++)
    {
        cout << people[i].getName() << " " << people[i].getAge() << endl;
    }
    cout << endl;

    cout << "People age sort:" << endl;
    for (size_t i = 0; i < size(people); i++)
    {
        cout << people[i].getName() << " " << people[i].getAge() << endl;
    }
    cout << endl;

    return 1;
}
