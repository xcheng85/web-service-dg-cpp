#pragma once

#include <spdlog/spdlog.h>
#include <boost/di.hpp>
#include "service.h"
#include "../client/mrb.h"
#include "../config/identifier.h"

class BillingService : public IService
{
public:
    BOOST_DI_INJECT(BillingService,
                    (named = MRB_CLIENT) std::shared_ptr<IWebClient> mrb)
    {
        spdlog::info("--> BillingService::BillingService()");
        assert(dynamic_cast<MRBClient *>(mrb.get()));
        spdlog::info("<-- BillingService::BillingService()");
    }

    void ChargeSession()
    {
    }
};
