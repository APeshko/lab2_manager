#include <iostream>
#include "EventManager.h"

int main() {
    EventManager em;
    em.addEvent("Event 1", 5);
    em.addEvent("Event 2", 3);
    em.addEvent("Event 3", 10);

    std::cout << "Upcoming events: " << std::endl;
    while (em.hasNextEvent()) {
        Event nextEvent = em.getNextEvent();
        std::cout << "Event: " << nextEvent.name << ", Time: " << nextEvent.time << std::endl;
    }

    return 0;
}
