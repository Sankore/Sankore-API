#ifndef IDOCKABLE_H
#define IDOCKABLE_H

#include "customWidgets/UBDockPaletteWidget.h"
#include "SankoreAPI_global.h"

class SANKOREAPISHARED_EXPORT IDockable{
public:
    virtual ~IDockable(){}
    virtual UBDockPaletteWidget* dockableWidget()=0;
};

Q_DECLARE_INTERFACE(IDockable, "org.open-sankore.interfaces.IDockable")

#endif // IDOCKABLE_H
