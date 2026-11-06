#include "pool_item.hh"

void PoolItem::PoolItem(std::string name, bool active) {
    mName = name;
    mActive = active;
}

void PoolItem::update() {
    //Do not change or delete this line
    Entity::updateBase();            
}

void PoolItem::draw() {
    //Do not change or delete this line
    Entity::drawBase();
}

// Other methods must be here
