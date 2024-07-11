#include "../include/utils/logger.h"

int main() {

    init_logging();


    // example log message
    spdlog::info("Server started");

    return 0;
}

