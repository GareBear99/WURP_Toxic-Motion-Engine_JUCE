#pragma once
namespace wurp {
class FormantFilter {
public:
    float process(float input, float mouth, float throat, float morph);
};
}
