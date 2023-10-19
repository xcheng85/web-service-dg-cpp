#include <spdlog/spdlog.h>
#include "service.h"

class BillingService : public IService
{
public:
    explicit BillingService()
    {
        spdlog::info("--> BillingService::BillingService()");
        spdlog::info("<-- BillingService::BillingService()");
    }

    void ChargeSession()
    {
    }
};
