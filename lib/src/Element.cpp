#include "Element.hpp"

namespace cmsplusplus {
  void Element::insertElement(std::shared_ptr<Element> element) {
    elements.push_back(element);
  }

  std::ostream& operator<<(std::ostream& os, Element const& el) {

    os << el.outputToString();

    return os;
  }

}
