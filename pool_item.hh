#pragma once
#include <string>
#include "entity.hh"

class PoolItem : public Entity
{        
    public:
        // Other methods or properties must be here
        PoolItem(std::string name, bool active);

        void update() override; // Provided method, do not change
    
        void draw() override; // Provided method, do not change

    private:
    std::string mName;
    bool mActive;
};
