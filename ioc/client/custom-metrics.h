#pragma once

#include <spdlog/spdlog.h>
#include "client.h"

class CustomMetricsClient : public IWebClient
{
public:
    explicit CustomMetricsClient()
    {
        spdlog::info("--> CustomMetricsClient::CustomMetricsClient()");
        spdlog::info("<-- CustomMetricsClient::CustomMetricsClient()");
    }
};