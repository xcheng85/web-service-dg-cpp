#include <spdlog/spdlog.h>
#include "mux.h"
#include "../config/identifier.h"

class SessionHandler : public IMuxHandler
{
public:
    //  (named = my_name) std::unique_ptr<i1> up
    BOOST_DI_INJECT(SessionHandler,
                    (named = USER_SUBSCRIPTION_SERVICE) std::shared_ptr<IService> usersubs,
                    std::shared_ptr<IDistributedLockPool> lockpool,
                    (named = SESSION_REQUEST_SERVICE) std::shared_ptr<IService> sessionreq,
                    (named = SESSION_ENTITY_SERVICE) std::shared_ptr<IService> sessionentity,
                    (named = SESSION_CONNECTION_SERVICE) std::shared_ptr<IService> sessionconnection,
                    (named = METRICS_INSTRUMENTATION_SERVICE) std::shared_ptr<IService> metrics,
                    (named = CHECK_SESSION_CONFIG_MIDDLEWARE) std::shared_ptr<CheckSessionConfigMiddleware> checksession
    )
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
