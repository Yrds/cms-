#include <string>
#include <vector>
#include <memory>
#include "Element.hpp"

namespace cmsplusplus {
  class HtmlElement: public Element {
    private:
      bool container;
      std::string tag;
    public:
      HtmlElement(std::string element, bool container = false);
      virtual ~HtmlElement();
      std::string outputToString();
  };
  
}
