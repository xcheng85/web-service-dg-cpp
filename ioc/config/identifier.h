#pragma once

// unique identifier
// for business logic service
auto BILLING_SERVICE = [] {};
auto USER_SUBSCRIPTION_SERVICE = [] {};
auto SESSION_REQUEST_SERVICE = [] {};
auto SESSION_ENTITY_SERVICE = [] {};
auto SESSION_CONNECTION_SERVICE = [] {};
auto METRICS_INSTRUMENTATION_SERVICE = [] {};

// for non-global middleware
auto CHECK_SESSION_CONFIG_MIDDLEWARE = [] {};

// for client
auto CCM_CLIENT = [] {};
auto MRB_CLIENT = [] {};
auto CUSTOM_METRICS_CLIENT = [] {};
auto PROVISIONING_CLIENT = [] {};
auto TOKEN_EXCHANGE_CLIENT = [] {};

// for dlock
auto DISTRIBUTED_LOCK_POOL = [] {};