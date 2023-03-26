#include "DateTime.h"

std::string DateTime::toZeroPaddedString(unsigned int value, unsigned int targetLength) {
    std::string outputString = std::to_string(value);
    if (outputString.size() < targetLength) {
        std::string appendString(targetLength - outputString.size(), '0');
        outputString = appendString + outputString;
    }
    return outputString;
}

DateTime::DateTime(unsigned int year, unsigned short month, unsigned short day, unsigned short hour,
                   unsigned short minute) {
    this->year = year;
    this->month = month;
    this->day = day;
    this->hour = hour;
    this->minute = minute;
}

bool DateTime::operator<(DateTime &other) {
    return this->getDateTimeString() < other.getDateTimeString();
}
bool DateTime::operator>(DateTime &other) {
    return this->getDateTimeString() > other.getDateTimeString();
}
bool DateTime::operator==(DateTime &other) {
    return this->getDateTimeString() == other.getDateTimeString();
}
bool DateTime::operator!=(DateTime &other) {
    return this->getDateTimeString() != other.getDateTimeString();
}
bool DateTime::operator<=(DateTime &other) {
    return this->getDateTimeString() <= other.getDateTimeString();
}
bool DateTime::operator>=(DateTime &other) {
    return this->getDateTimeString() >= other.getDateTimeString();
}

// Function to convert this into a string
DateTime::operator std::string() const {
    return std::to_string(year) + "/" + toZeroPaddedString(month, 2) + "/" +
           toZeroPaddedString(day, 2) + " " + toZeroPaddedString(hour, 2) + ":" +
           toZeroPaddedString(minute, 2);
}

std::string DateTime::getDateString() {
    return std::to_string(year) + toZeroPaddedString(month, 2) +
        toZeroPaddedString(day, 2);
}

std::string DateTime::getDateTimeString() {
    return std::to_string(year) + toZeroPaddedString(month, 2) +
           toZeroPaddedString(day, 2) + toZeroPaddedString(hour, 2) +
           toZeroPaddedString(minute, 2);
}
