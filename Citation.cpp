#include "Citation.h"

Citation::Citation(std::string &plateNumber, std::string &state, std::string &carMake, std::string &carStyle,
                   std::string &carColor, std::string &location, std::string &violation, unsigned int &fine,
                   DateTime &dateTime) {
    this->plateNumber = plateNumber;
    this->state = state;
    this->carMake = carMake;
    this->carStyle = carStyle;
    this->carColor = carColor;
    this->location = location;
    this->violation = violation;
    this->fine = fine;

    // Copy dateTime onto the heap
    this->dateTime = new DateTime(dateTime);
}

Citation::Citation(const Citation &other) {
    // Copy constructor
    this->plateNumber = other.plateNumber;
    this->state = other.state;
    this->carMake = other.carMake;
    this->carStyle = other.carStyle;
    this->carColor = other.carColor;
    this->location = other.location;
    this->violation = other.violation;
    this->fine = other.fine;
    this->dateTime = new DateTime(*other.dateTime);
}

Citation::~Citation() {
    // Clean up the memory
    delete this->dateTime;
}
