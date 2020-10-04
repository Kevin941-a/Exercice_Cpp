#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "functions.hpp"


int main()
{
    int numberOfId{}, affichage{1};
    const uint8_t maxSizeAge{2}, maxSizeReferenceNumber{6}, ignoreTwo{2}, ignoreFive{5}, ignoreThree{3};
    std::vector<ID> identification = {};
    
    std::cout << "ID Card with loop \n";
    std::cout << "Enter the number of ID you have to complete : ";
    std::cin >> numberOfId;
    std::cin.ignore(2, '\n');
    std::cout << std::endl;
    
    std::cout << "ID to complete : " << numberOfId << std::endl;
    std::cout << std::endl;
    
    for (int index = 1; index <= numberOfId; ++index)
        {
            ID user;
            
            std::cout << "ID number " << index << std::endl;
            
            std::cout << " Name : ";
            type(user.user.name);
            
            std::cout << " Firstname : ";
            type(user.user.firstname);
            
            std::cout << " Age : ";
            typeAndCheck(user.user.age, maxSizeAge, ignoreTwo);
            
            std::cout << " Reference number : ";
            typeAndCheck(user.user.referenceNumber, maxSizeReferenceNumber, ignoreFive);
            
            std::cout << " Birthday : ";
            typeAndCheckDate(user.birthday.dateBirthday);
            
            std::cout << " Size : ";
            typeAndCheckSize(user.characteristics.size, ignoreThree);
            
            std::cout << " Eye color : ";
            type(user.characteristics.eyeColor);
            
            std::cout << " Hair color : ";
            type(user.characteristics.hairColor);
            
            std::cout << " Number of street : ";
            typeAndCheck(user.adress.numberOfStreet, user.adress.maxSizeNumberOfStreet, ignoreFive);
            
            std::cout << " Name of street : ";
            type(user.adress.nameOfStreet);
            
            std::cout << " ZIP Code : ";
            typeAndCheck(user.adress.zipCode, user.adress.maxSizeZipCode, ignoreFive);
            
            std::cout << " City : ";
            type(user.adress.city);
            
            std::cout << " Country : ";
            type(user.adress.country);
            std::cout << "\n";
            identification.push_back(user);
        }
    
    display(identification, affichage);

    return 0;
}


