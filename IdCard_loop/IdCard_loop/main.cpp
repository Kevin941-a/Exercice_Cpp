#include <iostream>
#include <vector>
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
    int numberOfId{}, idNumber{1};
    const uint8_t numberOfInput{13}, changeTable{12};
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
            
            std::cout << " Eye color : ";
            std::getline(std::cin, id.characteristics.eyeColor);
            identification.push_back(id.characteristics.eyeColor);
            
            std::cout << " Hair color : ";
            std::getline(std::cin, id.characteristics.hairColor);
            identification.push_back(id.characteristics.hairColor);
            
            std::cout << " Size : ";
            std::cin >> id.characteristics.size;
            std::cin.ignore(3, '\n');
            
            while(id.characteristics.size[0] >= '3')
                {
                    std::cout << " Error try again SIZE : ";
                    std::cin >> id.characteristics.size;
                    std::cin.ignore(3, '\n');
                }
            identification.push_back(id.characteristics.size);
            
            std::cout << " Number of street : ";
            std::getline(std::cin, id.adress.numberOfStreet);
            
            while (id.adress.numberOfStreet.length() > id.adress.maxSizeNumberOfStreet)
                {
                    std::cout << " Error try again NUMBER OF STREET : ";
                    std::getline(std::cin, id.adress.numberOfStreet);
                }
            identification.push_back(id.adress.numberOfStreet);
            
            std::cout << " Name of street : ";
            std::getline(std::cin, id.adress.nameOfStreet);
            identification.push_back(id.adress.nameOfStreet);
            
            std::cout << " ZIP code : ";
            std::getline(std::cin, id.adress.zipCode);
            
            while (id.adress.zipCode.length() > id.adress.maxSizeZipCode)
                {
                    std::cout << " Error try again ZIP CODE : ";
                    std::getline(std::cin, id.adress.zipCode);
                }
            identification.push_back(id.adress.zipCode);
            
            std::cout << " City : ";
            std::getline(std::cin, id.adress.city);
            identification.push_back(id.adress.city);
            
            std::cout << " Country : ";
            std::getline(std::cin, id.adress.country);
            identification.push_back(id.adress.country);
            
            std::cout << std::endl;
        }
    
    for (int iteration = 0; iteration < numberOfId * numberOfInput; ++iteration)
        {
            std::cout << "Checking ID number " << idNumber << std::endl;
            std::cout << "Name : " << identification[iteration] << std::endl;
            std::cout << "Firstname : " << identification[iteration+1] << std::endl;
            std::cout << "Age : " << identification[iteration+2] << std::endl;
            std::cout << "Reference number : " << identification[iteration+3] << std::endl;
            std::cout << "Birthday : " << identification[iteration+4] << std::endl;
            std::cout << "Eye color : " << identification[iteration+5] << std::endl;
            std::cout << "Hair color : " << identification[iteration+6] << std::endl;
            std::cout << "Size : " << identification[iteration+7] << std::endl;
            std::cout << "Number of street : " << identification[iteration+8] << std::endl;
            std::cout << "Name of street : " << identification[iteration+9] << std::endl;
            std::cout << "ZIP code : " << identification[iteration+10] << std::endl;
            std::cout << "City : " << identification[iteration+11] << std::endl;
            std::cout << "Country : " << identification[iteration+12] << std::endl;
            std::cout << std::endl;
            iteration = iteration + changeTable;
            idNumber++;
        }
    return 0;
}
