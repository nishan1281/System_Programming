// Include necessary header files
#include <iostream>
#include <regex>

// Function to print matches found in the string using the given regular expression
void printMatches(std::string& str, const std::regex& reg){
    // Create a std::smatch object to store the match results
    std::smatch matches;

    // Enable boolalpha format for std::cout (to print true/false instead of 1/0)
    std::cout << std::boolalpha;

    // Loop until there are no more matches found in the string
    while (std::regex_search(str, matches, reg)){
        // Print whether there is a match
        std::cout << "Is there a match:" <<  matches.ready() << "\n";

        // Print whether there are no matches
        std::cout << "Are there no matches: " << matches.empty() << "\n";

        // Print the number of matches found
        std::cout << "Number of matches: "  << matches.size() << "\n";

        // Print the first matched substring captured by the first capturing group
        std::cout << matches.str(1)<< "\n";

        // Update the string to search for the next iteration (suffix after the last match)
        str = matches.suffix().str();

        // Print a newline for formatting
        std::cout<< "\n";
    }
}

int main(){
    // Input string
    std::string str{"the ape was at the apex"};

    // Regular expression pattern
    std::regex reg ("(ape[^ ]?)");

    printMatches(str, reg);

    // Return 0 to indicate successful completion
    return 0;
}
