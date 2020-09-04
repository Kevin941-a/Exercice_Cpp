//
//  main.cpp
//  Tableau
//
//  Created by Kevin Racapé on 04/09/2020.
//  Copyright © 2020 Kevin Racapé. All rights reserved.
//

#include <iostream>
#include <array>
#include <vector>

int main()
{
    
//    std::array<int, 5> tableauArray = {0, 10, 20, 30, 40};
//
//    std::cout << tableauArray[4] << std::endl;
//
//    tableauArray[1] = 100;
//    std::cout << tableauArray[1] << std::endl;
//
//    std::cout << tableauArray.size() << std::endl;
//    std::cout << tableauArray.at(3) << std::endl;
//
//    for (int index = 0; index < tableauArray.size(); ++index)
//    {
//        std::cout << tableauArray.at(index) << std::endl;
//    }
    
//    for (int element : tableauArray)
//    {
//        std::cout << element << std::endl;
//    }
    
    std::vector<int> tableauVector = {0, 10, 20 , 30, 40};
    tableauVector[1] = 100;
    
    std::cout << tableauVector[1] << std::endl;
    std::cout << tableauVector.at(1) << std::endl;
    
    tableauVector.push_back(7);
    tableauVector.emplace_back(8);
//    tableauVector.clear();
    std::cout << tableauVector.empty() << std::endl;
    tableauVector.pop_back();
    
    for (int element : tableauVector)
    {
        std::cout << element << std::endl;
    }
    
    return 0;
}
