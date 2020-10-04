//
//  functions.cpp
//  IdCard_files
//
//  Created by Kevin Racapé on 20/09/2020.
//

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "functions.hpp"

void type(std::string& valueToTake)
{
    std::getline(std::cin, valueToTake);
}

void typeAndCheck(std::string& valueToTake, uint8_t max, uint8_t ignore)
{
    std::cin >> valueToTake;
    std::cin.ignore(ignore, '\n');
    
    while(valueToTake.length() > max)
    {
        std::cout << "Error try again : ";
        std::cin >> valueToTake;
        std::cin.ignore(ignore, '\n');
    }
    
}

void typeAndCheckDate(std::string& valueToTake)
{
    std::getline(std::cin, valueToTake);
    while(valueToTake[2] != '/' or valueToTake[5] != '/')
        {
            std::cout << "Error try again : ";
            std::getline(std::cin, valueToTake);
        }

}


void typeAndCheckSize(std::string& valueToTake, uint8_t ignore)
{
    std::cin >> valueToTake;
    std::cin.ignore(ignore, '\n');
    
    while (valueToTake[0] >= '3' or (valueToTake[0] == '2' and valueToTake[2] >= '2'))
    {
        std::cout << "Error try again : ";
        std::cin >> valueToTake;
        std::cin.ignore(ignore, '\n');
    }

}


