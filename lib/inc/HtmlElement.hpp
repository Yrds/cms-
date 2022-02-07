#include <string>
#include <vector>
#include <memory>
#include "Element.hpp"

namespace cmsplusplus {
  class HtmlElement: public Element {
    private:
      bool _container;
      std::string _tag;
      std::string _innerText;
    public:
      HtmlElement(std::string element, std::string innerText = "", bool container = true);
      virtual ~HtmlElement() = default;
      virtual std::string outputToString() const;
  };
  
}
