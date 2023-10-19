#pragma once

#include <spdlog/spdlog.h>
#include "middleware.h"

// global
class MetricsInstrumentSelectorMiddleware : public IMiddleware
{
public:
    explicit MetricsInstrumentSelectorMiddleware()
    {
        spdlog::info("--> MetricsInstrumentSelectorMiddleware::MetricsInstrumentSelectorMiddleware()");
        spdlog::info("<-- MetricsInstrumentSelectorMiddleware::MetricsInstrumentSelectorMiddleware()");
    }
};