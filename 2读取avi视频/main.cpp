//读取avi视频文件
//key word:Codec.编译码器。指的是数字通信中具有编码、译码功能的器件。
#include "highgui.h"
int main(){
//int main(int argc,char** argv){
   // if(argc!=2)
     //   return -1;

    cvNamedWindow("Example2",CV_WINDOW_AUTOSIZE);//创建一个命名窗口

    //CvCapture* capture = cvCreateFileCapture( argv[1] );
    CvCapture* capture = cvCreateFileCapture( "D:\\practice\\opencv2\\bin\\Debug\\cssy.avi" );//通过参数设置确定要读入的AVI文件，返回一个指向
                                                        //CvCapture结构的指针。这个结构包括了所有关于
                                                        //要读入AVI文件的信息，包含状态信息
    IplImage* frame;//在调用了cvCreateFileCapture这个函数后，返回指针所指向的CvCapture结构被初始化到对应AVI文件的开头
    while(1){
        //一旦进入while循环，便开始读入AVI文件。cvQueryFrame的参数是CvCapture结构的指针。用来将下一帧视频文件
            //载入内存（实际是填充或更新CvCapture结构中）。返回一个对应当前帧的指针
        frame = cvQueryFrame(capture);
        if(!frame) break;
        cvShowImage("Example2",frame);
        char c = cvWaitKey(33);
        if( c == 27) break;
    }
    cvReleaseCapture(&capture);
    cvDestroyWindow("Example2");
    //return 0;
}

/*
    1、 cvloadImage和cvQueryFrame
    cvloadImage:为图片分配内存空间
    cvQueryFrame:使用已经在cvCapture结构中分配好的内存。
     所以，就没必要通过 cvReleaseImage()对这个返回的图像指针进行释放。
     当cvCapture结构被释放后，每一帧图像对应的内存空间立即就会被释放

    2、c = cvWaitKey(10)
        if( c == 27) break;
    当前帧被显示后，会等待10ms.如果期间用户促发了一个按键，c 会被设置成这个按键的ASCII码
    否则,c会被设置成-1.如果用户触发了ESC键，相当于ASCII27，循环会被退出，读入视频终止。否则10ms以后继续
    执行循环
*/
