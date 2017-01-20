
/*********************************************************************
***                                                                 ***
***  Source code generated by cl2cpp.pl                             ***
***                                                                 ***
***  Please do not edit                                             ***
***                                                                 ***
*********************************************************************/
#include "vglImage.h"

#include "vglShape.h"

#include "vglStrEl.h"

/** Conway game of life.

  */
void vglClBinConway(VglImage* img_input, VglImage* img_output);

/** Copy of binary image img_input to img_output.

  */
void vglClBinCopy(VglImage* img_input, VglImage* img_output);

/** Dilation of img_input by mask. Result is stored in img_output.

  */
void vglClBinDilate(VglImage* img_input, VglImage* img_output, float* convolution_window, int window_size_x, int window_size_y);

/** Erosion of img_input by mask. Result is stored in img_output.

  */
void vglClBinErode(VglImage* img_input, VglImage* img_output, float* convolution_window, int window_size_x, int window_size_y);

/** Negation of binary image img_input. Result is stored in img_output.

  */
void vglClBinNot(VglImage* img_input, VglImage* img_output);

/** Threshold of grayscale image with binary result.

    Threshold of grayscale image img_input. Result is binary, stored in img_output. Parameter
    thresh is float between 0.0 and 1.0.
  */
void vglClBinThreshold(VglImage* img_input, VglImage* img_output, float thresh);

/** Convert binary image to grayscale.

    Convert binary image to grayscale.
  */
void vglClBinToGray(VglImage* img_input, VglImage* img_output);

