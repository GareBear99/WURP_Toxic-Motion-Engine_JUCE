#include "wurp/FormantFilter.h"
namespace wurp {
float FormantFilter::process(float input, float mouth, float throat, float morph) {
    const float gain = 0.5f + 0.2f * mouth + 0.15f * throat + 0.15f * morph;
    return input * gain;
}
}
