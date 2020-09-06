#include <iostream>
#include <vector>
#include <array>
#include <string>

struct User
{
    std::string name{};
    std::string firstname{};
    std::string age{};
    std::string referenceNumber{};
    const uint8_t maxSizeAge{2};
    const uint8_t maxSizeReferenceNumber{6};
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
            std::getline(std::cin, id.user.name);
            identification.push_back(id.user.name);

            std::cout << " Firstname : ";
            std::getline(std::cin, id.user.firstname);
            identification.push_back(id.user.firstname);

            std::cout << " Age : ";
            std::cin >> id.user.age;
            std::cin.ignore(2, '\n');
            
            while(id.user.age.length() > id.user.maxSizeAge)
                {
                    std::cout << " Error try again AGE : ";
                    std::cin >> id.user.age;
                    std::cin.ignore(2, '\n');
                }
            identification.push_back(id.user.age);

            std::cout << " Reference number : ";
            std::cin >> id.user.referenceNumber;
            std::cin.ignore(5, '\n');
            
            while(id.user.referenceNumber.length() > id.user.maxSizeReferenceNumber)
                {
                    std::cout << " Error try again REFERENCE NUMBER : ";
                    std::cin >> id.user.referenceNumber;
                    std::cin.ignore(5, '\n');
                }
            identification.push_back(id.user.referenceNumber);
            
            std::cout << " Birthday jj/mm/yyyy : ";
            std::getline(std::cin, id.birthday.dateBirthday);
            
            while(id.birthday.dateBirthday[2] != '/')
                {
                    std::cout << " Error try again BIRTHDAY : ";
                    std::getline(std::cin, id.birthday.dateBirthday);
                }
            
            while(id.birthday.dateBirthday[5] != '/')
                {
                    std::cout << " Error try again BIRTHDAY : ";
                    std::getline(std::cin, id.birthday.dateBirthday);
                }
            identification.push_back(id.birthday.dateBirthday);
        }
    
    for( std::string element : identification)
    {
        std::cout << element << std::endl;
    }
    
    
    std::cout << "Fin du code \n";
    return 0;
}
