#ifndef NOPARKING_DATABASE_H
#define NOPARKING_DATABASE_H

#include <filesystem>
#include <iostream>
#include <fstream>
#include <memory>
#include <string>
#include <vector>
#include "Citation.h"

class Database {
public:
    std::vector<std::unique_ptr<Citation>> data;  // The database of parking citations
    std::vector<std::unique_ptr<Citation>> plateSortedData;  // Parking citations sorted by license plate
    std::vector<std::unique_ptr<Citation>> datetimeSortedData;  // Parking citations sorted by date and time
    /**
     * Creates an interface to a ParkingCitation database.
     */
    Database();

    /**
     * Reads data in from ma CSV file. Not exception-safe.
     * @param filename File to read in from
     */
    void readFromCsv(const std::string &filename);
};


#endif //NOPARKING_DATABASE_H
