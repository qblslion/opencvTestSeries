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
    ���ܣ���һ���߲���ýӿڣ��ú�����HighGUI���ṩ����������Ļ�ϴ���һ�����ڣ�������ʾ��ͼ������ڸô�����
	�ڶ������������˴��ڵ����ԣ�Ĭ��ֵΪ0��Ҳ���Ա����ó�CV_WINDOW_AUTOSIZE��
        ��Ϊ0�����ڵĴ�С������ͼ��Ĵ�С���ı䣬ͼ��ֻ���ڴ����и��ݴ��ڵĶ��С������������š�
        ��ΪCV_WINDOW_AUTOSIZE�����ڻ����ͼ���ʵ�ʴ�С�Զ��������������������ͼ��


    cvShowImage("Example1", img);
    ���ܣ�ͨ�����õ�һ������ȷ�����ĸ��Ѵ��ڵĴ�������ʾͼ��
	ֻҪ��һ����ĳ��ͼ���ļ����Ӧ��IplImage* ���͵�ָ�룬�Ϳ������Ѵ����õĴ���(ʹ��cvNamedWindow()��������)��
        ʹ��cvShowImage()������ʾ��ͼ��
         �ú���������ʱ���ô��ڽ������»��ƣ�����ͼ��Ҳ����ʾ�ڴ����С�
        ����ô����ڴ���ʱ��ָ��CV_WINDOW_AUTOSIZE��־��ΪcvNamedWindow()�����ĵڶ����������ô��ڽ�����ͼ���С
        �Զ�����Ϊ��ͼ��һ��


    cvWaitKey(0);
    ���ܣ�ʹ������ͣ���ȴ��û�����һ������������
    ע�⡪��
          ������ú�����������Ϊһ���������������ͣһ��ʱ�䡣ʱ�䳤Ϊ������ֵ�����뵥λ��Ȼ�����ִ�г���
          ��ʹ �û�û�����κμ���
          �����ò���Ϊ0����������һֱ�ȴ��û�������������
*/

     /*����ҪŪ����һ�����⣬ "hello world" ����ַ� ���� �ķ���ֵ��ʲô��
     һ���ַ��������ķ���ֵ��char*, ��֮��Ҳ������char*ȥ��ȡ�ַ�����
      ����char **argv �ͺ�����ˣ�������һ��ָ���ַ�����ָ�롣

    cvLoadImage( filename, -1 ); Ĭ�϶�ȡͼ���ԭͨ����
����cvLoadImage( filename, 0 ); ǿ��ת����ȡͼ��Ϊ�Ҷ�ͼ
����cvLoadImage( filename, 1 ); ��ȡ��ɫͼ                     */
