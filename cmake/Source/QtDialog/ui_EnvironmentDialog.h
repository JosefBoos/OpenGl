/********************************************************************************
** Form generated from reading UI file 'EnvironmentDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENTDIALOG_H
#define UI_ENVIRONMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EnvironmentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Search;
    QSpacerItem *horizontalSpacer;
    QPushButton *AddEntry;
    QPushButton *RemoveEntry;
    QTreeView *Environment;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EnvironmentDialog)
    {
        if (EnvironmentDialog->objectName().isEmpty())
            EnvironmentDialog->setObjectName(QString::fromUtf8("EnvironmentDialog"));
        EnvironmentDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(EnvironmentDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(EnvironmentDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        Search = new QLineEdit(EnvironmentDialog);
        Search->setObjectName(QString::fromUtf8("Search"));

        horizontalLayout->addWidget(Search);

        horizontalSpacer = new QSpacerItem(12, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        AddEntry = new QPushButton(EnvironmentDialog);
        AddEntry->setObjectName(QString::fromUtf8("AddEntry"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Icons/Plus16.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        AddEntry->setIcon(icon);

        horizontalLayout->addWidget(AddEntry);

        RemoveEntry = new QPushButton(EnvironmentDialog);
        RemoveEntry->setObjectName(QString::fromUtf8("RemoveEntry"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("list-remove");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8(":/Icons/Delete16.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        RemoveEntry->setIcon(icon1);

        horizontalLayout->addWidget(RemoveEntry);


        verticalLayout->addLayout(horizontalLayout);

        Environment = new QTreeView(EnvironmentDialog);
        Environment->setObjectName(QString::fromUtf8("Environment"));

        verticalLayout->addWidget(Environment);

        buttonBox = new QDialogButtonBox(EnvironmentDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(Search);
#endif // QT_CONFIG(shortcut)

        retranslateUi(EnvironmentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EnvironmentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EnvironmentDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EnvironmentDialog);
    } // setupUi

    void retranslateUi(QDialog *EnvironmentDialog)
    {
        EnvironmentDialog->setWindowTitle(QCoreApplication::translate("EnvironmentDialog", "Environment Editor", nullptr));
        label->setText(QCoreApplication::translate("EnvironmentDialog", "S&earch:", nullptr));
        AddEntry->setText(QCoreApplication::translate("EnvironmentDialog", "&Add Entry", nullptr));
        RemoveEntry->setText(QCoreApplication::translate("EnvironmentDialog", "&Remove Entry", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnvironmentDialog: public Ui_EnvironmentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENTDIALOG_H
