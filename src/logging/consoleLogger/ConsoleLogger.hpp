#pragma once

#include "../logger/Logger.hpp"
#include <iostream>
#include <string_view>

class ConsoleLogger : public Logger
{
        public:
                void log (std::string_view message) override
                {
                        std::cout << message <<'\n';
                }
};