#include <iostream>
class shape
{
 public:
shape(int Ancho, int Alto ) : Ancho(m_Ancho),
Alto(m_Alto)
{
<<std::cout<<"Los parametros son :"<<Ancho<<"y"<<Alto<<std::end1;
}
int areaT()
{
 return m_Ancho * m_Alto;
}
private:
int m_Ancho;
int m_Alto;
}

