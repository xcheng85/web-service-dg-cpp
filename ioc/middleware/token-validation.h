#pragma once

#include <spdlog/spdlog.h>
#include "middleware.h"

// global;
class SAuthTokenMiddleware : public IMiddleware
{
public:
    explicit SAuthTokenMiddleware()
    {
        spdlog::info("--> SAuthTokenMiddleware::SAuthTokenMiddleware()");
        spdlog::info("<-- SAuthTokenMiddleware::SAuthTokenMiddleware()");
    }
};
