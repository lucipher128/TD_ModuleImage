#include "Image.h"

Pixel Image::getPix(const int x, const int y) const {
   return tab[y * dimx + x];
}

void Image::setPix(int x, int y, Pixel Nv) { tab[y * dimx + x] = Nv; }

void Image::dessinerRectangle(int Xmin, int Ymin, int Xmax, int Ymax,
                              Pixel couleur) const {}

void Image::effacer(Pixel fond) {}

void Image::testRegression() const {}

Image::Image(unsigned int DimensionX, unsigned int DimensionY) {
   tab = new Pixel[DimensionX * DimensionY];
}

Image::~Image(void) {
   for (int i = 0; i < dimx; i++) {
      delete[] tab;
   }
}
