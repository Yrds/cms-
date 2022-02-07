#include <string>
#include "Page.hpp"
#include <string>
#include <map>

namespace cmsplusplus {
  class Site {
    std::map<std::string, Page*> pages; 
    int outputToFolder(std::string output);
  };
}
