#ifndef EASYPR_ENTRANCE_H_
#define EASYPR_ENTRANCE_H_

#include <opencv2/opencv.hpp>
#include <iostream>
#include <time.h>
namespace easypr{

	int test_chars_segment( const char *img_path  );
	int test_chars_identify();
	int test_chars_recognise();
	int test_plate_locate(const char *type, const char *img_path);
	void run(const char *img_path);
	void plate(const char *img_path);

}
#endif
