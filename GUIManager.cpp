#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <sstream>
#include <ctime>
#include <vector>
#include <set>

#include "GUIManager.hpp"

GUIManager::GUIManager()
{
}

void GUIManager::init()
{
  cv::namedWindow("Detect textbook Init", 0);
}

void GUIManager::setImage(cv::Mat inImg)
{
  img=inImg;
}
//wtf are the wait key's doing in the show function
void GUIManager::show(bool isImg)
{
  cv::imshow("Detect textbook", img);
  if(isImg)
  {
    cv::waitKey(0);
  }
  else
  {
    cv::waitKey(10);
  }
}
