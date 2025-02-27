#ifndef CANTEENQUEUE_H
#define CANTEENQUEUE_H
#include <string>
#include "UniversityMember.h"

class CanteenQueue {
private: std::vector<UniversityMember*> queue;
public:
    CanteenQueue() {}
    void joinCanteenLine(UniversityMember* u) {
        queue.push_back(u); std::cout << u->getName() << " joined the queue.\n";
    }
    void serveNextMember(){
        UniversityMember* srvd = queue.front();
        std::cout << srvd->getName() << " was served and left the queue.\n";
        queue.erase(queue.begin());
    }
    void showCanteenQueue(){
        std::cout << "Current Queue: ";
        for(auto i : queue){ std::cout << i->getName() << " -> "; }
        std::cout << "END\n";
    }
    bool isQueueEmpty(){ return queue.empty();}
};

#endif