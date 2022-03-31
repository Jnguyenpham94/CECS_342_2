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
using namespace std;

class Person
{
public:
    string name;
    int age;

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


int main()
{
    int numbers[] = { 645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25 };
    int n = sizeof(numbers) / sizeof(numbers[0]);
    //sort(numbers, n);
    for(int i : numbers)
    {
        cout << i << endl;
    }
    Person people[] = { Person("Hal", 20), Person("Susann", 31), Person("Dwight", 19), Person("Kassandra", 21), Person("Lawrence", 25), Person("Cindy", 22), Person("Cory", 27), Person("Mac", 19), Person("Romana", 27), Person("Doretha", 32), Person("Danna", 20), Person("Zara", 23), Person("Rosalyn", 26), Person("Risa", 24), Person("Benny", 28), Person("Juan", 33), Person("Natalie", 25) };
    return 1;
}
