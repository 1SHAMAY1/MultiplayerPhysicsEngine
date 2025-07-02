#include "PhysicsEngine.h"

void PhysicsEngine::AddEntity(EntityID id, const Transform& t) {
    entities[id] = t;
}

void PhysicsEngine::Update(float dt) {
    for (auto& entity : entities) {
        EntityID id = entity.first;
        Transform& t = entity.second;
        t.Position = t.Position + t.Velocity * dt;
    }
}

const std::unordered_map<EntityID, Transform>& PhysicsEngine::GetState() const {
    return entities;
}
