#include "HtmlElement.hpp"

namespace cmsplusplus {
  HtmlElement::HtmlElement(std::string tag, std::string innerText, bool container) {
    _container = container;
    _tag = tag;
    _innerText = innerText;
  }

  std::string HtmlElement::outputToString() const {
    std::string output;

    output += "<" + _tag + ">";

    output += _innerText;

    for(auto const &element: elements) {
      output += element->outputToString() + "\n";
    }

    if(_container || elements.size() || _innerText.length()) {
      output += "</" + _tag + ">";
    }

    return output;
  }
}
