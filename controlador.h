#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <QObject>

#include "obrero.h"

#define MATUTINO 5.15
#define VESPERTINO 8.50
#define NOCTURNO 12.65

#define HORA_EXTRA 20.10
#define IESS 9.5

class Controlador : public QObject
{
    Q_OBJECT //macro
public:
    explicit Controlador(QObject *parent = nullptr); //construtor explicito por defecto
    void setDatos(QString nombre, int horas, TipoJornada jornada);
    bool calcular();
    QString Datos();
signals:

private:
    Obrero *m_modelo; //más dinámico

};

#endif // CONTROLADOR_H
