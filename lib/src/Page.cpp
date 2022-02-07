#include "Page.hpp"

namespace cmsplusplus {
  void Page::title(std::string title) {
    _title = title;
  };

  std::string Page::title() {
    return _title;
  }

  std::string Page::outputToString() const {
    return R"(
<!doctype html>
<html lang="en">
<head>
<title>)" + _title + R"(</title>
<meta charset="utf-8">
</head>
<body>
  )" + preContent + 

([&]() {
 std::string elementString = "";

 for(auto const& element: elements) {
 elementString += element->outputToString() + "\n"; 
 }

 return elementString;
 })()

+ afterContent + R"(
</body>
</html>
    )";
  }
}
