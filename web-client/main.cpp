#include <cpr/cpr.h>
#include <spdlog/spdlog.h>

int main()
{
    cpr::Response r = cpr::Get(cpr::Url{"https://github.com"},
                               cpr::Parameters{{"key", "value"}});

    spdlog::info("http response is {0}", r.text);
}