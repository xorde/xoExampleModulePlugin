#ifndef MULTIPLY_H
#define MULTIPLY_H

#include "ComponentBase.h"

class Multiply : public ComponentBase
{
    Q_OBJECT
public:
    Multiply(QObject* parent = nullptr);

protected:
    void objectReceiveEvent(QString) override;

    xoFloat m_factor = 1;
    xoFloat m_in = 0;
    xoFloat m_out = 0;

};

#endif // CORTEXCONNECTORCOMPONENT_H
