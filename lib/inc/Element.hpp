#ifndef ELEMENT_HPP_INCLUDED
#define ELEMENT_HPP_INCLUDED

#include <string>
#include <vector>
#include <memory>
#include <ostream>

namespace cmsplusplus {
  class Element {
    protected:
      std::vector<std::shared_ptr<Element>> elements;
    public:
      virtual ~Element() = default;
      void insertElement(std::shared_ptr<Element> element);
      virtual std::string outputToString() const = 0;
      friend std::ostream& operator<<(std::ostream& os, Element const& el);
  };
}

#endif
