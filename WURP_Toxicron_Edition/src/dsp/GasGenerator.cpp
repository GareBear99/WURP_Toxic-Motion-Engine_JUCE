#include "wurp/GasGenerator.h"
#include <cstdlib>
namespace wurp {
float GasGenerator::process(float input, float density, float pressure) {
    const float noise = (static_cast<float>(std::rand()) / RAND_MAX) * 2.0f - 1.0f;
    return input + noise * density * (0.25f + pressure);
}
}
