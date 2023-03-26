#ifndef NOPARKING_DATETIME_H
#define NOPARKING_DATETIME_H

#include <string>

/**
 * Represents a date/time of a parking violation
 */
class DateTime {
protected:
    /**
     * Convert a base-10 unsigned integer value to a string, left-padded by zeroes as needed.
     * @param value Value to convert.
     * @param targetLength Number of digits to pad out to. If less or equal to than the number of digits in the number,
     * will not pad any digits.
     * @return Zero-padded string representation of that value.
     */
    static std::string toZeroPaddedString(unsigned int value, unsigned int targetLength);
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

    operator std::string() const;  // Allow conversion into a string
    /**
     * Gets the date as a string. Format is YYYYMMDD
     * @return Date as a string
     */
    std::string getDateString();
    /**
     * Gets the date and time as a string. Format is YYYYMMDDHHmm (24-hour format)
     * @return Date and time as a string
     */
    std::string getDateTimeString();
};


#endif //NOPARKING_DATETIME_H
