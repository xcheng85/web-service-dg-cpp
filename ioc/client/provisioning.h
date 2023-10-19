#pragma once

#include <spdlog/spdlog.h>
#include "client.h"

class ProvisioningClient : public IWebClient
{
public:
    explicit ProvisioningClient()
    {
        spdlog::info("--> ProvisioningClient::ProvisioningClient()");
        spdlog::info("<-- ProvisioningClient::ProvisioningClient()");
    }
};
