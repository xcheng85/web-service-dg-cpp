#include <spdlog/spdlog.h>
#include <boost/di.hpp>
#include "service.h"
#include "../client/custom-metrics.h"
#include "../config/identifier.h"

class MetricsInstrumentationService : public IService
{
public:
    BOOST_DI_INJECT(MetricsInstrumentationService,
                    (named = CUSTOM_METRICS_CLIENT) std::shared_ptr<IWebClient> custom)
    {
        spdlog::info("--> MetricsInstrumentationService::MetricsInstrumentationService()");
        assert(dynamic_cast<CustomMetricsClient *>(custom.get()));
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
