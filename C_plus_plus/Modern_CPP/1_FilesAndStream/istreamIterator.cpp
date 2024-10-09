//
// Created by nisha on 5/24/2024.
//

#include "iostream"
#include "iterator"
#include "vector"

int main()
{

    std::istream_iterator<std::string> inputIteratorStream(std::cin);  //Iterator to read strings
    std::istream_iterator<std::string> endOfFile; //empty iterator requires to close loop

    std::vector<std::string> vectorString;   //vector to store input

    while (inputIteratorStream != endOfFile) //do we have any input to read?
    {
        vectorString.push_back(*inputIteratorStream);  //yes store it in the vector
        ++inputIteratorStream;   //move next input
    }

    for (const auto& v: vectorString)
        std::cout<<v<<std::endl;

}