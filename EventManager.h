#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include <queue>
#include <map>
#include <string>
#include <chrono>

struct Event {
    std::string name;
    int time; // Время в секундах

    bool operator>(const Event& other) const {
        return time > other.time; // Для приоритетной очереди (меньшее значение времени - более высокий приоритет)
    }
};

class EventManager {
private:
    std::priority_queue<Event, std::vector<Event>, std::greater<Event>> eventQueue;
    std::map<int, std::vector<Event>> eventsByTime;

public:
    void addEvent(const std::string& name, int time);
    Event getNextEvent();
    bool hasNextEvent() const;
};

#endif // EVENTMANAGER_H
