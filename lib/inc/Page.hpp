#ifndef PAGE_HPP_INCLUDED
#define PAGE_HPP_INCLUDED

#include "Element.hpp"

namespace cmsplusplus {
  class Page: public Element {
    private:
      std::string _title = "No title";
    public:
      virtual std::string outputToString() const;
      void title(std::string title);
      std::string preContent = "";
      std::string afterContent = "";
      std::string title();

  };
}

#endif
