/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef IMETADATAPROVIDER_H
#define IMETADATAPROVIDER_H

#include <QString>
#include "SankoreAPI_global.h"

typedef struct{
    /** Namespace */
    QString ns;
    /** Metadata name */
    QString key;
    /** Value */
    QString value;
}sMetaData;

typedef struct{
    /** Name */
    QString name;
    /** Url */
    QString url;
}sNamespace;

class SANKOREAPISHARED_EXPORT IMetaDataProvider{
public:
    virtual ~IMetaDataProvider(){}
    virtual void save(QList<sNamespace> &ns, QList<sMetaData> &md)=0;
    virtual QString nameSpace()=0;
    virtual QString nameSpaceUrl()=0;
};

Q_DECLARE_INTERFACE(IMetaDataProvider, "org.open-sankore.interfaces.IMetaDataProvider")

#endif // IMETADATAPROVIDER_H
