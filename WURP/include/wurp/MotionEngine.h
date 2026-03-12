#pragma once
namespace wurp {
class MotionEngine {
public:
    float lfo(float phase) const;
    float drift(float seed, float amount) const;
};
}
