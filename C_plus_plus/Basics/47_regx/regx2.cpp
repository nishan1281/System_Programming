//
// Created by nisha on 5/3/2024.
//

#include "iostream"
#include "regex"

void printMatches(std::string& str, const std::regex &reg){
    std::sregex_iterator currentMatch(str.begin(), str.end(), reg);
    std::sregex_iterator lastMatches; //this variable is null. Used to continue loop til nul

    while (currentMatch != lastMatches){
        std::smatch match = *currentMatch;
        std::cout << match.str() << "\n";
        currentMatch++;
    }
    std::cout << std::endl;
}


int main(){
    std::string str{"The ape was at the apex"};
    std::regex reg ("(ape[^ ]?)");
    printMatches(str, reg);

    std::string str1{"Cat rat mat fat pat"};
    std::regex reg1 ("([crmfp]at?)");
    printMatches(str1, reg1);

    std::regex reg2 ("([C-Fc-f]at?)");
    printMatches(str1, reg2);

    std::regex reg3 ("([^Cr]at?)");
    std::string owlFood = std::regex_replace(str1, reg3, "Owl");
    std::cout << owlFood << "\n"  "\n";

    std::string str3{"a as ape bug"};
    std::regex reg4 ("a[a-z]+"); //+ meaning one or more matches
    printMatches(str3, reg4);

    return 0;

   }

