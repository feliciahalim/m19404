//#include <iostream>

//#include <iostream>
//#include <opencv/cv.h>
//#include <opencv/highgui.h>
//#include <sstream>
//#include <opencv2/core/core.hpp>        // Basic OpenCV structures (cv::Mat)
//#include <opencv2/imgproc/imgproc.hpp>        // Basic OpenCV structures (cv::Mat)
//#include <opencv2/highgui/highgui.hpp>  // Video write
//#include "FeatureDetector.hpp"
//#include "GoodFeatureToTrack.hpp"
//#include "timeMeasure.hpp"


//using namespace std;
//using namespace cv;



////#include <stdio.h>




////demo program main function
//int main(int argc,char *argv[])
//{


//    struct timeval start,end,result;
//    if(argc <5 )
//    {
//        cerr << "Usage : FEATURE_DETECTOR  directory filename V/I/C(for video/file/camera )  detector_id"   << endl;
//        cerr << "detector id is 0 for good feature to track,1 for harris corner detector,2 is for 3d harris corner detector,3 is for FastFeature,4  is for fast3d Detector" << endl;
//        return -1;
//    }
//    string a1=(argv[1]);
//    string a2=(argv[2]);
//    string a3=argv[3];
//    int did=atoi(argv[4]);
//    string source=a1+"/"+a2;
//    int vmode=-1;
//    VideoCapture inputVideo;
//    TimeMeasure time1;
//        Mat a,src,t;
//    if((strcmp(a3.c_str (),"V")==0)||(strcmp(a3.c_str (),"C")==0))
//    {
//        vmode=1;
//        if((strcmp(a3.c_str (),"V")==0))
//            inputVideo.open (source);
//        else
//            inputVideo.open (0);
//            if (!inputVideo.isOpened())
//            {
//                cout  << "Could not open the input video: " << source << endl;
//                return -1;
//            }
//            inputVideo >> src;
//    }
//    else if(strcmp(a3.c_str (),"I")==0)
//    {
//        src=imread(source);
//        vmode=0;
//    }

//    cv::namedWindow ("input");
//    cv::namedWindow ("output");
//    cerr << "Press key to start " << endl;
//    cv::waitKey (0);

//    a.create(240,320,CV_8UC(1));
//    t.create(240,320,CV_8UC(3));
//    resize(src,a, a.size(), 0, 0, INTER_NEAREST);

//    FeatureDetection::FeatureDetector *detector;
//    FeatureDetection::GoodFeatureToTrack tr1;
//    if(did==0)
//    {


//         detector=&tr1;
//    }
//    Size S = Size(320,240);

//int vindex=0;
//int k=0;
//gettimeofday(&start,NULL);
//int i=0;
//bool record=false;
//VideoWriter outputVideo;                                        // Open the output
//do//Show the image captured in the window and repeat
//{
//   Mat t1;
//   Mat x=cv::imread(source);

//   if(vmode==1)
//   inputVideo >> src;              // read
//   else
//   x.copyTo(src);


//   if (src.empty()) break;         // check if at end
//   resize(src,t, t.size(), 0, 0, INTER_AREA);
//   ///Rect roi=Rect(t.cols/2-50,t.rows/2-50,100,150);
//   Mat draw=t;
//   Mat tx=t;//(roi);

//   cvtColor(tx,t1,CV_BGR2GRAY);
//   t1.copyTo(a);


//   imshow("input",t);
//   vector <Point> corners2;
//   if(did==1||did==0)
//   {
//   if(did==0)
//   goodFeaturesToTrack(a, corners2,100, 0.01, 10, Mat(),3,0,0.04);
//   else if(did==1)
//   goodFeaturesToTrack(a, corners2,100, 0.01, 10, Mat(),3,1,0.04);


//   vector<Point2f> corners3=detector->run(a);

//   Mat t2,t3;
//   tx.copyTo(t2);
//   tx.copyTo(t3);
////        cerr << corners1.size() <<":" << corners2.size()<< endl;

//   for( int i =  0; i < corners2.size(); i++ )
//   {
//           circle(t2,corners2[i], 3, Scalar(255,255,0), -1, 8);
//   }
//   for( int i =  0; i < corners3.size(); i++ )
//   {
//           circle(t3,corners3[i], 3, Scalar(255,255,0), -1, 8);
//   }


//   imshow("OpenCV method",t2);
//   imshow("implemented method",t3);
//   }

//   i=i+1;
//   if(i%30==0 && i>0)
//   {
//       gettimeofday(&end,NULL);
//       long int diff=time1.timeval_subtract(&result,&end,&start);
//       double elapsed_secs = diff ;
//       cerr << "FPS is " << (double)30*1000000/elapsed_secs << endl;
//       gettimeofday(&start,NULL);
//       i=0;
//   }

//   //cerr << vmode << endl;
//   if(vmode==1)
//   k=cv::waitKey(1);
//   else
//   k=cv::waitKey(0);
//}while(k!='e');





//}

