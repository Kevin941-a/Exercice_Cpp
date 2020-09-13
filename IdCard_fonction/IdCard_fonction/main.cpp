#include <iostream>
#include <vector>
#include <string>

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
            std::cout << " Error try again : ";
            std::getline(std::cin, valueToTake);
        }
    table.push_back(valueToTake);
}

void typeAndCheckSize(std::string& valueToTake, std::vector<std::string>& table, uint8_t ignore)
{
    std::cin >> valueToTake;
    std::cin.ignore(ignore, '\n');
    
    while (valueToTake[0] >= '3')
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
            std::cout << "\tAge : " << table[iteration+2] << std::endl;
            std::cout << "\tReference number : " << table[iteration+3] << std::endl;
            std::cout << "\tBirthday : " << table[iteration+4] << std::endl;
            std::cout << "\tEye color : " << table[iteration+5] << std::endl;
            std::cout << "\tHair color : " << table[iteration+6] << std::endl;
            std::cout << "\tSize : " << table[iteration+7] << std::endl;
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

