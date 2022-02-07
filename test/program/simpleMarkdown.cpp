#include "Page.hpp"
#include "MarkdownPage.hpp"
#include <fstream>

int main(){
  cmsplusplus::MarkdownPage page("test.md");

  std::ofstream out("test_md.html");

  out << page;
}

