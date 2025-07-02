#pragma once
#include <cstdint>
#include <unordered_map>
#include <vector>
#include <cmath>

struct Vector3 {
    float x, y, z;

    Vector3 operator+(const Vector3& o) const { return {x + o.x, y + o.y, z + o.z}; }
    Vector3 operator-(const Vector3& o) const { return {x - o.x, y - o.y, z - o.z}; } 
    Vector3 operator*(float s) const { return {x * s, y * s, z * s}; }
    float Length() const { return std::sqrt(x*x + y*y + z*z); }
};

struct Transform {
    Vector3 Position;
    Vector3 Velocity;
};

using EntityID = uint32_t;
