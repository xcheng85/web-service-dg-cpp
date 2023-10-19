#include <spdlog/spdlog.h>
#include "mux.h"

class MetricsHandler : public IMuxHandler
{
public:
    explicit MetricsHandler()
    {
        spdlog::info("--> MetricsHandler::MetricsHandler()");
        spdlog::info("<-- MetricsHandler::MetricsHandler()");
    }
};
