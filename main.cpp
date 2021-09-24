#include "spdlog/sinks/daily_file_sink.h"
#include "spdlog/spdlog.h"

int main(void)
{
    auto logger =
        spdlog::daily_logger_mt("daily_logger", "/home/test/logs/daily.txt", 0, 0);

    logger->info("spdlog version {}", SPDLOG_VERSION);

    return 0;
}
