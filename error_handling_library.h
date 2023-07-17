//Written by 

//Name: Udoh, Joy Emmanuel 
//Matric number: 19/097344149

//And

//Written by
//Name: OKIM-EFFA , GRACE VITALIS.
//Matric number: 19/097344119

#include <stdexcept>
#include <string>
namespace ErrorHandlingLibrary {
    void throwInvalidConversionError(const std::string& message) {
        throw std::runtime_error("Invalid conversion: " + message);
    }

    void throwInvalidInputError(const std::string& message) {
        throw std::invalid_argument("Invalid input: " + message);
    }
}
