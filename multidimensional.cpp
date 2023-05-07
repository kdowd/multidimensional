// multidimensional.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 
#include <array>  
#include <vector>
#include "MyHello.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    vector<string> xxx = {"d","f"};
    array<int, 6> testy = {4,6,7,8,9};


    int testytwo[] = { 24,78,99 };

    for (auto i : xxx) {
        cout << i << "\n";
    }

    hello();
    
}

