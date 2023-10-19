#include <memory>
#include <vector>
#include <string>
#include <cassert>
#include <format>
#include <iostream>
#include <boost/di.hpp>
#include <spdlog/spdlog.h>

namespace di = boost::di;
using namespace std;

class IConfig
{
public:
    virtual ~IConfig() = default;
};
class AppConfig : public IConfig
{
public:
    explicit AppConfig()
    {
        spdlog::info("--> AppConfig::AppConfig()");
        spdlog::info("<-- AppConfig::AppConfig()");
    }
};

// singleton
class IDataBaseConnection
{
public:
    virtual ~IDataBaseConnection() = default;
};

class RedisConnection : public IDataBaseConnection
{
public:
    explicit RedisConnection()
    {
        spdlog::info("--> RedisConnection::RedisConnection()");
        spdlog::info("<-- RedisConnection::RedisConnection()");
    }
};

// singleton
class IDistributedLockPool
{
public:
    virtual ~IDistributedLockPool() = default;
};

class RedisLock : public IDistributedLockPool
{
public:
    explicit RedisLock()
    {
        spdlog::info("--> RedisLock::RedisLock()");
        spdlog::info("<-- RedisLock::RedisLock()");
    }
};

// stateless, dynamic binding
// provisioning
// custom metrics collector
// mrb
// ccm
// tokenExchange
class IWebClient
{
public:
    virtual ~IWebClient() = default;
};

class ProvisioningClient : public IWebClient
{
public:
    explicit ProvisioningClient()
    {
        spdlog::info("--> ProvisioningClient::ProvisioningClient()");
        spdlog::info("<-- ProvisioningClient::ProvisioningClient()");
    }
};

class CustomMetricsClient : public IWebClient
{
public:
    explicit CustomMetricsClient()
    {
        spdlog::info("--> CustomMetricsClient::CustomMetricsClient()");
        spdlog::info("<-- CustomMetricsClient::CustomMetricsClient()");
    }
};

class TokenExchangeClient : public IWebClient
{
public:
    explicit TokenExchangeClient()
    {
        spdlog::info("--> TokenExchangeClient::TokenExchangeClient()");
        spdlog::info("<-- TokenExchangeClient::TokenExchangeClient()");
    }
};

class MRBClient : public IWebClient
{
public:
    explicit MRBClient()
    {
        spdlog::info("--> MRBClient::MRBClient()");
        spdlog::info("<-- MRBClient::MRBClient()");
    }
};

class CCMClient : public IWebClient
{
public:
    explicit CCMClient()
    {
        spdlog::info("--> CCMClient::CCMClient()");
        spdlog::info("<-- CCMClient::CCMClient()");
    }
};

// service: business logic
class IService
{
public:
    virtual ~IService() = default;
};

class UserSubscriptionService : public IService
{
public:
    explicit UserSubscriptionService()
    {
        spdlog::info("--> UserSubscriptionService::UserSubscriptionService()");
        spdlog::info("<-- UserSubscriptionService::UserSubscriptionService()");
    }
};

class BillingService : public IService
{
public:
    explicit BillingService()
    {
        spdlog::info("--> BillingService::BillingService()");
        spdlog::info("<-- BillingService::BillingService()");
    }
};

class MetricsInstrumentationService : public IService
{
public:
    explicit MetricsInstrumentationService()
    {
        spdlog::info("--> MetricsInstrumentationService::MetricsInstrumentationService()");
        spdlog::info("<-- MetricsInstrumentationService::MetricsInstrumentationService()");
    }
};

class TokenExchangeService : public IService
{
public:
    explicit TokenExchangeService()
    {
        spdlog::info("--> TokenExchangeService::TokenExchangeService()");
        spdlog::info("<-- TokenExchangeService::TokenExchangeService()");
    }
};

class AuthService : public IService
{
public:
    explicit AuthService()
    {
        spdlog::info("--> AuthService::AuthService()");
        spdlog::info("<-- AuthService::AuthService()");
    }

    void GetBearerToken()
    {
    }

    void GetUserId()
    {
    }
};

// // entity
// struct SubscriptionSet
// {
// };

// middleware
// 1. CheckSessionConfigMiddleware
// 2. MetricsInstrumentSelector Middleware
// 3. monitoring middleware
// 4. sauth middleare
class IMiddleware
{
public:
    virtual ~IMiddleware() = default;
};

class CheckSessionConfigMiddleware : public IMiddleware
{
public:
    explicit CheckSessionConfigMiddleware()
    {
        spdlog::info("--> CheckSessionConfigMiddleware::CheckSessionConfigMiddleware()");
        spdlog::info("<-- CheckSessionConfigMiddleware::CheckSessionConfigMiddleware()");
    }
};

class MetricsInstrumentSelectorMiddleware : public IMiddleware
{
public:
    explicit MetricsInstrumentSelectorMiddleware()
    {
        spdlog::info("--> MetricsInstrumentSelectorMiddleware::MetricsInstrumentSelectorMiddleware()");
        spdlog::info("<-- MetricsInstrumentSelectorMiddleware::MetricsInstrumentSelectorMiddleware()");
    }
};

class MonitoringMiddleware : public IMiddleware
{
public:
    explicit MonitoringMiddleware()
    {
        spdlog::info("--> MonitoringMiddleware::MonitoringMiddleware()");
        spdlog::info("<-- MonitoringMiddleware::MonitoringMiddleware()");
    }
};

class SAuthTokenMiddleware : public IMiddleware
{
public:
    explicit SAuthTokenMiddleware()
    {
        spdlog::info("--> SAuthTokenMiddleware::SAuthTokenMiddleware()");
        spdlog::info("<-- SAuthTokenMiddleware::SAuthTokenMiddleware()");
    }
};

// domain driven
// mux handler
// metrics
// session
// scene-object
// healthy check
class IMuxHandler
{
public:
    virtual ~IMuxHandler() = default;
};

class MetricsHandler : public IMuxHandler
{
public:
    explicit MetricsHandler()
    {
        spdlog::info("--> MetricsHandler::MetricsHandler()");
        spdlog::info("<-- MetricsHandler::MetricsHandler()");
    }
};

auto AUTH_SERVICE = [] {};
auto USER_SUBSCRIPTION_SERVICE = [] {};

class SessionHandler : public IMuxHandler
{
public:
    //  (named = my_name) std::unique_ptr<i1> up
    BOOST_DI_INJECT(SessionHandler,
                    (named = AUTH_SERVICE) std::shared_ptr<IService> auth,
                    (named = USER_SUBSCRIPTION_SERVICE) std::shared_ptr<IService> usersubs)
    {
        spdlog::info("--> SessionHandler::SessionHandler()");
        assert(dynamic_cast<AuthService *>(auth.get()));
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

int main()
{
    const auto injector = di::make_injector(
        di::bind<class IService>().named(AUTH_SERVICE).to<AuthService>(),
        di::bind<class IService>().named(USER_SUBSCRIPTION_SERVICE).to<UserSubscriptionService>());
    auto k8sProbeMuxHandler = injector.create<K8sProbe>();
    auto d = injector.create<SessionHandler>();
}
