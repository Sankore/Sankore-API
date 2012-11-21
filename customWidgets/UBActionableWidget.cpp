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
#include <QPainter>
#include <QDebug>

#include "UBActionableWidget.h"
#include "devtools/memcheck.h"

/**
 * \brief Constructor
 */
UBActionableWidget::UBActionableWidget(QWidget *parent, const char *name):QWidget(parent)
  , mShowActions(false)
{
    setObjectName(name);
    mActions.clear();
    mCloseButtons.setIcon(QIcon(QPixmap(":images/close.svg")));
    mCloseButtons.setGeometry(0, 0, 2*ACTIONSIZE, ACTIONSIZE);
    mCloseButtons.setVisible(false);
    connect(&mCloseButtons, SIGNAL(clicked()), this, SLOT(onCloseClicked()));
}

/**
 * \brief Destructor
 */
UBActionableWidget::~UBActionableWidget()
{

}

/**
 * \brief Add an action to the widget
 * @param act as the action to add
 */
void UBActionableWidget::addAction(eAction act)
{
    if(!mActions.contains(act)){
        mActions << act;
    }
}

/**
 * \brief Remove an action from the widget
 * @param act as the action to remove
 */
void UBActionableWidget::removeAction(eAction act)
{
    if(mActions.contains(act)){
        mActions.remove(mActions.indexOf(act));
    }
}

/**
 * \brief Remove all actions from the widget
 */
void UBActionableWidget::removeAllActions()
{
    mActions.clear();
}

/**
 * \brief Set the actions visible state
 * @param act as the action to add
 */
void UBActionableWidget::setActionsVisible(bool bVisible)
{
    if(!mActions.empty() && mActions.contains(eAction_Close)){
        mCloseButtons.setVisible(bVisible);
    }
}

/**
 * \brief Handle the close event
 */
void UBActionableWidget::onCloseClicked()
{
    emit close(this);
}

/**
 * \brief Set the actions parent
 * @param parent as the actions parent
 */
void UBActionableWidget::setActionsParent(QWidget *parent)
{
    if(mActions.contains(eAction_Close)){
        mCloseButtons.setParent(parent);
    }
}

/**
 * \brief Unset the actions parent
 * @param parent as the actions parent
 */
void UBActionableWidget::unsetActionsParent()
{
    if(mActions.contains(eAction_Close)){
        mCloseButtons.setParent(this);
    }
}
