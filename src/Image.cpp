#include "Image.h"

Pixel Image::getPix(const int x, const int y) const {
#ifdef W__VECTOR__ 
   return v_tab[x][y];
#else 
   return tab[x][y];
#endif
}

void Image::setPix(int x, int y, Pixel Nv){
#ifdef W__VECTOR__ 
   v_tab[x][y] = Nv;
#else 
   tab[x][y] = Nv;
#endif
}

void Image::dessinerRectangle(int Xmin, int Ymin, int Xmax, int Ymax, Pixel couleur)const {
#ifdef W__VECTOR__ 

#else 

#endif
}

void Image::effacer(Pixel fond){
#ifdef W__VECTOR__ 

#else 

#endif
}

void Image::testRegression()const{
#ifdef W__VECTOR__ 

#else 

#endif
}


#ifndef W__VECTOR__  // without vector
Image::Image(unsigned int DimensionX, unsigned int DimensionY) {
   tab = new Pixel*[DimensionX];
   for (int i = 0; i < DimensionX; i++) {
      tab[i] = new Pixel[DimensionY];
   }
}

Image::~Image(void) {
   for (int i = 0; i < dimx; i++) {
      delete tab[dimy];
   }
}
#endif  // !W__VECTOR__
