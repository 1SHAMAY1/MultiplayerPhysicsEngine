#pragma once
#include "Common.h"

class PhysicsEngine {
public:
    void AddEntity(EntityID id, const Transform& transform);
    void Update(float dt);
    const std::unordered_map<EntityID, Transform>& GetState() const;

private:
    std::unordered_map<EntityID, Transform> entities;
};
