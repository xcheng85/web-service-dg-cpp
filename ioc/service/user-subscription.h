#include <spdlog/spdlog.h>
#include "service.h"

class UserSubscriptionService : public IService
{
public:
    explicit UserSubscriptionService()
    {
        spdlog::info("--> UserSubscriptionService::UserSubscriptionService()");
        spdlog::info("<-- UserSubscriptionService::UserSubscriptionService()");
    }
};
