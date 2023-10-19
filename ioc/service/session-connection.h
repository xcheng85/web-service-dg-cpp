#include <spdlog/spdlog.h>
#include "service.h"

class SessionConnectionService : public IService
{
public:
    explicit SessionConnectionService()
    {
        spdlog::info("--> SessionConnectionService::SessionConnectionService()");
        spdlog::info("<-- SessionConnectionService::SessionConnectionService()");
    }

    void resetSessionConnections()
    {
    }

    void isQuotaExceeds()
    {
    }

    void assignSessionConnectionToUser()
    {
    }

    void getConnectedWidgetIds()
    {
    }

    void disconnect()
    {
    }
};