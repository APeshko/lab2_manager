#include "library.hpp"

namespace template_library {

    // Если событие с таким временем уже существует, проигнорировать
        if (events.find(time) == events.end()) {
            events[time] = event;
            time_queue.push(time);
        } else {
            // Если событие существует, перезаписываем (как указано в тестах)
            events[time] = event;
        }
    }
std::string EventScheduler::process_next() {
        if (time_queue.empty()) {
            return ""; // Нет событий
        }

        // Получить ближайшее время события из очереди
        int next_time = time_queue.top();
        time_queue.pop();

        // Получить событие по времени
        std::string event = events[next_time];
        events.erase(next_time); // Удалить событие после обработки
        return event;
    }
}
