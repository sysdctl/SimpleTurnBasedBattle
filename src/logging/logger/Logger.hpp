#pragma once

#include <string_view>
#include <sstream>

class Logger
{
        public:
                virtual ~Logger () = default;

                virtual void log (std::string_view message) = 0;

                template <typename... Args>
                void logf (Args&&... messages)
                {
                        std::ostringstream stream;
                        (stream << ... << messages);
                        log(stream.str());
                }
};