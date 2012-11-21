#ifndef IDOCUMENTUSER_H
#define IDOCUMENTUSER_H

#include "IDocument.h"
#include "SankoreAPI_global.h"

class SANKOREAPISHARED_EXPORT IDocumentUser{
public:
    virtual ~IDocumentUser(){}
    virtual void setDocument(IDocument* doc) = 0;
    virtual IDocument* document() = 0;
};

Q_DECLARE_INTERFACE(IDocumentUser, "org.open-sankore.interfaces.IDocumentUser")

#endif // IDOCUMENTUSER_H
