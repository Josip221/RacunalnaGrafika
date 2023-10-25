#include <iostream>
#include <fstream>
#include <string>

//int lab1();
int lab2(std::string);

int main(int argc, char *argv[]) {

    std::string file = "model.obj";
 
    if (argc < 2) {
        std::ofstream objFile("model.obj", std::ios::out | std::ios::trunc);

        if (!objFile.is_open()) {
            std::cerr << "Failed to open the OBJ file." << std::endl;
            return 1;
        }

        std::cout << "Enter vertices and faces (e.g., 'v 0.5 0.2 0.5', 'f 1 2 3'): " << std::endl;

        std::string input;
        
        while (true) {
            std::getline(std::cin, input);

            if (input == "exit") {
                break;
            }

            objFile << input << '\n';
        }

        objFile.close();
    }
    else {
        file = argv[1];
    }

    std::cout << file << std::endl;

    // LAB 1
    //lab1();

    //LAB 2
    lab2(file);

    return 0;
}