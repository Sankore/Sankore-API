#ifndef IDOCUMENT_H
#define IDOCUMENT_H

#include <QString>

#include "SankoreAPI_global.h"

class SANKOREAPISHARED_EXPORT IDocument{
public:
    virtual ~IDocument(){}
    virtual QString persistencePath() const = 0;
};

Q_DECLARE_INTERFACE(IDocument, "org.open-sankore.interfaces.IDocument")

#endif // IDOCUMENT_H
