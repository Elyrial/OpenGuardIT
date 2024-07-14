#include <iostream>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"

int main() {
    try {
        // Creating file logger
        auto logger = spdlog::basic_logger_mt("basic_logger", "../../logs/backend.log");

        logger->set_level(spdlog::level::debug);


        // Log tests
        logger->info("Welcome to spdlog");
        logger->warn("This is a warning message");
        logger->error("This is an error message");

        logger->flush();

        spdlog::shutdown();
    }
    catch (const spdlog::spdlog_ex &ex) {
        std::cout << "Log initialization failed: " << ex.what() << "\n";
    }
    return 0;
}

