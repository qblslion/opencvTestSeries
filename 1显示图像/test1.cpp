#include "cv.h"
#include "highgui.h"
//int main(int argc,char **argv){
int main(){
    /* if(argc!=2)
        return -1;*/

     //IplImage* img = cvLoadImage(argv[1]);
     IplImage* img = cvLoadImage("piano.jpg", 1);
     cvNamedWindow( "Example1", CV_WINDOW_AUTOSIZE );
     cvShowImage("Example1", img);
     cvWaitKey(0);
     cvReleaseImage( &img );
     cvDestroyWindow( "Example1" );
    return 0;
}

/* 
    cvNamedWindow( "Example1", CV_WINDOW_AUTOSIZE );
    功能：是一个高层调用接口，该函数由HighGUI库提供。用于在屏幕上创建一个窗口，将被显示的图像包含于该窗口中
	第二个参数定义了窗口的属性，默认值为0，也可以被设置成CV_WINDOW_AUTOSIZE。
        设为0，窗口的大小不会音图像的大小而改变，图像只能在窗口中根据窗口的额大小进行拉伸或缩放。
        设为CV_WINDOW_AUTOSIZE，窗口会根据图像的实际大小自动进行拉伸或缩放以容纳图像


    cvShowImage("Example1", img);
    功能：通过设置第一个参数确定在哪个已存在的窗口中显示图像。
	只要有一个与某个图像文件相对应的IplImage* 类型的指针，就可以在已创建好的窗口(使用cvNamedWindow()函数创建)中
        使用cvShowImage()函数显示该图像
         该函数被调用时，该窗口将被重新绘制，并且图像也会显示在窗口中。
        如果该窗口在创建时被指定CV_WINDOW_AUTOSIZE标志作为cvNamedWindow()函数的第二个参数，该窗口将根据图像大小
        自动调整为与图像一致


    cvWaitKey(0);
    功能：使程序暂停，等待用户触发一个按键操作。
    注意——
          如果将该函数参数设置为一个正数，则程序将暂停一段时间。时间长为该整数值个毫秒单位，然后继续执行程序
          即使 用户没按下任何键。
          当设置参数为0或负数，程序将一直等待用户触发按键操作
*/

     /*首先要弄明白一个问题， "hello world" 这个字符 常量 的返回值是什么？
     一个字符串常量的返回值是char*, 反之你也可以用char*去存取字符串。
      现在char **argv 就好理解了，它就是一个指向字符串的指针。

    cvLoadImage( filename, -1 ); 默认读取图像的原通道数
　　cvLoadImage( filename, 0 ); 强制转化读取图像为灰度图
　　cvLoadImage( filename, 1 ); 读取彩色图                     */
