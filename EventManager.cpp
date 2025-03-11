#include "EventManager.h"

void EventManager::addEvent(const std::string& name, int time) {
    Event event = {name, time};
    eventQueue.push(event);
    eventsByTime[time].push_back(event);
}

Event EventManager::getNextEvent() {
    if (!eventQueue.empty()) {
        Event nextEvent = eventQueue.top();
        eventQueue.pop();
        return nextEvent;
    }
    throw std::runtime_error("No events available");
}

bool EventManager::hasNextEvent() const {
    return !eventQueue.empty();
}
