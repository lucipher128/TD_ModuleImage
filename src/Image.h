#ifndef IMAGE_H
#define IMAGE_H

#include <cstdint>

#include <iostream>
#include "Pixel.h"

class Image {
   private:
   Pixel* tab;  // Tableau dynamique de Pixel formant une image
   // avec vectror ou sans, definir la macro W__VECTOR__ pour with vectror

   unsigned int dimx;  // Dimension x de l'image
   unsigned int dimy;  // dimension y de l'image

   public:
   /**
    * Description:      Constructeur par defaut et, init
    * Arguments  :      x and y dimensions of the image
    * Return Type:      Image class object
    * */
   Image();
   Image(unsigned int DimensionX, unsigned int DimensionY);
   virtual ~Image();

   /**
    * Description:      accesseurs: getters
    * Arguments  :      x and y coordinates
    * Return Type:      Pixel object
    * */
   Pixel getPix(const int x, const int y) const;

   /**
    * Description:      mutateur: setters
    * Arguments  :      x and y coordinates, "nouveau" pixel, new color
    * Return Type:      void
    * */
   void setPix(int x, int y, Pixel Nv);

   /**
    * Description:      Dessine un rectangle plein de la couleur donnée
    * Arguments  :      x1,x2 and y1, y2 coordinates, color to fill with
    * Return Type:      void
    * */
   void dessinerRectangle(int Xmin, int Ymin, int Xmax, int Ymax,
                          Pixel couleur) const;
   /**
    * Description:      Efface le canevas en remplissant avec la couleur donnée
    * Arguments  :      Pixel object as color argument
    * Return Type:      void
    * */
   void effacer(Pixel fond);
   /**
    * Description:      tests the module, and its features
    * Arguments  : 	  void
    * Return Type:      void
    * */
   void testRegression() const;
}; /* end Image */

#endif /* IMAGE_H */
