/********************************************************************************
** Form generated from reading UI file 'CMakeSetupDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAKESETUPDIALOG_H
#define UI_CMAKESETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QCMakeCacheView.h"
#include "QCMakePresetComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_CMakeSetupDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QLabel *SourceLabel;
    QLineEdit *SourceDirectory;
    QPushButton *BrowseSourceDirectoryButton;
    QLabel *PresetLabel;
    QCMakePresetComboBox *Preset;
    QLabel *BinaryLabel;
    QComboBox *BinaryDirectory;
    QPushButton *BrowseBinaryDirectoryButton;
    QSplitter *Splitter;
    QFrame *frame;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_4;
    QLineEdit *Search;
    QSpacerItem *spacerItem;
    QCheckBox *groupedCheck;
    QCheckBox *advancedCheck;
    QPushButton *AddEntry;
    QPushButton *RemoveEntry;
    QPushButton *Environment;
    QCMakeCacheView *CacheValues;
    QLabel *label_3;
    QHBoxLayout *hboxLayout1;
    QPushButton *ConfigureButton;
    QPushButton *GenerateButton;
    QPushButton *OpenProjectButton;
    QLabel *Generator;
    QSpacerItem *spacerItem1;
    QProgressBar *ProgressBar;
    QTextEdit *Output;

    void setupUi(QWidget *CMakeSetupDialog)
    {
        if (CMakeSetupDialog->objectName().isEmpty())
            CMakeSetupDialog->setObjectName(QString::fromUtf8("CMakeSetupDialog"));
        CMakeSetupDialog->resize(707, 582);
        gridLayout = new QGridLayout(CMakeSetupDialog);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        SourceLabel = new QLabel(CMakeSetupDialog);
        SourceLabel->setObjectName(QString::fromUtf8("SourceLabel"));

        gridLayout1->addWidget(SourceLabel, 0, 0, 1, 1);

        SourceDirectory = new QLineEdit(CMakeSetupDialog);
        SourceDirectory->setObjectName(QString::fromUtf8("SourceDirectory"));

        gridLayout1->addWidget(SourceDirectory, 0, 1, 1, 1);

        BrowseSourceDirectoryButton = new QPushButton(CMakeSetupDialog);
        BrowseSourceDirectoryButton->setObjectName(QString::fromUtf8("BrowseSourceDirectoryButton"));

        gridLayout1->addWidget(BrowseSourceDirectoryButton, 0, 2, 1, 1);

        PresetLabel = new QLabel(CMakeSetupDialog);
        PresetLabel->setObjectName(QString::fromUtf8("PresetLabel"));

        gridLayout1->addWidget(PresetLabel, 1, 0, 1, 1);

        Preset = new QCMakePresetComboBox(CMakeSetupDialog);
        Preset->setObjectName(QString::fromUtf8("Preset"));
        Preset->setEnabled(false);

        gridLayout1->addWidget(Preset, 1, 1, 1, 1);

        BinaryLabel = new QLabel(CMakeSetupDialog);
        BinaryLabel->setObjectName(QString::fromUtf8("BinaryLabel"));

        gridLayout1->addWidget(BinaryLabel, 2, 0, 1, 1);

        BinaryDirectory = new QComboBox(CMakeSetupDialog);
        BinaryDirectory->setObjectName(QString::fromUtf8("BinaryDirectory"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BinaryDirectory->sizePolicy().hasHeightForWidth());
        BinaryDirectory->setSizePolicy(sizePolicy);
        BinaryDirectory->setEditable(true);

        gridLayout1->addWidget(BinaryDirectory, 2, 1, 1, 1);

        BrowseBinaryDirectoryButton = new QPushButton(CMakeSetupDialog);
        BrowseBinaryDirectoryButton->setObjectName(QString::fromUtf8("BrowseBinaryDirectoryButton"));

        gridLayout1->addWidget(BrowseBinaryDirectoryButton, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        Splitter = new QSplitter(CMakeSetupDialog);
        Splitter->setObjectName(QString::fromUtf8("Splitter"));
        Splitter->setOrientation(Qt::Vertical);
        frame = new QFrame(Splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(label_4);

        Search = new QLineEdit(frame);
        Search->setObjectName(QString::fromUtf8("Search"));
        sizePolicy.setHeightForWidth(Search->sizePolicy().hasHeightForWidth());
        Search->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(Search);

        spacerItem = new QSpacerItem(12, 23, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        groupedCheck = new QCheckBox(frame);
        groupedCheck->setObjectName(QString::fromUtf8("groupedCheck"));

        hboxLayout->addWidget(groupedCheck);

        advancedCheck = new QCheckBox(frame);
        advancedCheck->setObjectName(QString::fromUtf8("advancedCheck"));

        hboxLayout->addWidget(advancedCheck);

        AddEntry = new QPushButton(frame);
        AddEntry->setObjectName(QString::fromUtf8("AddEntry"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/Icons/Plus16.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        AddEntry->setIcon(icon);

        hboxLayout->addWidget(AddEntry);

        RemoveEntry = new QPushButton(frame);
        RemoveEntry->setObjectName(QString::fromUtf8("RemoveEntry"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("list-remove");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8(":/Icons/Delete16.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        RemoveEntry->setIcon(icon1);

        hboxLayout->addWidget(RemoveEntry);

        Environment = new QPushButton(frame);
        Environment->setObjectName(QString::fromUtf8("Environment"));

        hboxLayout->addWidget(Environment);


        vboxLayout->addLayout(hboxLayout);

        CacheValues = new QCMakeCacheView(frame);
        CacheValues->setObjectName(QString::fromUtf8("CacheValues"));
        CacheValues->setAlternatingRowColors(true);
        CacheValues->setSelectionMode(QAbstractItemView::ExtendedSelection);
        CacheValues->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout->addWidget(CacheValues);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        vboxLayout->addWidget(label_3);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        ConfigureButton = new QPushButton(frame);
        ConfigureButton->setObjectName(QString::fromUtf8("ConfigureButton"));

        hboxLayout1->addWidget(ConfigureButton);

        GenerateButton = new QPushButton(frame);
        GenerateButton->setObjectName(QString::fromUtf8("GenerateButton"));

        hboxLayout1->addWidget(GenerateButton);

        OpenProjectButton = new QPushButton(frame);
        OpenProjectButton->setObjectName(QString::fromUtf8("OpenProjectButton"));

        hboxLayout1->addWidget(OpenProjectButton);

        Generator = new QLabel(frame);
        Generator->setObjectName(QString::fromUtf8("Generator"));

        hboxLayout1->addWidget(Generator);

        spacerItem1 = new QSpacerItem(121, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        ProgressBar = new QProgressBar(frame);
        ProgressBar->setObjectName(QString::fromUtf8("ProgressBar"));
        ProgressBar->setMinimum(0);
        ProgressBar->setMaximum(100);
        ProgressBar->setValue(0);
        ProgressBar->setTextVisible(false);
        ProgressBar->setOrientation(Qt::Horizontal);
        ProgressBar->setTextDirection(QProgressBar::BottomToTop);

        hboxLayout1->addWidget(ProgressBar);


        vboxLayout->addLayout(hboxLayout1);

        Splitter->addWidget(frame);
        Output = new QTextEdit(Splitter);
        Output->setObjectName(QString::fromUtf8("Output"));
        Output->setLineWrapMode(QTextEdit::NoWrap);
        Output->setReadOnly(true);
        Splitter->addWidget(Output);

        gridLayout->addWidget(Splitter, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_4->setBuddy(Search);
#endif // QT_CONFIG(shortcut)

        retranslateUi(CMakeSetupDialog);

        QMetaObject::connectSlotsByName(CMakeSetupDialog);
    } // setupUi

    void retranslateUi(QWidget *CMakeSetupDialog)
    {
        SourceLabel->setText(QCoreApplication::translate("CMakeSetupDialog", "Where is the source code:", nullptr));
        BrowseSourceDirectoryButton->setText(QCoreApplication::translate("CMakeSetupDialog", "Browse &Source...", nullptr));
        PresetLabel->setText(QCoreApplication::translate("CMakeSetupDialog", "Preset:", nullptr));
        BinaryLabel->setText(QCoreApplication::translate("CMakeSetupDialog", "Where to build the binaries:", nullptr));
        BrowseBinaryDirectoryButton->setText(QCoreApplication::translate("CMakeSetupDialog", "Browse &Build...", nullptr));
        label_4->setText(QCoreApplication::translate("CMakeSetupDialog", "S&earch:", nullptr));
        groupedCheck->setText(QCoreApplication::translate("CMakeSetupDialog", "Grouped", nullptr));
        advancedCheck->setText(QCoreApplication::translate("CMakeSetupDialog", "Advanced", nullptr));
#if QT_CONFIG(tooltip)
        AddEntry->setToolTip(QCoreApplication::translate("CMakeSetupDialog", "Add New Entry", nullptr));
#endif // QT_CONFIG(tooltip)
        AddEntry->setText(QCoreApplication::translate("CMakeSetupDialog", "&Add Entry", nullptr));
#if QT_CONFIG(tooltip)
        RemoveEntry->setToolTip(QCoreApplication::translate("CMakeSetupDialog", "Remove Selected Entries", nullptr));
#endif // QT_CONFIG(tooltip)
        RemoveEntry->setText(QCoreApplication::translate("CMakeSetupDialog", "&Remove Entry", nullptr));
        Environment->setText(QCoreApplication::translate("CMakeSetupDialog", "E&nvironment...", nullptr));
        label_3->setText(QCoreApplication::translate("CMakeSetupDialog", "Press Configure to update and display new values in red, then press Generate to generate selected build files.", nullptr));
        ConfigureButton->setText(QCoreApplication::translate("CMakeSetupDialog", "&Configure", nullptr));
        GenerateButton->setText(QCoreApplication::translate("CMakeSetupDialog", "&Generate", nullptr));
        OpenProjectButton->setText(QCoreApplication::translate("CMakeSetupDialog", "Open &Project", nullptr));
        Generator->setText(QCoreApplication::translate("CMakeSetupDialog", "Current Generator:", nullptr));
        (void)CMakeSetupDialog;
    } // retranslateUi

};

namespace Ui {
    class CMakeSetupDialog: public Ui_CMakeSetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAKESETUPDIALOG_H
