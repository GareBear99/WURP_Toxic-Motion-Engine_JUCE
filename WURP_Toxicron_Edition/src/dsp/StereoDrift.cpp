#include "wurp/StereoDrift.h"
namespace wurp {
void StereoDrift::process(float& left, float& right, float width, float wobble) {
    const float mid = 0.5f * (left + right);
    const float side = 0.5f * (left - right) * (0.5f + width) + wobble * 0.01f;
    left = mid + side;
    right = mid - side;
}
}
