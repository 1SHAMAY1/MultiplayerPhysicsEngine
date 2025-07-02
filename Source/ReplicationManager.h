#pragma once
#include "Common.h"
#include <vector>

class ReplicationManager {
public:
    std::vector<EntityID> GetRelevantEntities(const Vector3& clientPos, float range,
        const std::unordered_map<EntityID, Transform>& worldState);
};
