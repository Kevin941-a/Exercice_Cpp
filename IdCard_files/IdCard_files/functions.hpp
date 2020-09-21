//
//  functions.hpp
//  IdCard_files
//
//  Created by Kevin Racapé on 20/09/2020.
//

#pragma once

void type(std::string& valueToTake);
void typeAndCheck(std::string& valueToTake, uint8_t max, uint8_t ignore);
void typeAndCheckDate(std::string& valueToTake);
void typeAndCheckSize(std::string& valueToTake, uint8_t ignore);
void display(int numberOfId, uint8_t numberOfInput, std::vector<std::string>& table);
