//��ȡavi��Ƶ�ļ�
//key word:Codec.����������ָ��������ͨ���о��б��롢���빦�ܵ�������
#include "highgui.h"
int main(){
//int main(int argc,char** argv){
   // if(argc!=2)
     //   return -1;

    cvNamedWindow("Example2",CV_WINDOW_AUTOSIZE);//����һ����������

    //CvCapture* capture = cvCreateFileCapture( argv[1] );
    CvCapture* capture = cvCreateFileCapture( "D:\\practice\\opencv2\\bin\\Debug\\cssy.avi" );//ͨ����������ȷ��Ҫ�����AVI�ļ�������һ��ָ��
                                                        //CvCapture�ṹ��ָ�롣����ṹ���������й���
                                                        //Ҫ����AVI�ļ�����Ϣ������״̬��Ϣ
    IplImage* frame;//�ڵ�����cvCreateFileCapture��������󣬷���ָ����ָ���CvCapture�ṹ����ʼ������ӦAVI�ļ��Ŀ�ͷ
    while(1){
        //һ������whileѭ�����㿪ʼ����AVI�ļ���cvQueryFrame�Ĳ�����CvCapture�ṹ��ָ�롣��������һ֡��Ƶ�ļ�
            //�����ڴ棨ʵ�����������CvCapture�ṹ�У�������һ����Ӧ��ǰ֡��ָ��
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
    1�� cvloadImage��cvQueryFrame
    cvloadImage:ΪͼƬ�����ڴ�ռ�
    cvQueryFrame:ʹ���Ѿ���cvCapture�ṹ�з���õ��ڴ档
     ���ԣ���û��Ҫͨ�� cvReleaseImage()��������ص�ͼ��ָ������ͷš�
     ��cvCapture�ṹ���ͷź�ÿһ֡ͼ���Ӧ���ڴ�ռ������ͻᱻ�ͷ�

    2��c = cvWaitKey(10)
        if( c == 27) break;
    ��ǰ֡����ʾ�󣬻�ȴ�10ms.����ڼ��û��ٷ���һ��������c �ᱻ���ó����������ASCII��
    ����,c�ᱻ���ó�-1.����û�������ESC�����൱��ASCII27��ѭ���ᱻ�˳���������Ƶ��ֹ������10ms�Ժ����
    ִ��ѭ��
*/
