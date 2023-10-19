#pragma once

#include <spdlog/spdlog.h>
#include "client.h"

class CCMClient : public IWebClient
{
public:
    explicit CCMClient()
    {
        spdlog::info("--> CCMClient::CCMClient()");
        spdlog::info("<-- CCMClient::CCMClient()");
    }
};