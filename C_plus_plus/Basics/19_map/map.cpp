//
/* Created by nisha on 2/4/2024.
 * map <key, value>. value is attached with key
*/

#include "iostream"
#include "map"

int main (int argc, char const *argv[]) {
    std::map<std::string, int> person = {
            {"age", 9},
            {"legs", 2},
            {"cars", 9}
    };

    //to insert

    person.insert(std::pair<std::string, int>("friend", 21));

    std::cout << person["age"] << std::endl;
    std::cout << person["friend"] << std::endl;

    //finding something based on end algorithm. Searching till the end.

    if (person.find("cars") == person.end()){
        std::cout << "Item not found" << std::endl;
    } else{
        std::cout << "Item found" << std::endl;
    }

    //ternary operator = similar as above if else
    //std::cout << (person.find("leg") == person.end()? "item not found": "item found");

    //looping by "for"
    for (auto & i : person) {

        std::cout << i.first << " :  " <<i.second <<std::endl;
    }

    //other functions

//    person.erase("legs");
//    person.clear();
//    person.size();
//    bool xx =  person.empty();


    return 0;
}