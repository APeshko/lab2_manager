#pragma once

#include <string>
#include <queue>
#include <map>

namespace template_library {

    class EventScheduler {
        std::map<int, std::string> events; // Словарь для хранения событий
        std::priority_queue<int, std::vector<int>, std::greater<>> time_queue; // Очередь для обработки времени событий

    public:
        void add_event(int time, const std::string& event);
        std::string process_next();
    };
}
