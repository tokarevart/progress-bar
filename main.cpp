#include <iostream>
#include <chrono>
#include <thread>
#include "progress-bar.h"

int main() {
    const std::size_t max = 1000;

    progress_bar bar(max, 70);
    for (std::size_t i = 0; i < max; ++i) {
        ++bar;
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(1ms);
    }

    return 0;
}
