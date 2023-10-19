#pragma once

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