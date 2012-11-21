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
#ifndef UBDOCKPALETTEWIDGET_H
#define UBDOCKPALETTEWIDGET_H

#include <QWidget>
#include <QPixmap>
#include <QString>

#include "SankoreAPI_global.h"

/**
  * This enum defines the different mode availables.
  */
typedef enum
{
    eUBDockPaletteWidget_BOARD,
    eUBDockPaletteWidget_WEB,
    eUBDockPaletteWidget_DOCUMENT,
    eUBDockPaletteWidget_DESKTOP
} eUBDockPaletteWidgetMode;

class SANKOREAPISHARED_EXPORT UBDockPaletteWidget : public QWidget
{
    Q_OBJECT
public:
    UBDockPaletteWidget(QWidget* parent=0, const char* name="UBDockPaletteWidget");
    ~UBDockPaletteWidget();

    QPixmap iconToRight();
    QPixmap iconToLeft();
    QString name();
    virtual bool visibleInMode(eUBDockPaletteWidgetMode mode) = 0;
    void registerMode(eUBDockPaletteWidgetMode mode);
    bool visibleState(){return mVisibleState;}
    void setVisibleState(bool state){mVisibleState = state;}

signals:
    void hideTab(UBDockPaletteWidget* widget);
    void showTab(UBDockPaletteWidget* widget);

public slots:
    void slot_changeMode(eUBDockPaletteWidgetMode newMode);

protected:
    /** Icon 'to the right' */
    QPixmap mIconToRight;
    /** Icon 'to the left' */
    QPixmap mIconToLeft;
    /** Dock palette name */
    QString mName;
    /** The current widget available mode list */
    QVector<eUBDockPaletteWidgetMode> mRegisteredModes;
    /** Visible state flag */
    bool mVisibleState;
};

#endif // UBDOCKPALETTEWIDGET_H
