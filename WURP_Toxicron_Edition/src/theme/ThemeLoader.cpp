#include "wurp/ThemeLoader.h"
#include <filesystem>
namespace wurp {
bool ThemeLoader::loadFromFolder(const std::string& folderPath) {
    namespace fs = std::filesystem;
    return fs::exists(folderPath) && fs::is_directory(folderPath);
}
}
