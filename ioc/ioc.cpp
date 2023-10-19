#include <memory>
#include <vector>
#include <string>
#include <cassert>
#include <format>
#include <iostream>
#include <boost/di.hpp>
#include <spdlog/spdlog.h>

#include "service/user-subscription.h"
#include "service/session-request.h"
#include "service/session-entity.h"
#include "service/session-connection.h"
#include "service/metrics-instrument.h"
#include "middleware/check-session-config.h"
#include "lock/redis.h"
#include "mux/session-mux.h"
#include "config/identifier.h"

namespace di = boost::di;
using namespace std;


int main()
{
    const auto injector = di::make_injector(
        di::bind<class IService>().named(USER_SUBSCRIPTION_SERVICE).to<UserSubscriptionService>(),
        di::bind<class IDistributedLockPool>().to<RedisLockPool>(),
        di::bind<class IService>().named(SESSION_REQUEST_SERVICE).to<SessionRequestService>(),
        di::bind<class IService>().named(SESSION_ENTITY_SERVICE).to<SessionEntityService>(),
        di::bind<class IService>().named(SESSION_CONNECTION_SERVICE).to<SessionConnectionService>(),
        di::bind<class IService>().named(METRICS_INSTRUMENTATION_SERVICE).to<MetricsInstrumentationService>(),
        di::bind<class IMiddleware>().named(CHECK_SESSION_CONFIG_MIDDLEWARE).to<CheckSessionConfigMiddleware>()
        );
    auto sessionMuxHandler = injector.create<SessionHandler>();
}
