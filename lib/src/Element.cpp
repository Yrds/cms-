#include "Element.hpp"

namespace cmsplusplus {
  void Element::insertElement(Element* element) {
    elements.push_back(std::unique_ptr<Element>(element));
  }

  std::ostream& operator<<(std::ostream& os, Element const& el) {

    os << el.outputToString();

    return os;
  }

}
