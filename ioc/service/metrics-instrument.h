#include <spdlog/spdlog.h>
#include "service.h"

class MetricsInstrumentationService : public IService
{
public:
    explicit MetricsInstrumentationService()
    {
        spdlog::info("--> MetricsInstrumentationService::MetricsInstrumentationService()");
        spdlog::info("<-- MetricsInstrumentationService::MetricsInstrumentationService()");
    }

    void addSessionIdleHistogramMetrics()
    {
    }

    void setSessionAssignedMetrics()
    {
    }

    void recordRequestSessionDuration()
    {
    }

    void recordRequestSessionLatency()
    {
    }
};
