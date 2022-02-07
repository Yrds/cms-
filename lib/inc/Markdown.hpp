#ifndef MARKDOWN_HPP_INCLUDED
#define MARKDOWN_HPP_INCLUDED

#include "Page.hpp"

namespace cmsplusplus {
  class MarkdownParser {
    //
    static std::unique_ptr<Page> pageFromMd(std::string filePath);
//for (const auto & entry : fs::directory_iterator(path))
 //       std::cout << entry.path() << std::endl;
 //      // use fs::directory_iterator(path) to find for .md files
    //static std::vector<std::unique_ptr<Page>> pagesFromFolder(std::string folderPath);
  };

}

#endif
