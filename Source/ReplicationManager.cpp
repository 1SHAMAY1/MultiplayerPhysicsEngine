#include "ReplicationManager.h"

std::vector<EntityID> ReplicationManager::GetRelevantEntities(
    const Vector3& clientPos, float range,
    const std::unordered_map<EntityID, Transform>& worldState) {

    std::vector<EntityID> result;
    for (const auto& entity : worldState) {
        const EntityID& id = entity.first;
        const Transform& t = entity.second;
        if ((t.Position - clientPos).Length() < range)
            result.push_back(id);
    }
    return result;
}
