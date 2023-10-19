#pragma once

#include <spdlog/spdlog.h>
#include "mux.h"

class K8sProbe : public IMuxHandler
{
public:
    explicit K8sProbe()
    {
        spdlog::info("--> K8sProbe::K8sProbe()");
        spdlog::info("<-- K8sProbe::K8sProbe()");
    }

    ~K8sProbe()
    {
    }
};