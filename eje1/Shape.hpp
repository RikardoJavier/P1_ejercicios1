#include <iostream>
//Area de un triangulo
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
 return (m_Ancho * m_Alto)/2;
}
private:
int m_Ancho;
int m_Alto;
}
// para el rectangulo 
class shape2
{
    public:
    shape2(int Ancho, int Alto ) : AnchoC(m_AnchoC),
AltoC(m_AltoC)
{
<<std::cout<<"Los parametros son :"<<AnchoC<<"y"<<AltoC<<std::end1;
}
int areaC()
{
 return m_AnchoC * m_AltoC;
}
private:
int m_AnchoC;
int m_AltoC;
}
}