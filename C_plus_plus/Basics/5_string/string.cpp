//
// Created by nisha on 2/3/2024.
//
#include "iostream"
#include "string"

int main (){
    std::string str = "Hello ";
    str += "World"; //str = str+"World"
    std::cout  << str << std::endl;

    std::string str1 = "Hello ";
    std::string str2 = "Hello ";
    std::cout << str1.compare(str2) << std::endl; //return o if true and return - for false

    std::string str3 ("Hello World. I am learning programming. I am Nishan");  //it is ok if not used equal sign
    std::cout <<str3.substr(0, 5) <<std::endl;
    std::cout <<str3.substr(2, 5) <<std::endl;
    std::cout <<str3.substr(5, 3) <<std::endl;

    //find first matching of lo
    std::cout <<str3.find("lo") <<std::endl;

    //finding last position
    std::cout <<str3.rfind("am") <<std::endl;

    //finding any first character matching from aiuo
    std::cout <<str3.find_first_of("aiuo") <<std::endl;

    //to Replace
    str3.replace(str3.find("Nishan"), 6, "Ariful");
    std::cout <<str3 <<std::endl;

    //to insert
    str1.insert(str1.find("Hello") +6, "there");
    std::cout <<str1 <<std::endl;

    //to erase
    std::cout <<str3.erase(11) <<std::endl;

    //if nothing found a big digit will show

    return 0;
}
