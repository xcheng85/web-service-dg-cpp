#pragma once

#include <spdlog/spdlog.h>
#include "lock.h"

class RedisLockPool : public IDistributedLockPool
{
public:
    explicit RedisLockPool()
    {
        spdlog::info("--> RedisLockPool::RedisLockPool()");
        spdlog::info("<-- RedisLockPool::RedisLockPool()");
    }

    void acqurieLock()
    {
    }

    void returnLock()
    {
    }
};
