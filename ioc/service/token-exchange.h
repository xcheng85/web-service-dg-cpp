#include <spdlog/spdlog.h>
#include "service.h"

class TokenExchangeService : public IService
{
public:
    explicit TokenExchangeService()
    {
        spdlog::info("--> TokenExchangeService::TokenExchangeService()");
        spdlog::info("<-- TokenExchangeService::TokenExchangeService()");
    }
};
