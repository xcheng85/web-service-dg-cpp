#pragma once

#include <spdlog/spdlog.h>
#include "repository.h"

class RedisRepository : public IRepository
{
public:
    explicit RedisRepository()
    {
        spdlog::info("--> RedisRepository::RedisRepository()");
        spdlog::info("<-- RedisRepository::RedisRepository()");
    }
};
