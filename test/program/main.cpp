#include "test.hpp"

int main(){
  //Desired structure for a simple website
  //
  const site = new cmsplusplus::Site(true); //first parameter true for defaultPage //Maybe a struct herer

  Page defaultPage = site.getPage();

  Page[] postPages = cmsplusplus::getPagesFromMd("posts");

  defaultPage.body.insertIndexToHtml(postPages);

  return site.deploy("public");
}

