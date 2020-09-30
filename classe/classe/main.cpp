//
//  main.cpp
//  classe
//
//  Created by Kevin Racapé on 28/09/2020.
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    const std::string filePath{"/Users/kevin/Desktop/C++/exerciceFile.txt"}; /* Chemin absolue */
//    std::string value{"Bonjour, je suis Kevin."};
//    int age{31};
//    int age{};
    std::string ligne{};
    
//    const std::string filePath{"../../../exerciceFile"}; /* Chemin relatif : Chemin à partir du fichier main.cpp */
    
//    const std::string filePath{"/Users/kevin/Desktop/C++/"};
    
//    /Users/kevin/Desktop/C++/Exercices/classe/classe/main.cpp
//    std::ofstream exerciceFile("C:/Users/kevin/Desktop/C++/exerciceFile");
//    std::ofstream exerciceFile(filePath.c_str()); /* output*/
    
    std::ifstream exerciceFile(filePath.c_str()); /* input*/
    std::ifstream file;
    
    
    if(exerciceFile)
    {
//        exerciceFile << "Fichier ouvert" << std::endl;
//        exerciceFile << value << std::endl;
//        exerciceFile << "J'ai " << age << " ans. " << std::endl;
//        exerciceFile >> age;
//        std::cout << age << std::endl;
        
//        std::getline(exerciceFile, ligne);
//        std::cout << ligne << std::endl;
        
        while (std::getline(exerciceFile, ligne))
        {
            std::cout << ligne << std::endl;
        }
       
        exerciceFile.close();
        
        std::getline(exerciceFile, ligne);
        std::cout << ligne << std::endl;
 
    }
    else
    {
        std::cout << "Erreur lors de l'ouverture du fichier" << std::endl;
    }

    file.open("/Users/kevin/Desktop/C++/fileClasse.txt");
    
    
    if(file)
    {
        std::cout << "Fichier ouvert." << std::endl;
    }
    else
    {
        std::cout << "Erreur." << std::endl;
    }

    return 0;
}
