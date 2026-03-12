#pragma once
#include <string>
namespace wurp {
class ThemeLoader {
public:
    bool loadFromFolder(const std::string& folderPath);
};
}
