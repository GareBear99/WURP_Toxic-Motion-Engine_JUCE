#pragma once
namespace wurp {
class StereoDrift {
public:
    void process(float& left, float& right, float width, float wobble);
};
}
