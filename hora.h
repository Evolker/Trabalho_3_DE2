#ifndef HORA_H
#define HORA_H


class Hora
{
private:
    int horas,minutos;
public:
    Hora();
    Hora(int hr,int m);
    Hora operator+(Hora A);
    Hora operator-(Hora A);

    int getHoras() const;
    void setHoras(int value);
    int getMinutos() const;
    void setMinutos(int value);
};

#endif // HORA_H
