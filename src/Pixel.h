#ifndef PIXEL_H
#define PIXEL_H

class Pixel {
   private:
   unsigned int r;
   unsigned int g;
   unsigned int b;

   public:
   /**
    * Description:      constructeur par defaut, puis init
    * Return Type:      class object Pixel
    * */
   Pixel();
   Pixel(unsigned int nr, unsigned int ng, unsigned int nb);

   /**
    * Description:      Color getters in Pixel objetc
    * Return Type:      unsigned int, (0 - 255)
    * */
   unsigned int getRouge() const;
   unsigned int getVert() const;
   unsigned int getBleu() const;

   /**
    * Description:      Color setters in Pixel objects
    * Return Type:      void
    * */
   void setRouge(unsigned int nr);
   void setVert(unsigned int ng);
   void setBleu(unsigned int nb);
};

#endif /* PIXEL_H */
