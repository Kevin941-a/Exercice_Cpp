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

void type(std::string& valueToTake, std::vector<std::string>& table)
{
    std::getline(std::cin, valueToTake);
    table.push_back(valueToTake);
}

void typeAndCheck(std::string& valueToTake, std::vector<std::string>& table, uint8_t max, uint8_t ignore)
{
    std::cin >> valueToTake;
    std::cin.ignore(ignore, '\n');
    
    while(valueToTake.length() > max)
    {
        std::cout << "Error try again : ";
        std::cin >> valueToTake;
        std::cin.ignore(ignore, '\n');
    }
    
    table.push_back(valueToTake);
}

void typeAndCheckDate(std::string& valueToTake, std::vector<std::string>& table)
{
    std::getline(std::cin, valueToTake);
    while(valueToTake[2] != '/' or valueToTake[5] != '/')
        {
            std::cout << "Error try again : ";
            std::getline(std::cin, valueToTake);
        }
    table.push_back(valueToTake);
}


void typeAndCheckSize(std::string& valueToTake, std::vector<std::string>& table, uint8_t ignore)
{
    std::cin >> valueToTake;
    std::cin.ignore(ignore, '\n');
    
    while (valueToTake[0] >= '3' or (valueToTake[0] == '2' and valueToTake[2] >= '2'))
    {
        std::cout << "Error try again : ";
        std::cin >> valueToTake;
        std::cin.ignore(ignore, '\n');
    }
    
    table.push_back(valueToTake);
}

void display(int numberOfId, uint8_t numberOfInput, std::vector<std::string>& table)
{
    int idNumber{1};
    const uint8_t changeTable{12};
    for (int iteration = 0; iteration < numberOfId * numberOfInput; ++iteration)
        {
            std::cout << "Checking ID number " << idNumber << std::endl;
            std::cout << "\tName : " << table[iteration] << std::endl;
            std::cout << "\tFirstname : " << table[iteration+1] << std::endl;
            std::cout << "\tAge : " << table[iteration+2] << " y/o" << std::endl;
            std::cout << "\tReference number : " << table[iteration+3] << std::endl;
            std::cout << "\tBirthday : " << table[iteration+4] << std::endl;
            std::cout << "\tEye color : " << table[iteration+5] << std::endl;
            std::cout << "\tHair color : " << table[iteration+6] << std::endl;
            std::cout << "\tSize : " << table[iteration+7] << " m" << std::endl;
            std::cout << "\tNumber of street : " << table[iteration+8] << std::endl;
            std::cout << "\tName of street : " << table[iteration+9] << std::endl;
            std::cout << "\tZIP code : " << table[iteration+10] << std::endl;
            std::cout << "\tCity : " << table[iteration+11] << std::endl;
            std::cout << "\tCountry : " << table[iteration+12] << std::endl;
            std::cout << std::endl;
            iteration = iteration + changeTable;
            idNumber++;
        }
    
}
