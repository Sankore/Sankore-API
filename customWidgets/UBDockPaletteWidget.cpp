#include "UBDockPaletteWidget.h"
#include "devtools/memcheck.h"

/**
 * \brief Constructor
 */
UBDockPaletteWidget::UBDockPaletteWidget(QWidget *parent, const char *name):QWidget(parent)
{
    setObjectName(name);
}

/**
 * \brief Destructor
 */
UBDockPaletteWidget::~UBDockPaletteWidget()
{

}

/**
 * \brief Get the icon to the right
 * @returns the icon pixmap
 */
QPixmap UBDockPaletteWidget::iconToRight()
{
    return mIconToRight;
}

/**
 * \brief Get the icon to the left
 * @returns the icon pixmap
 */
QPixmap UBDockPaletteWidget::iconToLeft()
{
    return mIconToLeft;
}

/**
 * \brief Get the dock palette name
 * @returns the dock palette name
 */
QString UBDockPaletteWidget::name()
{
    return mName;
}

/**
 * \brief Register the mode. When a widget registers a mode it means that it would be displayed on that mode
 * @param mode as the given mode
 */
void UBDockPaletteWidget::registerMode(eUBDockPaletteWidgetMode mode)
{
    if(!mRegisteredModes.contains(mode))
        mRegisteredModes.append(mode);
}

/**
 * \brief Handles the mode change event
 * @param newMode as the new mode
 */
void UBDockPaletteWidget::slot_changeMode(eUBDockPaletteWidgetMode newMode)
{
    this->setVisible(this->visibleInMode( newMode ));
}


