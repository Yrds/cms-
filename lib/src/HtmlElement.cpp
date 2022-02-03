#include "HtmlElement.hpp"

namespace cmsplusplus {
  std::string HtmlElement::outputToString() {
    if(elements.size() > 0) {
    }

    return "<" + tag + ">";
  }
}
