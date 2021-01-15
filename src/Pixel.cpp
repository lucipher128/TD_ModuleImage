#include "Pixel.h"

Pixel::Pixel(unsigned int nr, unsigned int ng, unsigned int nb)
    : r(nr), g(ng), b(nb) {}

unsigned int Pixel::getRouge() const { return r; }
unsigned int Pixel::getVert() const { return g; }
unsigned int Pixel::getBleu() const { return b; }

void Pixel::setRouge(unsigned int nr){r = nr;}
void Pixel::setVert(unsigned int ng){g = ng;}
void Pixel::setBleu(unsigned int nb){b = nb;}
