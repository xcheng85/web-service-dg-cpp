#include <spdlog/spdlog.h>
#include "service.h"

class SessionRequestService : public IService
{
public:
    explicit SessionRequestService()
    {
        spdlog::info("--> SessionRequestService::SessionRequestService()");
        spdlog::info("<-- SessionRequestService::SessionRequestService()");
    }

    void createSessionRequest()
    {
    }

    void updateSessionRequestLastActiveTimeStamp()
    {
    }

    void getPositionInQueue()
    {
    }

    void deleteSessionRequest()
    {
    }
};
