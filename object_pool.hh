#pragma once
#include "pool_item.hh"
#include <stdio>

class object_pool
{
    public:
        void add(PoolItem& p);
        int count();
        int countActive();
        PoolItem* findByName(std::string name);
        PoolItem* findByRef(PoolItem& p);
        void activate();
        void deactivate();
        void update();
        void updateActive();
        void draw();
        void drawActive();
        void remove(std::string name);
        void removeInactive();

    private:
        std::vector<PoolItem> mObjectContainer;
};