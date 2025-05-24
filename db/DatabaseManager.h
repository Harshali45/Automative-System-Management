
#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <sqlite3.h>
#include <string>
#include <memory>

class DatabaseManager {
public:
    static DatabaseManager& getInstance(const std::string& dbFile = "automotive.db");
    sqlite3* getDB();

    bool execute(const std::string& sql);
    bool prepare(const std::string& sql, sqlite3_stmt** stmt);

private:
    DatabaseManager(const std::string& dbFile);
    ~DatabaseManager();
    DatabaseManager(const DatabaseManager&) = delete;
    DatabaseManager& operator=(const DatabaseManager&) = delete;

    sqlite3* db;
};

#endif
