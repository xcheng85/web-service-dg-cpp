#pragma once

#include <spdlog/spdlog.h>
#include "client.h"

class TokenExchangeClient : public IWebClient
{
public:
    explicit TokenExchangeClient()
    {
        spdlog::info("--> TokenExchangeClient::TokenExchangeClient()");
        spdlog::info("<-- TokenExchangeClient::TokenExchangeClient()");
    }
};