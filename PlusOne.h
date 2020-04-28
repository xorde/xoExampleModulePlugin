#ifndef PLUSONE_H
#define PLUSONE_H

#include "ComponentBase.h"

class PlusOne : public ComponentBase
{
    Q_OBJECT
public:
    PlusOne(QObject* parent = nullptr);

protected:
    void objectReceiveEvent(QString) override;

    xoFloat m_in = 0;
    xoFloat m_out = 0;

};

#endif // CORTEXCONNECTORCOMPONENT_H
