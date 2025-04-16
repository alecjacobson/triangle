#include "emscripten.h"
#define TRILIBRARY
#include "triangle.h"
#include <iostream>

extern "C" {
  EMSCRIPTEN_KEEPALIVE
  //void triangulate(char *triswitches, struct triangulateio *in,
  //                struct triangulateio *out, struct triangulateio *vorout)
  int triangulate(char *triswitches)
  {
    std::cout << "triswitches: " << triswitches << std::endl;
    return 10;
  }
}
