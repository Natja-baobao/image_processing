#include <iostream>
#include <vector>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/features2d/features2d.hpp"

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
    namedWindow("filter1", CV_WINDOW_AUTOSIZE);
    
    //load in the image
    src = imread(argv[1], 1);
    
    return 0;
}
