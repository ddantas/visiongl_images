
/*********************************************************************
***                                                                 ***
***  Source code generated by cl2cpp.pl                             ***
***                                                                 ***
***  Please do not edit                                             ***
***                                                                 ***
*********************************************************************/
#include "vglImage.h"

#include "vglShape.h"
#include "vglClShape.h"

#include "vglStrEl.h"
#include "vglClStrEl.h"

/** N-dimensional dilation

    SHAPE directive passes an array sized 2*VGL_MAX_DIM. Parameter does not appear in wrapper parameter list
    SCALAR directive passes an scalar given by the expression that follows it. Parameter does not appear in wrapper parameter list.
    ARRAY directive passes an array sized as the expression between brackets.
    

typedef 
struct 
VglClShape{ 
  cl_int ndim;
  cl_int shape[11];
  cl_int offset[11];
  cl_int size;
} VglClShape;



  */
void vglClNdDilate(VglImage* img_input, VglImage* img_output, VglStrEl* window);

/** Direct copy from src to dst.

  */
void vglClNdNot(VglImage* img_input, VglImage* img_output);
