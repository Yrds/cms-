#include "Page.hpp"
#include <fstream>

int main(){
  cmsplusplus::Page page;

  page.title("Teste");
  std::ofstream out("page.html");

  out << page;
}

