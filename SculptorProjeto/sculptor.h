#ifndef SCULPTOR
#define SCULPTOR

#include "voxel.h"

class Sculptor {
private:
  Voxel ***v;
  int nx, ny, nz;
  float r, g, b, a;

public:
  Sculptor(int _nx, int _ny, int _nz); // Dimensões da figura
  ~Sculptor();

  void setColor(float r, float g, float b, float a); // Define cor dos voxels
  void putVoxel(int x, int y, int z); // Coloca um voxel em coordenadas xyz
  void cutVoxel(int x, int y, int z); // Coloca um voxel em coordenadas xyz
  void putBox(int x0, int x1, int y0, int y1, int z0,
              int z1); // Coloca uma caixa coordenadas iniciais e finais xyz
  void cutBox(int x0, int x1, int y0, int y1, int z0,
              int z1); // Corta uma caixa coordenadas iniciais e finais xyz
  void putSphere(int xcenter, int ycenter, int zcenter,
                 int radius); // coloca esfera a partir da coordenadas do centro
                              // e tamanhor do raio
  void cutSphere(int xcenter, int ycenter, int zcenter,
                 int radius); // Corta esfera a partir da coordenadas do centro
                              // e tamanhor do raio
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry,
                    int rz); // Coloca Elipsoide a partir da coordenadas do
                             // centro e tamanhor do raio
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry,
                    int rz); // Corta Elipsoide a partir da coordenadas do
                             // centro e tamanhor do raio
  void writeOFF(char *filename); // Escreve Figura
};

#endif