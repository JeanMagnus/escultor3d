#ifndef SCULPTOR_HPP
#define SCULPTOR_HPP

struct Voxel {
  float r,g,b; // Colors
  float a; // obacidade
            // Transparency
  bool isOn; // Included or not
};


class Sculptor
{
private:
    Voxel*** v; // 3D matriz
    int nx,ny,nz;
    float r,g,b,a;
public:
    

    Sculptor(int _nx, int _ny, int _nz);
   
    ~Sculptor();
   
    void setColor(float r, float g, float b, float alpha);

    void putVoxel(int x, int y, int z);
 
    void cutVoxel(int x, int y, int z);
 
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
 
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
 
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);
   
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
   
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
   
    void writeOFF(char* filename);

    void errorInterval(void); // método para mostrar o erro de intervalo!


};

#endif // SCULPTOR_HPP
