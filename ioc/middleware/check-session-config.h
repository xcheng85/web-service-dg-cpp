#pragma once

#include <spdlog/spdlog.h>
#include "middleware.h"

// non-global middleware
class CheckSessionConfigMiddleware : public IMiddleware
{
public:
    explicit CheckSessionConfigMiddleware()
    {
        spdlog::info("--> CheckSessionConfigMiddleware::CheckSessionConfigMiddleware()");
        spdlog::info("<-- CheckSessionConfigMiddleware::CheckSessionConfigMiddleware()");
    }
};