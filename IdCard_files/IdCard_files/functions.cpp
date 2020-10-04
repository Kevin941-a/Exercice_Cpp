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
#include <fstream>
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

void display(std::vector<ID>& identification ,int affichage)
{

    std::ofstream idCardFile("/Users/kevin/Desktop/C++/Exercices/IdCard_files/IdCard_files/ID_Card_BDD.txt");
    for (ID user : identification)
    {
        std::cout << "\tID number " << affichage << std::endl;
        idCardFile << "ID number " << affichage << std::endl;
        std::cout << "\t  Name : " << user.user.name << std::endl;
        idCardFile << "Name : " << user.user.name << std::endl;
        std::cout << "\t  Firstname : " << user.user.firstname << std::endl;
        idCardFile << "Firstname : " << user.user.firstname << std::endl;
        std::cout << "\t  Age : " << user.user.age << " y/o" << std::endl;
        idCardFile << "Age : " << user.user.age << " y/o" << std::endl;
        std::cout << "\t  Reference number : " << user.user.referenceNumber << std::endl;
        idCardFile << "Reference number : " << user.user.referenceNumber << std::endl;
        std::cout << "\t  Birthday : " << user.birthday.dateBirthday << std::endl;
        idCardFile << "Birthday : " << user.birthday.dateBirthday << std::endl;
        std::cout << "\t  Size : " << user.characteristics.size << " m" << std::endl;
        idCardFile << "Size : " << user.characteristics.size << " m" << std::endl;
        std::cout << "\t  Eye color : " << user.characteristics.eyeColor << std::endl;
        idCardFile << "Eye color : " << user.characteristics.eyeColor << std::endl;
        std::cout << "\t  Hair color : " << user.characteristics.hairColor << std::endl;
        idCardFile << "Hair color : " << user.characteristics.hairColor << std::endl;
        std::cout << "\t  Number of street : " << user.adress.numberOfStreet << std::endl;
        idCardFile << "Number of street : " << user.adress.numberOfStreet << std::endl;
        std::cout << "\t  Name of street : " << user.adress.nameOfStreet << std::endl;
        idCardFile << "Name of street : " << user.adress.nameOfStreet << std::endl;
        std::cout << "\t  ZIP Code : " << user.adress.zipCode << std::endl;
        idCardFile << "ZIP code : " << user.adress.zipCode << std::endl;
        std::cout << "\t  City : " << user.adress.city << std::endl;
        idCardFile << "City : " << user.adress.city << std::endl;
        std::cout << "\t  Country : " << user.adress.country << std::endl;
        idCardFile << "Country : " << user.adress.country << std::endl;
        affichage++;
        std::cout << "\n\n";
        idCardFile << "\n";
    }
    
}
