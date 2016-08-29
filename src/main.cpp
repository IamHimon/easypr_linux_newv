#include "entrance.h"
using namespace std;
using namespace easypr;
int main(int argc, char **argv)
{
	cout<<"we are in main"<<endl;
	clock_t start,ends;
	 start=clock();
	if(argc < 3){
		fprintf(stderr, "usage:%s %s %s   [./myeasypr] [run/seg/locate(color_locate,sobel_locate,mser_locate)/identify/recognise] [imgage_path]\n", argv[0], argv[1],argv[2]);
		return 0;
	}
	
	if(strcmp(argv[1],"seg")==0 ) test_chars_segment(argv[2]);

	else if(strcmp(argv[1],"run")==0) run(argv[2]);		
		
	else if( strcmp(argv[1],"color_locate")==0) test_plate_locate(argv[1],argv[2]);
	else if( strcmp(argv[1],"sobel_locate")==0) test_plate_locate(argv[1],argv[2]);
	else if( strcmp(argv[1],"mser_locate")==0) test_plate_locate(argv[1],argv[2]);
	else if( strcmp(argv[1],"locate")==0) test_plate_locate(argv[1],argv[2]);

	else if( strcmp(argv[1],"plate")==0) plate(argv[2]);
 		
	else if( strcmp(argv[1],"identify")==0) test_chars_identify();
 		
	else if( strcmp(argv[1],"recognise")==0) test_chars_recognise();
 	
	else{
		fprintf(stderr, "usage:%s %s %s   [./myeasypr] [seg/locate/identify/recognise] [imgage_path]\n", argv[0], argv[1],argv[2]);
		return 0;
		
	}
	ends=clock();
 	cout<<"耗时："<<((float)(ends-start))/CLOCKS_PER_SEC<<"秒"<<endl; 
	return 0;
}
