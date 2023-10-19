#pragma once

#include <spdlog/spdlog.h>
#include "middleware.h"

// global
class MonitoringMiddleware : public IMiddleware
{
public:
    explicit MonitoringMiddleware()
    {
        spdlog::info("--> MonitoringMiddleware::MonitoringMiddleware()");
        spdlog::info("<-- MonitoringMiddleware::MonitoringMiddleware()");
    }
};
