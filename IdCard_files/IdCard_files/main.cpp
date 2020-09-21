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
    int numberOfId{};
    const uint8_t numberOfInput{13}, maxSizeAge{2}, maxSizeReferenceNumber{6}, ignoreTwo{2}, ignoreFive{5}, ignoreThree{3};
    ID id{};
    std::vector<std::string> identification = {};
    
    std::cout << "ID Card with loop \n";
    std::cout << "Enter the number of ID you have to complete : ";
    std::cin >> numberOfId;
    std::cin.ignore(2, '\n');
    std::cout << std::endl;
    
    std::cout << "ID to complete : " << numberOfId << std::endl;
    std::cout << std::endl;
    
    for (int index = 1; index <= numberOfId; ++index)
        {
            std::cout << "ID Number " << index << std::endl;
            
            std::cout << " Name : ";
            type(id.user.name, identification);

            std::cout << " Firstname : ";
            type(id.user.firstname, identification);

            std::cout << " Age : ";
            typeAndCheck(id.user.age, identification, maxSizeAge, ignoreTwo);

            std::cout << " Reference number : ";
            typeAndCheck(id.user.referenceNumber, identification, maxSizeReferenceNumber, ignoreFive);
            
            std::cout << " Birthday jj/mm/yyyy : ";
            typeAndCheckDate(id.birthday.dateBirthday, identification);
            
            std::cout << " Eye color : ";
            type(id.characteristics.eyeColor, identification);
            
            std::cout << " Hair color : ";
            type(id.characteristics.hairColor, identification);
            
            std::cout << " Size : ";
            typeAndCheckSize(id.characteristics.size, identification, ignoreThree);
            
            std::cout << " Number of street : ";
            typeAndCheck(id.adress.numberOfStreet, identification, id.adress.maxSizeNumberOfStreet, ignoreFive);
            
            std::cout << " Name of street : ";
            type(id.adress.nameOfStreet, identification);
            
            std::cout << " ZIP code : ";
            typeAndCheck(id.adress.zipCode, identification, id.adress.maxSizeZipCode, ignoreFive);
            
            std::cout << " City : ";
            type(id.adress.city, identification);
            
            std::cout << " Country : ";
            type(id.adress.country, identification);
            std::cout << std::endl;

        }
    
    display(numberOfId, numberOfInput, identification);

    return 0;
}


