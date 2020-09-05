#include <iostream>
#include <vector>
#include <array>
#include <string>

struct User
{
    std::string name{};
    std::string firstname{};
    int age{};
    long referenceNumber{};
};

struct Adress
{
    int numberOfStreet{};
    std::string nameOfStreet{};
    int zipCode{};
    std::string city{};
    std::string country{};
};

struct Characteristics
{
    float size{};
    std::string eyeColor{};
    std::string hairColor{};
};

struct Birthday
{
    int day{};
    std::string month{};
    int year{};
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
//    int index{1};
    ID id{};
    int maxAge{100}, maxReferenceNumber{999999};
    std::vector<std::string> identification = {};
    
    std::cout << "ID Card with loop \n";
    std::cout << "Enter the number of ID you have to complete : ";
    std::cin >> numberOfId;
    std::cin.ignore(2, '\n');
    std::cout << std::endl;
    
    std::cout << "ID to complete : " << numberOfId << std::endl;
    
    for (int index = 1; index <= numberOfId; ++index)
    {
        std::cout << index << " Name : ";
        std::getline(std::cin, id.user.name);
        identification.push_back(id.user.name);

        std::cout << index << " Firstname : ";
        std::getline(std::cin, id.user.firstname);
        identification.push_back(id.user.firstname);

        std::cout << index << " Age : ";
        std::cin >> id.user.age;
        std::cin.ignore(2, '\n');

            while(id.user.age > maxAge)
            {
                std::cout << index << " Error try again : ";
                std::cin >> id.user.age;
                std::cin.ignore(2, '\n');
            }

        std::cout << index << " Reference number : ";
        std::cin >> id.user.referenceNumber;
        std::cin.ignore(5, '\n');

            while(id.user.referenceNumber > maxReferenceNumber)
            {
                std::cout << index << " Error try again : ";
                std::cin >> id.user.referenceNumber;
                std::cin.ignore(5, '\n');
            }

    }
    
    
    for( std::string element : identification)
    {
        std::cout << element << std::endl;
    }
    
    
    std::cout << "Fin du code \n";
    return 0;
}
