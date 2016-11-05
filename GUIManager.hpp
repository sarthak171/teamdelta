#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

#include<iostream>


class GUIManager
{
  public:
    GUIManager();
    void init();
    void setImage(cv::Mat img);
    void show(bool isImg);

private:
  cv::Mat img;
}
