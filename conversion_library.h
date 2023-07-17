//Written by 
//Name: ONWUEGBUCHULEM GEORGE 
//Matric Number: 19/097344126

#include <string>




namespace ConversionLibrary {
    // Length Conversions
    double metersToFeet(double meters) {
        return meters * 3.28084;
    }

    double feetToMeters(double feet) {
        return feet / 3.28084;
    }

    // Mass Conversions
    double kilogramsToPounds(double kilograms) {
        return kilograms * 2.20462;
    }

    double poundsToKilograms(double pounds) {
        return pounds / 2.20462;
    }

    // Volume Conversions
    double litersToGallons(double liters) {
        return liters * 0.264172;
    }

    double gallonsToLiters(double gallons) {
        return gallons / 0.264172;
    }

    // Temperature Conversions
    double celsiusToFahrenheit(double celsius) {
        return (celsius * 9.0 / 5.0) + 32.0;
    }

    double fahrenheitToCelsius(double fahrenheit) {
        return (fahrenheit - 32.0) * 5.0 / 9.0;
    }

    // Time Conversions
    double secondsToMinutes(double seconds) {
        return seconds / 60.0;
    }

    double minutesToSeconds(double minutes) {
        return minutes * 60.0;
    }
}

