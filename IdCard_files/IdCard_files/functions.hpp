//
//  functions.hpp
//  IdCard_files
//
//  Created by Kevin Racapé on 20/09/2020.
//

#pragma once

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

void type(std::string& valueToTake);
void typeAndCheck(std::string& valueToTake, uint8_t max, uint8_t ignore);
void typeAndCheckDate(std::string& valueToTake);
void typeAndCheckSize(std::string& valueToTake, uint8_t ignore);
void display(std::vector<ID>& identification, int affichage);
