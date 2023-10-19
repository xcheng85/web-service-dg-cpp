#include <spdlog/spdlog.h>
#include "service.h"

class SessionEntityService : public IService
{
public:
    explicit SessionEntityService()
    {
        spdlog::info("--> SessionEntityService::SessionEntityService()");
        spdlog::info("<-- SessionEntityService::SessionEntityService()");
    }

    void getAvailableSession()
    {
    }

    void releaseSession()
    {
    }

    void discardSession()
    {
    }

    void isSessionActive()
    {
    }

    void isSessionHealthy()
    {
    }

    void isSessionReusable()
    {
    }
};