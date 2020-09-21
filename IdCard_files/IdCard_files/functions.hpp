//
//  functions.hpp
//  IdCard_files
//
//  Created by Kevin Racapé on 20/09/2020.
//

#pragma once

void type(std::string& valueToTake, std::vector<std::string>& table);
void typeAndCheck(std::string& valueToTake, std::vector<std::string>& table, uint8_t max, uint8_t ignore);
void typeAndCheckDate(std::string& valueToTake, std::vector<std::string>& table);
void typeAndCheckSize(std::string& valueToTake, std::vector<std::string>& table, uint8_t ignore);
void display(int numberOfId, uint8_t numberOfInput, std::vector<std::string>& table);
