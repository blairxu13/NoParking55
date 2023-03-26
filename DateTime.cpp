#include "DateTime.h"

DateTime::DateTime(unsigned int year, unsigned short month, unsigned short day, unsigned short hour,
                   unsigned short minute) {
    this->year = year;
    this->month = month;
    this->day = day;
    this->hour = hour;
    this->minute = minute;
}

std::string DateTime::getDateString() {
    return std::to_string(year) + std::to_string(month) + std::to_string(day);
}
