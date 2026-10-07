// Ingredient adjuster project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double cookies;
    double sugar;
    double butter;
    double flour;
    cout << "Hello!! This program will be used to help you use proper ingredient measurements for making cookies.";
    cout << "First, how many cookies would you like to make\n";
    cin >> cookies;
    sugar = (cookies / 48) * 1.5;
    butter = (cookies / 48) * 1;
    flour = (cookies / 48) * 2.75;

    cout << "to make " << cookies << " cookies, you will need:\n";
    cout << sugar << " cups of sugar\n";
    cout << butter << " cups of butter\n";
    cout << flour << " cups of flour\n";
 

    return 0;
}

