#include "wurp/MotionEngine.h"
#include <cmath>
namespace wurp {
float MotionEngine::lfo(float phase) const {
    return std::sin(phase);
}
float MotionEngine::drift(float seed, float amount) const {
    return std::sin(seed * 12.3456f) * amount;
}
}
