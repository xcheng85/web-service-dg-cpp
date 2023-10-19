#pragma once

#include <spdlog/spdlog.h>
#include "db-connection.h"

class RedisConnection : public IDataBaseConnection
{
public:
    explicit RedisConnection()
    {
        spdlog::info("--> RedisConnection::RedisConnection()");
        spdlog::info("<-- RedisConnection::RedisConnection()");
    }
};
