//
// Created by nisha on 10/20/2024.
//

#include "iostream"
#include "sstream"

int main()
{
    std::string text = "hello";
    std::string output;
    output += "<p>";
    output += text;
    output += "</p>";

    std::cout << output <<std::endl;

    std::string word[] = {"hello", "world"};
    std::ostringstream oss;
    oss << "<ol>";
    for (auto w : word)
        oss<<"\n <li>" << w << "</li>";
    oss<<"\n <ol>";
    std::cout << oss.str() <<std::endl;

}