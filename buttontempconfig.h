#ifndef BUTTONTEMPCONFIG_H
#define BUTTONTEMPCONFIG_H

#include <QObject>
#include <QList>

#include "joybutton.h"
#include "joybuttonslot.h"

class ButtonTempConfig : public QObject
{
    Q_OBJECT
public:
    explicit ButtonTempConfig(QObject *parent = 0);
    explicit ButtonTempConfig(JoyButton *button, QObject *parent = 0);
    ~ButtonTempConfig();

    bool turbo;
    int turboInterval;
    bool toggle;
    int mouseSpeedX;
    int mouseSpeedY;
    int setSelection;
    int originset;
    QList<JoyButtonSlot*> *assignments;
    JoyButton::SetChangeCondition setSelectionCondition;

    QString getSlotsSummary();
    bool containsSequence();

signals:
    
public slots:
    
};

#endif // BUTTONTEMPCONFIG_H
