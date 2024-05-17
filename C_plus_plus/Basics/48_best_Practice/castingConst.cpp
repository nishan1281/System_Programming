//
// Created by nisha on 5/4/2024.
//

#include "iostream"
#include "map"
#include "unordered_map"
#include "vector"

//bad version
const std::string &more_frequent (const std::unordered_map<std::string, int> &word_counts,
                                  const std::string &word1,
                                  const std::string &word2) {
    auto &counts = const_cast<std::unordered_map<std::string, int> &>(word_counts);
    return counts[word1] > counts[word2]? word1 : word2;
}

//correct version
const std::string &more_frequent1(const std::unordered_map<std::string, int> &word_counts,
                                 const std::string &word1,
                                 const std::string &word2) {
    return word_counts.at(word1) > word_counts.at(word2) ? word1 : word2;
}

void trial (std::vector<int> &arr){
    for (const auto &x: arr){
        std::cout << x << "\n";
    }
}

vs

void trial (std::vector<int> &arr){
    for (const auto &x: arr){
        std::cout << x << "\n";
    }
}

const char* method(){
    return "string literal";
}

int main(){
    std::map<std::string, int> myMap {{"apple", 5},
                                      {"banana", 6},
                                      {"orange", 8}};

    // Using normal workflow
    for (const auto &x:myMap) {
        std::cout<< x.first << ":" << x.second << "\n";
    }

    //using structured bindings to iterate over key-value pairs
    for (const auto& [key, value] :myMap) {
        std::cout << key << ":" << value <<"\n";
    }
}




































