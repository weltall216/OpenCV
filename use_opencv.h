#pragma once

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
//#include "opencv2/core/core.hpp"
//#include "opencv2/core/core_c.h"
//#include "opencv2/highgui/highgui_c.h"
//#include "opencv2/imgproc/imgproc_c.h"
//#include "opencv2/video/video.hpp"
//#include "opencv2/nonfree/nonfree.hpp"
//#include "opencv2/videostab/videostab.hpp"
//#include "opencv2/features2d/features2d.hpp"
//#include "opencv2/objdetect/objdetect.hpp"
//#include "opencv2/flann/miniflann.hpp"
//#include "opencv2/photo/photo.hpp"
//#include "opencv2/calib3d/calib3d.hpp"
//#include "opencv2/ml/ml.hpp"
//#include "opencv2/contrib/contrib.hpp"
//#include "opencv2/ts/ts.hpp"
//#include "opencv2/stitching/stitcher.hpp"
//#include "opencv2/legacy/legacy.hpp"

#ifdef _DEBUG
        #pragma comment(lib,"opencv_core2413d.lib")
        #pragma comment(lib,"opencv_highgui2413d.lib")
        #pragma comment(lib,"opencv_imgproc2413d.lib")
//      #pragma comment(lib,"opencv_video2413d.lib")
//      #pragma comment(lib,"opencv_nonfree2413d.lib")
//      #pragma comment(lib,"opencv_videostab2413d.lib")
//      #pragma comment(lib,"opencv_features2d2413d.lib")
//      #pragma comment(lib,"opencv_objdetect2413d.lib")
//      #pragma comment(lib,"opencv_flann2413d.lib")
//      #pragma comment(lib,"opencv_photo2413d.lib")
//      #pragma comment(lib,"opencv_calib3d2413d.lib")
//      #pragma comment(lib,"opencv_ml2413d.lib")
//      #pragma comment(lib,"opencv_contrib2413d.lib")
//      #pragma comment(lib,"opencv_ts2413d.lib")
//      #pragma comment(lib,"opencv_stitching2413d.lib")
//      #pragma comment(lib,"opencv_legacy2413d.lib")
#else
        #pragma comment(lib,"opencv_core2413.lib")
        #pragma comment(lib,"opencv_highgui2413.lib")
        #pragma comment(lib,"opencv_imgproc2413.lib")
//      #pragma comment(lib,"opencv_video2413.lib")
//      #pragma comment(lib,"opencv_nonfree2413.lib")
//      #pragma comment(lib,"opencv_videostab2413.lib")
//      #pragma comment(lib,"opencv_features2d2413.lib")
//      #pragma comment(lib,"opencv_objdetect2413.lib")
//      #pragma comment(lib,"opencv_flann2413.lib")
//      #pragma comment(lib,"opencv_photo2413.lib")
//      #pragma comment(lib,"opencv_calib3d2413.lib")
//      #pragma comment(lib,"opencv_ml2413.lib")
//      #pragma comment(lib,"opencv_contrib2413.lib")
//      #pragma comment(lib,"opencv_ts2413.lib")
//      #pragma comment(lib,"opencv_stitching2413.lib")
//      #pragma comment(lib,"opencv_legacy2413.lib")
#endif