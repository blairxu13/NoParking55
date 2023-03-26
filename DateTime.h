#ifndef NOPARKING_DATETIME_H
#define NOPARKING_DATETIME_H

#include <string>

/**
 * Represents a date/time of a parking violation
 */
class DateTime {
public:
    unsigned int year;
    unsigned short month;
    unsigned short day;
    unsigned short hour;
    unsigned short minute;
    /**
     *
     * @param year
     * @param month
     * @param day
     * @param hour
     * @param minute
     */
    DateTime(unsigned int year, unsigned short month, unsigned short day, unsigned short hour, unsigned short minute);
    /**
     * Gets the date as a string
     * @return Date as a string
     */
    std::string getDateString();
};


#endif //NOPARKING_DATETIME_H
