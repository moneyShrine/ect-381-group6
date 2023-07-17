//Written by
//Name: Uguru Felix 
//Matric number: 19/097344152

#include <string>
#include <sstream>

namespace InputValidationLibrary {
    bool isValidPositiveDouble(const std::string& input) {
        std::istringstream iss(input);
        double value;
        return (iss >> value) && (value > 0.0);
    }

    bool isValidNonNegativeDouble(const std::string& input) {
        std::istringstream iss(input);
        double value;
        return (iss >> value) && (value >= 0.0);
    }
}


