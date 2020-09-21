#include <iostream>
#include <vector>
#include <string>
#include "functions.hpp"

struct User
{
    std::string name{};
    std::string firstname{};
    std::string age{};
    std::string referenceNumber{};
};

struct Adress
{
    std::string numberOfStreet{};
    const uint8_t maxSizeNumberOfStreet{4};
    std::string nameOfStreet{};
    std::string zipCode{};
    const uint8_t maxSizeZipCode{5};
    std::string city{};
    std::string country{};
    std::string completeAdress{};
};

struct Characteristics
{
    std::string size{};
    std::string eyeColor{};
    std::string hairColor{};
};

struct Birthday
{
    std::string dateBirthday{};
};

struct ID
{
    User user;
    Adress adress;
    Characteristics characteristics;
    Birthday birthday;
};

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
    
    for (ID user : identification)
    {
        std::cout << "\tID number " << affichage << std::endl;
        std::cout << "\t  Name : " << user.user.name << std::endl;
        std::cout << "\t  Firstname : " << user.user.firstname << std::endl;
        std::cout << "\t  Age : " << user.user.age << " y/o" << std::endl;
        std::cout << "\t  Reference number : " << user.user.referenceNumber << std::endl;
        std::cout << "\t  Birthday : " << user.birthday.dateBirthday << std::endl;
        std::cout << "\t  Size : " << user.characteristics.size << " m" << std::endl;
        std::cout << "\t  Eye color : " << user.characteristics.eyeColor << std::endl;
        std::cout << "\t  Hair color : " << user.characteristics.hairColor << std::endl;
        std::cout << "\t  Number of street : " << user.adress.numberOfStreet << std::endl;
        std::cout << "\t  Name of street : " << user.adress.nameOfStreet << std::endl;
        std::cout << "\t  ZIP Code : " << user.adress.zipCode << std::endl;
        std::cout << "\t  City : " << user.adress.city << std::endl;
        std::cout << "\t  Country : " << user.adress.country << std::endl;
        affichage++;
        std::cout << "\n\n";
    }

    return 0;
}


