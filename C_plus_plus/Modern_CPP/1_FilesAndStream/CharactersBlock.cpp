#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string fileName = "file.txt";

    std::ifstream inputFile(fileName);

    if (!inputFile) {
        std::cerr << "Could not open " << fileName << std::endl;
        return -1;
    }

    // Find the size of the file
    inputFile.seekg(0, std::ios::end);  //file pointer to the end
    std::streampos fileSize = inputFile.tellg();  //telg returns the file size.
    inputFile.seekg(0, std::ios::beg); //file pointer to the beginning

    // Allocate memory dynamically for file contents
    char* fileBuffer = new char[fileSize];

    // Read file contents into the buffer
    inputFile.read(fileBuffer, fileSize);
    auto inputReadByte = inputFile.gcount(); //total byte we received

    inputFile.close();

    // Output file contents

    std::cout << "File data: " << std::endl;
    std::cout.write(fileBuffer, fileSize);
    std::cout << std::endl;
    std::cout << "Total data read: " << inputReadByte << std::endl;

    // Free dynamically allocated memory
    delete[] fileBuffer;

    return 0;
}
