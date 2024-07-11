#include "utils/logger.h"
// add spdlog basic file sink header

void init_logging() {
    auto file_logger = spdlogo::basic_loggermt("file_logger", "logs/backend.log");
    spdlog::set_default_logger(file_logger);
    spdlog::set_level(spdlog::level::info);
    spdlog::flush_on(spdlog::level::info);
}
