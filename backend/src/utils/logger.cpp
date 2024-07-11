#include "../../include/utils/logger.h"
#include "../../third_party/spdlog/sinks/basic_file_sink.h"

void init_logging() {
    auto file_logger = spdlog::basic_logger_mt("file_logger", "logs/backend.log");
    spdlog::set_default_logger(file_logger);
    spdlog::set_level(spdlog::level::info);
    spdlog::flush_on(spdlog::level::info);
}
