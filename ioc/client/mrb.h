#pragma once

#include <spdlog/spdlog.h>
#include "client.h"

class MRBClient : public IWebClient
{
public:
    explicit MRBClient()
    {
        spdlog::info("--> MRBClient::MRBClient()");
        spdlog::info("<-- MRBClient::MRBClient()");
    }
};
