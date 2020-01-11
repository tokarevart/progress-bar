// Copyright © 2020 Artem Tokarev. All rights reserved.
// Licensed under the MIT License.

#include <cstddef>
#include <iostream>
#include <chrono>
#include <thread>
#include "progress-bar.h"

int main() {
    const std::size_t max = 1000;
    const std::size_t bar_width = 70;
    const char complete_char = '=';
    const char incomplete_char = ' ';

    progress_bar bar("Progress", max, bar_width, complete_char, incomplete_char);
    for (std::size_t i = 0; i < max; ++i) {
        ++bar;
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(1ms);
    }

    return 0;
}
