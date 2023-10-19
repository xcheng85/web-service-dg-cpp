#pragma once

#include <spdlog/spdlog.h>
#include "config.h"

class AppConfig : public IConfig
{
public:
    explicit AppConfig()
    {
        spdlog::info("--> AppConfig::AppConfig()");
        spdlog::info("<-- AppConfig::AppConfig()");
    }
};
