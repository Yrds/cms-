#include "Page.hpp"
#include "HtmlElement.hpp"
#include <fstream>

int main(){
  using cmsplusplus::Page;
  using cmsplusplus::Element;
  using cmsplusplus::HtmlElement;

  Page page;

  page.title("Teste");

  page.insertElement(std::make_shared<HtmlElement>("ul"));
  page.insertElement(std::make_shared<HtmlElement>("h1", "hello world"));

  std::ofstream out("page.html");

  out << page;
}

