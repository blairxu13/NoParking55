#ifndef NOPARKING_CITATION_H
#define NOPARKING_CITATION_H

#include "DateTime.h"

class Citation {
public:
    std::string plateNumber;
    std::string state;
    std::string carMake;
    std::string carStyle;
    std::string carColor;
    std::string location;
    std::string violation;
    unsigned int fine;
    DateTime* dateTime;

    Citation(std::string &plateNumber, std::string &state, std::string &carMake, std::string &carStyle, std::string &carColor,
             std::string &location, std::string &violation, unsigned int &fine, DateTime &dateTime);
    Citation(const Citation &other);

    ~Citation();
};


#endif //NOPARKING_CITATION_H
