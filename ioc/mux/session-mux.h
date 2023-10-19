#include <spdlog/spdlog.h>
#include "mux.h"
#include "../config/identifier.h"

class SessionHandler : public IMuxHandler
{
public:
    BOOST_DI_INJECT(SessionHandler,
                    (named = USER_SUBSCRIPTION_SERVICE) std::shared_ptr<IService> usersubs,
                    (named = BILLING_SERVICE) std::shared_ptr<IService> billing,
                    (named = SESSION_REQUEST_SERVICE) std::shared_ptr<IService> sessionreq,
                    (named = SESSION_ENTITY_SERVICE) std::shared_ptr<IService> sessionentity,
                    (named = SESSION_CONNECTION_SERVICE) std::shared_ptr<IService> sessionconnection,
                    (named = METRICS_INSTRUMENTATION_SERVICE) std::shared_ptr<IService> metrics,
                    std::shared_ptr<IDistributedLockPool> lockpool,
                    (named = CHECK_SESSION_CONFIG_MIDDLEWARE) std::shared_ptr<CheckSessionConfigMiddleware> checksession)
    {
        spdlog::info("--> SessionHandler::SessionHandler()");
        assert(dynamic_cast<UserSubscriptionService *>(usersubs.get()));
        spdlog::info("<-- SessionHandler::SessionHandler()");
    }

    void RequestSession()
    {
    }

    void ReleaseSession()
    {
    }

    void TrackSessionActivity()
    {
    }

    void TrackRendererActivity()
    {
    }

    void AddMetricDataPoint()
    {
    }
};
