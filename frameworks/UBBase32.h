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

#ifndef UBBASE32_H_
#define UBBASE32_H_

#include <QtCore>

#include "SankoreAPI_global.h"

class SANKOREAPISHARED_EXPORT UBBase32
{
    public:
        static QByteArray decode(const QString& base32String);

    protected:
        UBBase32() {}
        virtual ~UBBase32() {}

    private:
        static QString sBase32Chars;
        static int sBase32Lookup[];
};

#endif /* UBBASE32_H_ */
