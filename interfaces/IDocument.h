#ifndef IDOCUMENT_H
#define IDOCUMENT_H

#include <QString>
#include <QDateTime>
#include <QSize>
#include <QUuid>
#include <QHash>

#include "SankoreAPI_global.h"

class SANKOREAPISHARED_EXPORT IDocument{
public:
    virtual ~IDocument(){}
    virtual QString persistencePath() const = 0;
    virtual QString name() const = 0;
    virtual QString groupName() const = 0;
    virtual QSize defaultDocumentSize() const = 0;
    virtual QUuid uuid() const = 0;
    virtual bool isModified() const = 0;
    virtual void setModified(bool modified) = 0;
    virtual int pageCount() = 0;
    virtual QVariant metaData(const QString& pKey) const = 0;
    virtual QHash<QString, QVariant> metaDatas() const = 0;
};

Q_DECLARE_INTERFACE(IDocument, "org.open-sankore.interfaces.IDocument")

#endif // IDOCUMENT_H
