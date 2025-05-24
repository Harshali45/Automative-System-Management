
#include <iostream>
#include "db/DatabaseManager.h"

int main() {
    std::cout << "Automotive System Management Console\n";

    auto& db = DatabaseManager::getInstance();
    if (!db.getDB()) {
        std::cerr << "Failed to connect to database.\n";
        return 1;
    }

    // Initialize tables
    std::string vehicleTable = "CREATE TABLE IF NOT EXISTS Vehicles ("
                               "ID INTEGER PRIMARY KEY AUTOINCREMENT,"
                               "Make TEXT, Model TEXT, Year INT,"
                               "VIN TEXT UNIQUE, FuelType TEXT);";
    db.execute(vehicleTable);

    std::cout << "Database initialized successfully.\n";
    return 0;
}
