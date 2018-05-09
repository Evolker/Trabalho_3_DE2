#include "hora.h"

int Hora::getHoras() const
{
    return horas;
}

void Hora::setHoras(int value)
{
    horas = value;
}

int Hora::getMinutos() const
{
    return minutos;
}

void Hora::setMinutos(int value)
{
    minutos = value;
}

Hora::Hora()
{
    this->horas=this->minutos=0;
}

Hora::Hora(int hr, int m)
{
   this->horas=hr;;
    this->minutos=m;
}

Hora Hora::operator+(Hora A)
{
    A.horas+=this->horas;
    A.minutos+=this->minutos;
    return A;


}

Hora Hora::operator-(Hora A)
{

}
