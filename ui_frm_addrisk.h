/********************************************************************************
** Form generated from reading UI file 'frm_addrisk.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRM_ADDRISK_H
#define UI_FRM_ADDRISK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frm_AddRisk
{
public:
    QVBoxLayout *vlay_Main_2;
    QVBoxLayout *vlay_Main;
    QScrollArea *scrl_MainContent;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *vlay_Scrolll;
    QGroupBox *gpb_RiskInformation;
    QGridLayout *gridLayout_3;
    QVBoxLayout *vlay_RiskInformation;
    QGridLayout *glay_RiskNumber;
    QLineEdit *edt_RiskActivity;
    QLineEdit *edt_RiskNumber;
    QLineEdit *edt_RiskPriority;
    QLabel *lbl_RiskActivity;
    QLabel *lbl_RiskNumber;
    QLabel *lbl_RiskPriority;
    QGridLayout *glay_RiskTitle;
    QLabel *lbl_RiskTitle;
    QPlainTextEdit *edt_RiskTitle;
    QGroupBox *gpb_RiskProfile;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *glay_RiskProfile;
    QLabel *lbl_IssueRisk;
    QRadioButton *rbtn_BusinessRisk;
    QLabel *lbl_TaskRisk;
    QLabel *lbl_BaselineRisk;
    QRadioButton *rbtn_IssueRisk;
    QRadioButton *rbtn_TaskRisk;
    QRadioButton *rbtn_BaselineRisk;
    QLabel *lbl_BusinessRisk;
    QGroupBox *gpb_RiskStructure;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *vlay_RiskStructure;
    QLabel *lbl_IdentifyStructure;
    QGridLayout *glay_RiskStructure;
    QLabel *lbl_Department;
    QLabel *lbl_Section;
    QLabel *lbl_Task;
    QLabel *lbl_Function;
    QLabel *lbl_TaskStep;
    QComboBox *cbx_Department;
    QComboBox *cbx_Function;
    QComboBox *cbx_Section;
    QComboBox *cbx_Task;
    QComboBox *cbx_TaskStep;
    QGroupBox *gpb_HazardIdentification;
    QGridLayout *gridLayout_2;
    QGridLayout *glay_HazardIdentification;
    QLabel *lbl_Identification;
    QComboBox *cbx_Identification;
    QLabel *lbl_Failure;
    QComboBox *cbx_Failure;
    QGroupBox *gpb_RiskDescription;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *vlay_RiskDescription;
    QGridLayout *glay_ImpactOn;
    QLabel *lbl_ImpactOn;
    QCheckBox *chb_Safety;
    QCheckBox *chk_Health;
    QCheckBox *chk_Environmentt;
    QCheckBox *chk_Production;
    QGridLayout *gridLayout_5;
    QLabel *lbl_Category;
    QLabel *lbl_RiskDescription;
    QLabel *lbl_Hazard;
    QLabel *lbl_Impact;
    QComboBox *cbx_Aspect;
    QComboBox *cbx_Impact;
    QComboBox *cbx_Category;
    QPlainTextEdit *edt_RiskDescription;
    QGroupBox *gpb_RiskAssessment;
    QGridLayout *gridLayout_4;
    QGridLayout *glay_RiskAssessment;
    QHBoxLayout *hlay_RiskAssessment;
    QGroupBox *gpb_OperationalRisk;
    QGridLayout *gridLayout_6;
    QGridLayout *glay_OperationalRisk;
    QComboBox *cbx_Severity;
    QComboBox *cbx_Scale;
    QLabel *lbl_Duration;
    QLabel *lbl_Scale;
    QLabel *lbl_Probability;
    QComboBox *cbx_Duration;
    QLabel *lbl_RiskTotal;
    QLabel *lbl_Severity_2;
    QLabel *lbl_RiskClass;
    QComboBox *cbx_Frequency;
    QComboBox *cbx_Probability;
    QLabel *lbl_Severity;
    QLabel *lbl_RiskTotalValue;
    QLabel *lbl_RiskClassValue;
    QGroupBox *gpb_MacroRisk;
    QGridLayout *gridLayout_8;
    QGridLayout *glay_MacroRisk;
    QLabel *lbl_MacroProbability;
    QLabel *lbl_ImpactLevel;
    QLabel *lbl_ManagementArea;
    QLabel *lbl_MacroImpact;
    QComboBox *cbx_MacroImpact;
    QComboBox *cbx_MacroProbability;
    QLabel *lbl_MacroImpactValue;
    QLabel *lbl_MacroAreaValue;
    QGroupBox *gpb_RiskControls;
    QGridLayout *gridLayout_9;
    QGridLayout *glay_RiskControls;
    QLabel *lbl_HasProcedure;
    QLabel *lbl_RiskConsequence;
    QLineEdit *edt_RiskConsequence;
    QLabel *lbl_Procedures;
    QPlainTextEdit *edt_Procedures;
    QCheckBox *chk_HasProcedure;
    QGroupBox *gpb_RiskStrategy;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *vlay_RiskStrategy;
    QGridLayout *gridLayout_10;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *cbx_RiskStrategy;
    QLabel *lbl_RiskStrategy;
    QGridLayout *gridLayout_12;
    QLabel *lbl_ListMitigations;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_11;
    QLineEdit *edt_ActionDesc;
    QDateEdit *edt_ActionDate;
    QComboBox *cbx_ActionOwner;
    QPushButton *btn_AddAction;
    QColumnView *cview_RiskActions;
    QGroupBox *gpb_RiskApprovals;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *hlay_RiskApprovals;
    QGridLayout *glay_RiskApprovals;
    QSpacerItem *verticalSpacer_2;
    QComboBox *cbx_COManager;
    QLabel *lbl_RiskCOManager;
    QDateEdit *edt_RiskCODate;
    QLabel *lbl_RiskCompiler;
    QComboBox *cbx_RiskCompiler;
    QDateEdit *edt_RiskDate;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *glay_RiskTeam;
    QLabel *lbl_RiskTeam;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *vlay_RiskTeam;
    QPlainTextEdit *edt_RiskTeam;
    QGridLayout *gridLayout_14;
    QGridLayout *glay_Buttons;
    QPushButton *btn_Cancel;
    QPushButton *btn_SaveRisk;

    void setupUi(QDialog *frm_AddRisk)
    {
        if (frm_AddRisk->objectName().isEmpty())
            frm_AddRisk->setObjectName(QStringLiteral("frm_AddRisk"));
        frm_AddRisk->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frm_AddRisk->sizePolicy().hasHeightForWidth());
        frm_AddRisk->setSizePolicy(sizePolicy);
        frm_AddRisk->setMinimumSize(QSize(800, 600));
        frm_AddRisk->setMaximumSize(QSize(800, 600));
        vlay_Main_2 = new QVBoxLayout(frm_AddRisk);
        vlay_Main_2->setSpacing(10);
        vlay_Main_2->setObjectName(QStringLiteral("vlay_Main_2"));
        vlay_Main_2->setContentsMargins(0, 0, 0, 0);
        vlay_Main = new QVBoxLayout();
        vlay_Main->setSpacing(10);
        vlay_Main->setObjectName(QStringLiteral("vlay_Main"));
        vlay_Main->setSizeConstraint(QLayout::SetDefaultConstraint);
        vlay_Main->setContentsMargins(0, 0, 0, 0);
        scrl_MainContent = new QScrollArea(frm_AddRisk);
        scrl_MainContent->setObjectName(QStringLiteral("scrl_MainContent"));
        scrl_MainContent->setMinimumSize(QSize(0, 0));
        scrl_MainContent->setMaximumSize(QSize(800, 550));
        scrl_MainContent->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrl_MainContent->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrl_MainContent->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -1420, 775, 2083));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        vlay_Scrolll = new QVBoxLayout();
        vlay_Scrolll->setSpacing(10);
        vlay_Scrolll->setObjectName(QStringLiteral("vlay_Scrolll"));
        vlay_Scrolll->setSizeConstraint(QLayout::SetMinimumSize);
        vlay_Scrolll->setContentsMargins(5, 5, 5, 5);
        gpb_RiskInformation = new QGroupBox(scrollAreaWidgetContents);
        gpb_RiskInformation->setObjectName(QStringLiteral("gpb_RiskInformation"));
        gpb_RiskInformation->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gpb_RiskInformation->sizePolicy().hasHeightForWidth());
        gpb_RiskInformation->setSizePolicy(sizePolicy1);
        gpb_RiskInformation->setMinimumSize(QSize(0, 145));
        gpb_RiskInformation->setMaximumSize(QSize(16777215, 145));
        gridLayout_3 = new QGridLayout(gpb_RiskInformation);
        gridLayout_3->setSpacing(10);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        vlay_RiskInformation = new QVBoxLayout();
        vlay_RiskInformation->setSpacing(10);
        vlay_RiskInformation->setObjectName(QStringLiteral("vlay_RiskInformation"));
        vlay_RiskInformation->setContentsMargins(5, 5, 5, 5);
        glay_RiskNumber = new QGridLayout();
        glay_RiskNumber->setObjectName(QStringLiteral("glay_RiskNumber"));
        glay_RiskNumber->setSizeConstraint(QLayout::SetMinimumSize);
        glay_RiskNumber->setHorizontalSpacing(10);
        glay_RiskNumber->setVerticalSpacing(0);
        glay_RiskNumber->setContentsMargins(5, 5, 5, 5);
        edt_RiskActivity = new QLineEdit(gpb_RiskInformation);
        edt_RiskActivity->setObjectName(QStringLiteral("edt_RiskActivity"));
        edt_RiskActivity->setMinimumSize(QSize(0, 30));
        edt_RiskActivity->setMaximumSize(QSize(16777215, 30));

        glay_RiskNumber->addWidget(edt_RiskActivity, 0, 5, 1, 1);

        edt_RiskNumber = new QLineEdit(gpb_RiskInformation);
        edt_RiskNumber->setObjectName(QStringLiteral("edt_RiskNumber"));
        edt_RiskNumber->setMinimumSize(QSize(0, 30));
        edt_RiskNumber->setMaximumSize(QSize(16777215, 30));

        glay_RiskNumber->addWidget(edt_RiskNumber, 0, 1, 1, 1);

        edt_RiskPriority = new QLineEdit(gpb_RiskInformation);
        edt_RiskPriority->setObjectName(QStringLiteral("edt_RiskPriority"));
        edt_RiskPriority->setMinimumSize(QSize(0, 30));
        edt_RiskPriority->setMaximumSize(QSize(16777215, 30));

        glay_RiskNumber->addWidget(edt_RiskPriority, 0, 3, 1, 1);

        lbl_RiskActivity = new QLabel(gpb_RiskInformation);
        lbl_RiskActivity->setObjectName(QStringLiteral("lbl_RiskActivity"));
        lbl_RiskActivity->setMinimumSize(QSize(60, 30));
        lbl_RiskActivity->setMaximumSize(QSize(60, 30));

        glay_RiskNumber->addWidget(lbl_RiskActivity, 0, 4, 1, 1);

        lbl_RiskNumber = new QLabel(gpb_RiskInformation);
        lbl_RiskNumber->setObjectName(QStringLiteral("lbl_RiskNumber"));
        lbl_RiskNumber->setMinimumSize(QSize(100, 30));
        lbl_RiskNumber->setMaximumSize(QSize(100, 30));

        glay_RiskNumber->addWidget(lbl_RiskNumber, 0, 0, 1, 1);

        lbl_RiskPriority = new QLabel(gpb_RiskInformation);
        lbl_RiskPriority->setObjectName(QStringLiteral("lbl_RiskPriority"));
        lbl_RiskPriority->setMinimumSize(QSize(60, 30));
        lbl_RiskPriority->setMaximumSize(QSize(60, 30));

        glay_RiskNumber->addWidget(lbl_RiskPriority, 0, 2, 1, 1);


        vlay_RiskInformation->addLayout(glay_RiskNumber);

        glay_RiskTitle = new QGridLayout();
        glay_RiskTitle->setSpacing(10);
        glay_RiskTitle->setObjectName(QStringLiteral("glay_RiskTitle"));
        glay_RiskTitle->setSizeConstraint(QLayout::SetMinimumSize);
        glay_RiskTitle->setContentsMargins(5, 5, 5, 5);
        lbl_RiskTitle = new QLabel(gpb_RiskInformation);
        lbl_RiskTitle->setObjectName(QStringLiteral("lbl_RiskTitle"));
        lbl_RiskTitle->setMinimumSize(QSize(100, 30));
        lbl_RiskTitle->setMaximumSize(QSize(100, 30));

        glay_RiskTitle->addWidget(lbl_RiskTitle, 0, 0, 1, 1);

        edt_RiskTitle = new QPlainTextEdit(gpb_RiskInformation);
        edt_RiskTitle->setObjectName(QStringLiteral("edt_RiskTitle"));
        edt_RiskTitle->setMinimumSize(QSize(0, 60));
        edt_RiskTitle->setMaximumSize(QSize(16777215, 60));

        glay_RiskTitle->addWidget(edt_RiskTitle, 0, 1, 1, 1);


        vlay_RiskInformation->addLayout(glay_RiskTitle);


        gridLayout_3->addLayout(vlay_RiskInformation, 0, 0, 1, 1);


        vlay_Scrolll->addWidget(gpb_RiskInformation);

        gpb_RiskProfile = new QGroupBox(scrollAreaWidgetContents);
        gpb_RiskProfile->setObjectName(QStringLiteral("gpb_RiskProfile"));
        gpb_RiskProfile->setMinimumSize(QSize(0, 193));
        gpb_RiskProfile->setMaximumSize(QSize(16777215, 193));
        gpb_RiskProfile->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalLayout_5 = new QVBoxLayout(gpb_RiskProfile);
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        glay_RiskProfile = new QGridLayout();
        glay_RiskProfile->setSpacing(10);
        glay_RiskProfile->setObjectName(QStringLiteral("glay_RiskProfile"));
        glay_RiskProfile->setContentsMargins(5, 5, 5, 5);
        lbl_IssueRisk = new QLabel(gpb_RiskProfile);
        lbl_IssueRisk->setObjectName(QStringLiteral("lbl_IssueRisk"));
        lbl_IssueRisk->setMinimumSize(QSize(0, 30));
        lbl_IssueRisk->setMaximumSize(QSize(16777215, 30));
        lbl_IssueRisk->setWordWrap(true);

        glay_RiskProfile->addWidget(lbl_IssueRisk, 1, 0, 1, 1);

        rbtn_BusinessRisk = new QRadioButton(gpb_RiskProfile);
        rbtn_BusinessRisk->setObjectName(QStringLiteral("rbtn_BusinessRisk"));
        rbtn_BusinessRisk->setMinimumSize(QSize(230, 30));
        rbtn_BusinessRisk->setMaximumSize(QSize(230, 30));

        glay_RiskProfile->addWidget(rbtn_BusinessRisk, 0, 1, 1, 1);

        lbl_TaskRisk = new QLabel(gpb_RiskProfile);
        lbl_TaskRisk->setObjectName(QStringLiteral("lbl_TaskRisk"));
        lbl_TaskRisk->setMinimumSize(QSize(0, 30));
        lbl_TaskRisk->setMaximumSize(QSize(16777215, 30));
        lbl_TaskRisk->setWordWrap(true);

        glay_RiskProfile->addWidget(lbl_TaskRisk, 2, 0, 1, 1);

        lbl_BaselineRisk = new QLabel(gpb_RiskProfile);
        lbl_BaselineRisk->setObjectName(QStringLiteral("lbl_BaselineRisk"));
        lbl_BaselineRisk->setMinimumSize(QSize(0, 30));
        lbl_BaselineRisk->setMaximumSize(QSize(16777215, 30));
        lbl_BaselineRisk->setWordWrap(true);

        glay_RiskProfile->addWidget(lbl_BaselineRisk, 3, 0, 1, 1);

        rbtn_IssueRisk = new QRadioButton(gpb_RiskProfile);
        rbtn_IssueRisk->setObjectName(QStringLiteral("rbtn_IssueRisk"));
        rbtn_IssueRisk->setMinimumSize(QSize(230, 30));
        rbtn_IssueRisk->setMaximumSize(QSize(230, 30));

        glay_RiskProfile->addWidget(rbtn_IssueRisk, 1, 1, 1, 1);

        rbtn_TaskRisk = new QRadioButton(gpb_RiskProfile);
        rbtn_TaskRisk->setObjectName(QStringLiteral("rbtn_TaskRisk"));
        rbtn_TaskRisk->setMinimumSize(QSize(230, 30));
        rbtn_TaskRisk->setMaximumSize(QSize(230, 30));

        glay_RiskProfile->addWidget(rbtn_TaskRisk, 2, 1, 1, 1);

        rbtn_BaselineRisk = new QRadioButton(gpb_RiskProfile);
        rbtn_BaselineRisk->setObjectName(QStringLiteral("rbtn_BaselineRisk"));
        rbtn_BaselineRisk->setMinimumSize(QSize(230, 30));
        rbtn_BaselineRisk->setMaximumSize(QSize(230, 30));

        glay_RiskProfile->addWidget(rbtn_BaselineRisk, 3, 1, 1, 1);

        lbl_BusinessRisk = new QLabel(gpb_RiskProfile);
        lbl_BusinessRisk->setObjectName(QStringLiteral("lbl_BusinessRisk"));
        lbl_BusinessRisk->setMinimumSize(QSize(0, 30));
        lbl_BusinessRisk->setMaximumSize(QSize(16777215, 30));
        lbl_BusinessRisk->setWordWrap(true);

        glay_RiskProfile->addWidget(lbl_BusinessRisk, 0, 0, 1, 1);


        verticalLayout_5->addLayout(glay_RiskProfile);


        vlay_Scrolll->addWidget(gpb_RiskProfile);

        gpb_RiskStructure = new QGroupBox(scrollAreaWidgetContents);
        gpb_RiskStructure->setObjectName(QStringLiteral("gpb_RiskStructure"));
        gpb_RiskStructure->setMinimumSize(QSize(0, 275));
        gpb_RiskStructure->setMaximumSize(QSize(16777215, 275));
        verticalLayout_4 = new QVBoxLayout(gpb_RiskStructure);
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        vlay_RiskStructure = new QVBoxLayout();
        vlay_RiskStructure->setSpacing(10);
        vlay_RiskStructure->setObjectName(QStringLiteral("vlay_RiskStructure"));
        vlay_RiskStructure->setContentsMargins(5, 5, 5, 5);
        lbl_IdentifyStructure = new QLabel(gpb_RiskStructure);
        lbl_IdentifyStructure->setObjectName(QStringLiteral("lbl_IdentifyStructure"));
        lbl_IdentifyStructure->setMinimumSize(QSize(0, 30));
        lbl_IdentifyStructure->setMaximumSize(QSize(16777215, 30));

        vlay_RiskStructure->addWidget(lbl_IdentifyStructure);

        glay_RiskStructure = new QGridLayout();
        glay_RiskStructure->setSpacing(10);
        glay_RiskStructure->setObjectName(QStringLiteral("glay_RiskStructure"));
        glay_RiskStructure->setContentsMargins(0, 0, 0, 0);
        lbl_Department = new QLabel(gpb_RiskStructure);
        lbl_Department->setObjectName(QStringLiteral("lbl_Department"));
        lbl_Department->setMinimumSize(QSize(280, 30));
        lbl_Department->setMaximumSize(QSize(280, 30));

        glay_RiskStructure->addWidget(lbl_Department, 0, 0, 1, 1);

        lbl_Section = new QLabel(gpb_RiskStructure);
        lbl_Section->setObjectName(QStringLiteral("lbl_Section"));
        lbl_Section->setMinimumSize(QSize(280, 30));
        lbl_Section->setMaximumSize(QSize(280, 30));

        glay_RiskStructure->addWidget(lbl_Section, 2, 0, 1, 1);

        lbl_Task = new QLabel(gpb_RiskStructure);
        lbl_Task->setObjectName(QStringLiteral("lbl_Task"));
        lbl_Task->setMinimumSize(QSize(280, 30));
        lbl_Task->setMaximumSize(QSize(280, 30));

        glay_RiskStructure->addWidget(lbl_Task, 3, 0, 1, 1);

        lbl_Function = new QLabel(gpb_RiskStructure);
        lbl_Function->setObjectName(QStringLiteral("lbl_Function"));
        lbl_Function->setMinimumSize(QSize(280, 30));
        lbl_Function->setMaximumSize(QSize(280, 30));

        glay_RiskStructure->addWidget(lbl_Function, 1, 0, 1, 1);

        lbl_TaskStep = new QLabel(gpb_RiskStructure);
        lbl_TaskStep->setObjectName(QStringLiteral("lbl_TaskStep"));
        lbl_TaskStep->setMinimumSize(QSize(280, 30));
        lbl_TaskStep->setMaximumSize(QSize(280, 30));

        glay_RiskStructure->addWidget(lbl_TaskStep, 4, 0, 1, 1);

        cbx_Department = new QComboBox(gpb_RiskStructure);
        cbx_Department->setObjectName(QStringLiteral("cbx_Department"));
        cbx_Department->setMinimumSize(QSize(0, 30));
        cbx_Department->setMaximumSize(QSize(16777215, 30));

        glay_RiskStructure->addWidget(cbx_Department, 0, 1, 1, 1);

        cbx_Function = new QComboBox(gpb_RiskStructure);
        cbx_Function->setObjectName(QStringLiteral("cbx_Function"));
        cbx_Function->setMinimumSize(QSize(0, 30));
        cbx_Function->setMaximumSize(QSize(16777215, 30));

        glay_RiskStructure->addWidget(cbx_Function, 1, 1, 1, 1);

        cbx_Section = new QComboBox(gpb_RiskStructure);
        cbx_Section->setObjectName(QStringLiteral("cbx_Section"));
        cbx_Section->setMinimumSize(QSize(0, 30));
        cbx_Section->setMaximumSize(QSize(16777215, 30));

        glay_RiskStructure->addWidget(cbx_Section, 2, 1, 1, 1);

        cbx_Task = new QComboBox(gpb_RiskStructure);
        cbx_Task->setObjectName(QStringLiteral("cbx_Task"));
        cbx_Task->setMinimumSize(QSize(0, 30));
        cbx_Task->setMaximumSize(QSize(16777215, 30));

        glay_RiskStructure->addWidget(cbx_Task, 3, 1, 1, 1);

        cbx_TaskStep = new QComboBox(gpb_RiskStructure);
        cbx_TaskStep->setObjectName(QStringLiteral("cbx_TaskStep"));
        cbx_TaskStep->setMinimumSize(QSize(0, 30));
        cbx_TaskStep->setMaximumSize(QSize(16777215, 30));

        glay_RiskStructure->addWidget(cbx_TaskStep, 4, 1, 1, 1);


        vlay_RiskStructure->addLayout(glay_RiskStructure);


        verticalLayout_4->addLayout(vlay_RiskStructure);


        vlay_Scrolll->addWidget(gpb_RiskStructure);

        gpb_HazardIdentification = new QGroupBox(scrollAreaWidgetContents);
        gpb_HazardIdentification->setObjectName(QStringLiteral("gpb_HazardIdentification"));
        gpb_HazardIdentification->setMinimumSize(QSize(0, 105));
        gpb_HazardIdentification->setMaximumSize(QSize(16777215, 105));
        gridLayout_2 = new QGridLayout(gpb_HazardIdentification);
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        glay_HazardIdentification = new QGridLayout();
        glay_HazardIdentification->setSpacing(10);
        glay_HazardIdentification->setObjectName(QStringLiteral("glay_HazardIdentification"));
        glay_HazardIdentification->setContentsMargins(5, 5, 5, 5);
        lbl_Identification = new QLabel(gpb_HazardIdentification);
        lbl_Identification->setObjectName(QStringLiteral("lbl_Identification"));
        lbl_Identification->setMinimumSize(QSize(0, 30));
        lbl_Identification->setMaximumSize(QSize(16777215, 30));
        lbl_Identification->setWordWrap(true);

        glay_HazardIdentification->addWidget(lbl_Identification, 0, 0, 1, 1);

        cbx_Identification = new QComboBox(gpb_HazardIdentification);
        cbx_Identification->setObjectName(QStringLiteral("cbx_Identification"));
        cbx_Identification->setMinimumSize(QSize(0, 30));
        cbx_Identification->setMaximumSize(QSize(16777215, 30));

        glay_HazardIdentification->addWidget(cbx_Identification, 0, 1, 1, 1);

        lbl_Failure = new QLabel(gpb_HazardIdentification);
        lbl_Failure->setObjectName(QStringLiteral("lbl_Failure"));
        lbl_Failure->setMinimumSize(QSize(0, 30));
        lbl_Failure->setMaximumSize(QSize(16777215, 30));

        glay_HazardIdentification->addWidget(lbl_Failure, 1, 0, 1, 1);

        cbx_Failure = new QComboBox(gpb_HazardIdentification);
        cbx_Failure->setObjectName(QStringLiteral("cbx_Failure"));
        cbx_Failure->setMinimumSize(QSize(0, 30));
        cbx_Failure->setMaximumSize(QSize(16777215, 30));

        glay_HazardIdentification->addWidget(cbx_Failure, 1, 1, 1, 1);


        gridLayout_2->addLayout(glay_HazardIdentification, 0, 0, 1, 1);


        vlay_Scrolll->addWidget(gpb_HazardIdentification);

        gpb_RiskDescription = new QGroupBox(scrollAreaWidgetContents);
        gpb_RiskDescription->setObjectName(QStringLiteral("gpb_RiskDescription"));
        gpb_RiskDescription->setMinimumSize(QSize(0, 259));
        gpb_RiskDescription->setMaximumSize(QSize(16777215, 259));
        verticalLayout_2 = new QVBoxLayout(gpb_RiskDescription);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        vlay_RiskDescription = new QVBoxLayout();
        vlay_RiskDescription->setSpacing(10);
        vlay_RiskDescription->setObjectName(QStringLiteral("vlay_RiskDescription"));
        vlay_RiskDescription->setContentsMargins(5, 5, 5, 5);
        glay_ImpactOn = new QGridLayout();
        glay_ImpactOn->setSpacing(10);
        glay_ImpactOn->setObjectName(QStringLiteral("glay_ImpactOn"));
        lbl_ImpactOn = new QLabel(gpb_RiskDescription);
        lbl_ImpactOn->setObjectName(QStringLiteral("lbl_ImpactOn"));
        lbl_ImpactOn->setMinimumSize(QSize(120, 30));
        lbl_ImpactOn->setMaximumSize(QSize(120, 30));

        glay_ImpactOn->addWidget(lbl_ImpactOn, 0, 0, 1, 1);

        chb_Safety = new QCheckBox(gpb_RiskDescription);
        chb_Safety->setObjectName(QStringLiteral("chb_Safety"));
        chb_Safety->setMinimumSize(QSize(0, 30));
        chb_Safety->setMaximumSize(QSize(16777215, 30));

        glay_ImpactOn->addWidget(chb_Safety, 0, 1, 1, 1);

        chk_Health = new QCheckBox(gpb_RiskDescription);
        chk_Health->setObjectName(QStringLiteral("chk_Health"));
        chk_Health->setMinimumSize(QSize(0, 30));
        chk_Health->setMaximumSize(QSize(16777215, 30));

        glay_ImpactOn->addWidget(chk_Health, 0, 2, 1, 1);

        chk_Environmentt = new QCheckBox(gpb_RiskDescription);
        chk_Environmentt->setObjectName(QStringLiteral("chk_Environmentt"));
        chk_Environmentt->setMinimumSize(QSize(0, 30));
        chk_Environmentt->setMaximumSize(QSize(16777215, 30));

        glay_ImpactOn->addWidget(chk_Environmentt, 0, 3, 1, 1);

        chk_Production = new QCheckBox(gpb_RiskDescription);
        chk_Production->setObjectName(QStringLiteral("chk_Production"));
        chk_Production->setMinimumSize(QSize(0, 30));
        chk_Production->setMaximumSize(QSize(16777215, 30));

        glay_ImpactOn->addWidget(chk_Production, 0, 4, 1, 1);


        vlay_RiskDescription->addLayout(glay_ImpactOn);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(10);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        lbl_Category = new QLabel(gpb_RiskDescription);
        lbl_Category->setObjectName(QStringLiteral("lbl_Category"));
        lbl_Category->setMinimumSize(QSize(120, 30));
        lbl_Category->setMaximumSize(QSize(120, 30));

        gridLayout_5->addWidget(lbl_Category, 2, 0, 1, 1);

        lbl_RiskDescription = new QLabel(gpb_RiskDescription);
        lbl_RiskDescription->setObjectName(QStringLiteral("lbl_RiskDescription"));
        lbl_RiskDescription->setMinimumSize(QSize(120, 30));
        lbl_RiskDescription->setMaximumSize(QSize(120, 30));

        gridLayout_5->addWidget(lbl_RiskDescription, 3, 0, 1, 1);

        lbl_Hazard = new QLabel(gpb_RiskDescription);
        lbl_Hazard->setObjectName(QStringLiteral("lbl_Hazard"));
        lbl_Hazard->setMinimumSize(QSize(120, 30));
        lbl_Hazard->setMaximumSize(QSize(120, 30));

        gridLayout_5->addWidget(lbl_Hazard, 0, 0, 1, 1);

        lbl_Impact = new QLabel(gpb_RiskDescription);
        lbl_Impact->setObjectName(QStringLiteral("lbl_Impact"));
        lbl_Impact->setMinimumSize(QSize(120, 30));
        lbl_Impact->setMaximumSize(QSize(120, 30));

        gridLayout_5->addWidget(lbl_Impact, 1, 0, 1, 1);

        cbx_Aspect = new QComboBox(gpb_RiskDescription);
        cbx_Aspect->setObjectName(QStringLiteral("cbx_Aspect"));
        cbx_Aspect->setMinimumSize(QSize(0, 30));
        cbx_Aspect->setMaximumSize(QSize(16777215, 30));

        gridLayout_5->addWidget(cbx_Aspect, 0, 1, 1, 1);

        cbx_Impact = new QComboBox(gpb_RiskDescription);
        cbx_Impact->setObjectName(QStringLiteral("cbx_Impact"));
        cbx_Impact->setMinimumSize(QSize(0, 30));
        cbx_Impact->setMaximumSize(QSize(16777215, 30));

        gridLayout_5->addWidget(cbx_Impact, 1, 1, 1, 1);

        cbx_Category = new QComboBox(gpb_RiskDescription);
        cbx_Category->setObjectName(QStringLiteral("cbx_Category"));
        cbx_Category->setMinimumSize(QSize(0, 30));
        cbx_Category->setMaximumSize(QSize(16777215, 30));

        gridLayout_5->addWidget(cbx_Category, 2, 1, 1, 1);

        edt_RiskDescription = new QPlainTextEdit(gpb_RiskDescription);
        edt_RiskDescription->setObjectName(QStringLiteral("edt_RiskDescription"));
        edt_RiskDescription->setMinimumSize(QSize(0, 60));
        edt_RiskDescription->setMaximumSize(QSize(16777215, 60));

        gridLayout_5->addWidget(edt_RiskDescription, 3, 1, 1, 1);


        vlay_RiskDescription->addLayout(gridLayout_5);


        verticalLayout_2->addLayout(vlay_RiskDescription);


        vlay_Scrolll->addWidget(gpb_RiskDescription);

        gpb_RiskAssessment = new QGroupBox(scrollAreaWidgetContents);
        gpb_RiskAssessment->setObjectName(QStringLiteral("gpb_RiskAssessment"));
        gpb_RiskAssessment->setMinimumSize(QSize(0, 100));
        gridLayout_4 = new QGridLayout(gpb_RiskAssessment);
        gridLayout_4->setSpacing(10);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        glay_RiskAssessment = new QGridLayout();
        glay_RiskAssessment->setSpacing(10);
        glay_RiskAssessment->setObjectName(QStringLiteral("glay_RiskAssessment"));
        glay_RiskAssessment->setContentsMargins(5, 5, 5, 5);
        hlay_RiskAssessment = new QHBoxLayout();
        hlay_RiskAssessment->setSpacing(10);
        hlay_RiskAssessment->setObjectName(QStringLiteral("hlay_RiskAssessment"));
        gpb_OperationalRisk = new QGroupBox(gpb_RiskAssessment);
        gpb_OperationalRisk->setObjectName(QStringLiteral("gpb_OperationalRisk"));
        gridLayout_6 = new QGridLayout(gpb_OperationalRisk);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        glay_OperationalRisk = new QGridLayout();
        glay_OperationalRisk->setSpacing(10);
        glay_OperationalRisk->setObjectName(QStringLiteral("glay_OperationalRisk"));
        cbx_Severity = new QComboBox(gpb_OperationalRisk);
        cbx_Severity->setObjectName(QStringLiteral("cbx_Severity"));
        cbx_Severity->setMinimumSize(QSize(0, 30));
        cbx_Severity->setMaximumSize(QSize(16777215, 30));

        glay_OperationalRisk->addWidget(cbx_Severity, 3, 1, 1, 1);

        cbx_Scale = new QComboBox(gpb_OperationalRisk);
        cbx_Scale->setObjectName(QStringLiteral("cbx_Scale"));
        cbx_Scale->setMinimumSize(QSize(0, 30));
        cbx_Scale->setMaximumSize(QSize(16777215, 30));

        glay_OperationalRisk->addWidget(cbx_Scale, 0, 1, 1, 1);

        lbl_Duration = new QLabel(gpb_OperationalRisk);
        lbl_Duration->setObjectName(QStringLiteral("lbl_Duration"));
        lbl_Duration->setMinimumSize(QSize(60, 30));
        lbl_Duration->setMaximumSize(QSize(60, 30));

        glay_OperationalRisk->addWidget(lbl_Duration, 1, 0, 1, 1);

        lbl_Scale = new QLabel(gpb_OperationalRisk);
        lbl_Scale->setObjectName(QStringLiteral("lbl_Scale"));
        lbl_Scale->setMinimumSize(QSize(60, 30));
        lbl_Scale->setMaximumSize(QSize(60, 30));

        glay_OperationalRisk->addWidget(lbl_Scale, 0, 0, 1, 1);

        lbl_Probability = new QLabel(gpb_OperationalRisk);
        lbl_Probability->setObjectName(QStringLiteral("lbl_Probability"));
        lbl_Probability->setMinimumSize(QSize(60, 30));
        lbl_Probability->setMaximumSize(QSize(60, 30));

        glay_OperationalRisk->addWidget(lbl_Probability, 2, 0, 1, 1);

        cbx_Duration = new QComboBox(gpb_OperationalRisk);
        cbx_Duration->setObjectName(QStringLiteral("cbx_Duration"));
        cbx_Duration->setMinimumSize(QSize(0, 30));
        cbx_Duration->setMaximumSize(QSize(16777215, 30));

        glay_OperationalRisk->addWidget(cbx_Duration, 1, 1, 1, 1);

        lbl_RiskTotal = new QLabel(gpb_OperationalRisk);
        lbl_RiskTotal->setObjectName(QStringLiteral("lbl_RiskTotal"));
        lbl_RiskTotal->setMinimumSize(QSize(60, 30));
        lbl_RiskTotal->setMaximumSize(QSize(60, 30));

        glay_OperationalRisk->addWidget(lbl_RiskTotal, 0, 2, 1, 1);

        lbl_Severity_2 = new QLabel(gpb_OperationalRisk);
        lbl_Severity_2->setObjectName(QStringLiteral("lbl_Severity_2"));
        lbl_Severity_2->setMinimumSize(QSize(60, 30));
        lbl_Severity_2->setMaximumSize(QSize(60, 30));

        glay_OperationalRisk->addWidget(lbl_Severity_2, 4, 0, 1, 1);

        lbl_RiskClass = new QLabel(gpb_OperationalRisk);
        lbl_RiskClass->setObjectName(QStringLiteral("lbl_RiskClass"));
        lbl_RiskClass->setMinimumSize(QSize(60, 30));
        lbl_RiskClass->setMaximumSize(QSize(60, 30));

        glay_OperationalRisk->addWidget(lbl_RiskClass, 1, 2, 1, 1);

        cbx_Frequency = new QComboBox(gpb_OperationalRisk);
        cbx_Frequency->setObjectName(QStringLiteral("cbx_Frequency"));
        cbx_Frequency->setMinimumSize(QSize(0, 30));
        cbx_Frequency->setMaximumSize(QSize(16777215, 30));

        glay_OperationalRisk->addWidget(cbx_Frequency, 4, 1, 1, 1);

        cbx_Probability = new QComboBox(gpb_OperationalRisk);
        cbx_Probability->setObjectName(QStringLiteral("cbx_Probability"));
        cbx_Probability->setMinimumSize(QSize(0, 30));
        cbx_Probability->setMaximumSize(QSize(16777215, 30));

        glay_OperationalRisk->addWidget(cbx_Probability, 2, 1, 1, 1);

        lbl_Severity = new QLabel(gpb_OperationalRisk);
        lbl_Severity->setObjectName(QStringLiteral("lbl_Severity"));
        lbl_Severity->setMinimumSize(QSize(60, 30));
        lbl_Severity->setMaximumSize(QSize(60, 30));

        glay_OperationalRisk->addWidget(lbl_Severity, 3, 0, 1, 1);

        lbl_RiskTotalValue = new QLabel(gpb_OperationalRisk);
        lbl_RiskTotalValue->setObjectName(QStringLiteral("lbl_RiskTotalValue"));
        lbl_RiskTotalValue->setMinimumSize(QSize(60, 30));
        lbl_RiskTotalValue->setMaximumSize(QSize(60, 30));

        glay_OperationalRisk->addWidget(lbl_RiskTotalValue, 0, 3, 1, 1);

        lbl_RiskClassValue = new QLabel(gpb_OperationalRisk);
        lbl_RiskClassValue->setObjectName(QStringLiteral("lbl_RiskClassValue"));
        lbl_RiskClassValue->setMinimumSize(QSize(60, 30));
        lbl_RiskClassValue->setMaximumSize(QSize(60, 30));

        glay_OperationalRisk->addWidget(lbl_RiskClassValue, 1, 3, 1, 1);


        gridLayout_6->addLayout(glay_OperationalRisk, 0, 0, 1, 1);


        hlay_RiskAssessment->addWidget(gpb_OperationalRisk);

        gpb_MacroRisk = new QGroupBox(gpb_RiskAssessment);
        gpb_MacroRisk->setObjectName(QStringLiteral("gpb_MacroRisk"));
        gridLayout_8 = new QGridLayout(gpb_MacroRisk);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        glay_MacroRisk = new QGridLayout();
        glay_MacroRisk->setSpacing(10);
        glay_MacroRisk->setObjectName(QStringLiteral("glay_MacroRisk"));
        lbl_MacroProbability = new QLabel(gpb_MacroRisk);
        lbl_MacroProbability->setObjectName(QStringLiteral("lbl_MacroProbability"));
        lbl_MacroProbability->setMinimumSize(QSize(120, 30));
        lbl_MacroProbability->setMaximumSize(QSize(120, 30));

        glay_MacroRisk->addWidget(lbl_MacroProbability, 1, 0, 1, 1);

        lbl_ImpactLevel = new QLabel(gpb_MacroRisk);
        lbl_ImpactLevel->setObjectName(QStringLiteral("lbl_ImpactLevel"));
        lbl_ImpactLevel->setMinimumSize(QSize(120, 30));
        lbl_ImpactLevel->setMaximumSize(QSize(120, 30));

        glay_MacroRisk->addWidget(lbl_ImpactLevel, 2, 0, 1, 1);

        lbl_ManagementArea = new QLabel(gpb_MacroRisk);
        lbl_ManagementArea->setObjectName(QStringLiteral("lbl_ManagementArea"));
        lbl_ManagementArea->setMinimumSize(QSize(120, 30));
        lbl_ManagementArea->setMaximumSize(QSize(120, 30));

        glay_MacroRisk->addWidget(lbl_ManagementArea, 3, 0, 1, 1);

        lbl_MacroImpact = new QLabel(gpb_MacroRisk);
        lbl_MacroImpact->setObjectName(QStringLiteral("lbl_MacroImpact"));
        lbl_MacroImpact->setMinimumSize(QSize(120, 30));
        lbl_MacroImpact->setMaximumSize(QSize(120, 30));

        glay_MacroRisk->addWidget(lbl_MacroImpact, 0, 0, 1, 1);

        cbx_MacroImpact = new QComboBox(gpb_MacroRisk);
        cbx_MacroImpact->setObjectName(QStringLiteral("cbx_MacroImpact"));
        cbx_MacroImpact->setMinimumSize(QSize(0, 30));
        cbx_MacroImpact->setMaximumSize(QSize(16777215, 30));

        glay_MacroRisk->addWidget(cbx_MacroImpact, 0, 1, 1, 1);

        cbx_MacroProbability = new QComboBox(gpb_MacroRisk);
        cbx_MacroProbability->setObjectName(QStringLiteral("cbx_MacroProbability"));
        cbx_MacroProbability->setMinimumSize(QSize(0, 30));
        cbx_MacroProbability->setMaximumSize(QSize(16777215, 30));

        glay_MacroRisk->addWidget(cbx_MacroProbability, 1, 1, 1, 1);

        lbl_MacroImpactValue = new QLabel(gpb_MacroRisk);
        lbl_MacroImpactValue->setObjectName(QStringLiteral("lbl_MacroImpactValue"));
        lbl_MacroImpactValue->setMinimumSize(QSize(0, 30));
        lbl_MacroImpactValue->setMaximumSize(QSize(16777215, 30));
        lbl_MacroImpactValue->setWordWrap(true);

        glay_MacroRisk->addWidget(lbl_MacroImpactValue, 2, 1, 1, 1);

        lbl_MacroAreaValue = new QLabel(gpb_MacroRisk);
        lbl_MacroAreaValue->setObjectName(QStringLiteral("lbl_MacroAreaValue"));
        lbl_MacroAreaValue->setMinimumSize(QSize(0, 30));
        lbl_MacroAreaValue->setMaximumSize(QSize(16777215, 30));
        lbl_MacroAreaValue->setWordWrap(true);

        glay_MacroRisk->addWidget(lbl_MacroAreaValue, 3, 1, 1, 1);


        gridLayout_8->addLayout(glay_MacroRisk, 0, 0, 1, 1);


        hlay_RiskAssessment->addWidget(gpb_MacroRisk);


        glay_RiskAssessment->addLayout(hlay_RiskAssessment, 0, 0, 1, 1);


        gridLayout_4->addLayout(glay_RiskAssessment, 0, 0, 1, 1);


        vlay_Scrolll->addWidget(gpb_RiskAssessment);

        gpb_RiskControls = new QGroupBox(scrollAreaWidgetContents);
        gpb_RiskControls->setObjectName(QStringLiteral("gpb_RiskControls"));
        gpb_RiskControls->setMinimumSize(QSize(0, 208));
        gpb_RiskControls->setMaximumSize(QSize(16777215, 208));
        gridLayout_9 = new QGridLayout(gpb_RiskControls);
        gridLayout_9->setSpacing(10);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        glay_RiskControls = new QGridLayout();
        glay_RiskControls->setSpacing(10);
        glay_RiskControls->setObjectName(QStringLiteral("glay_RiskControls"));
        glay_RiskControls->setContentsMargins(5, 5, 5, 5);
        lbl_HasProcedure = new QLabel(gpb_RiskControls);
        lbl_HasProcedure->setObjectName(QStringLiteral("lbl_HasProcedure"));
        lbl_HasProcedure->setMinimumSize(QSize(220, 30));
        lbl_HasProcedure->setMaximumSize(QSize(220, 30));

        glay_RiskControls->addWidget(lbl_HasProcedure, 1, 0, 1, 1);

        lbl_RiskConsequence = new QLabel(gpb_RiskControls);
        lbl_RiskConsequence->setObjectName(QStringLiteral("lbl_RiskConsequence"));
        lbl_RiskConsequence->setMinimumSize(QSize(220, 30));
        lbl_RiskConsequence->setMaximumSize(QSize(220, 30));

        glay_RiskControls->addWidget(lbl_RiskConsequence, 0, 0, 1, 1);

        edt_RiskConsequence = new QLineEdit(gpb_RiskControls);
        edt_RiskConsequence->setObjectName(QStringLiteral("edt_RiskConsequence"));
        edt_RiskConsequence->setMinimumSize(QSize(0, 30));
        edt_RiskConsequence->setMaximumSize(QSize(16777215, 30));

        glay_RiskControls->addWidget(edt_RiskConsequence, 0, 1, 1, 1);

        lbl_Procedures = new QLabel(gpb_RiskControls);
        lbl_Procedures->setObjectName(QStringLiteral("lbl_Procedures"));
        lbl_Procedures->setMinimumSize(QSize(220, 30));
        lbl_Procedures->setMaximumSize(QSize(220, 30));

        glay_RiskControls->addWidget(lbl_Procedures, 2, 0, 1, 1);

        edt_Procedures = new QPlainTextEdit(gpb_RiskControls);
        edt_Procedures->setObjectName(QStringLiteral("edt_Procedures"));
        edt_Procedures->setMinimumSize(QSize(0, 100));
        edt_Procedures->setMaximumSize(QSize(16777215, 100));

        glay_RiskControls->addWidget(edt_Procedures, 2, 1, 1, 1);

        chk_HasProcedure = new QCheckBox(gpb_RiskControls);
        chk_HasProcedure->setObjectName(QStringLiteral("chk_HasProcedure"));
        chk_HasProcedure->setMinimumSize(QSize(0, 30));
        chk_HasProcedure->setMaximumSize(QSize(16777215, 30));

        glay_RiskControls->addWidget(chk_HasProcedure, 1, 1, 1, 1);


        gridLayout_9->addLayout(glay_RiskControls, 0, 0, 1, 1);


        vlay_Scrolll->addWidget(gpb_RiskControls);

        gpb_RiskStrategy = new QGroupBox(scrollAreaWidgetContents);
        gpb_RiskStrategy->setObjectName(QStringLiteral("gpb_RiskStrategy"));
        gpb_RiskStrategy->setMinimumSize(QSize(0, 304));
        gpb_RiskStrategy->setMaximumSize(QSize(16777215, 304));
        verticalLayout_6 = new QVBoxLayout(gpb_RiskStrategy);
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        vlay_RiskStrategy = new QVBoxLayout();
        vlay_RiskStrategy->setSpacing(10);
        vlay_RiskStrategy->setObjectName(QStringLiteral("vlay_RiskStrategy"));
        vlay_RiskStrategy->setContentsMargins(5, 5, 5, 5);
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(10);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        cbx_RiskStrategy = new QComboBox(gpb_RiskStrategy);
        cbx_RiskStrategy->setObjectName(QStringLiteral("cbx_RiskStrategy"));
        cbx_RiskStrategy->setMinimumSize(QSize(200, 30));
        cbx_RiskStrategy->setMaximumSize(QSize(200, 30));

        gridLayout_10->addWidget(cbx_RiskStrategy, 0, 1, 1, 1);

        lbl_RiskStrategy = new QLabel(gpb_RiskStrategy);
        lbl_RiskStrategy->setObjectName(QStringLiteral("lbl_RiskStrategy"));
        lbl_RiskStrategy->setMinimumSize(QSize(100, 30));
        lbl_RiskStrategy->setMaximumSize(QSize(100, 30));

        gridLayout_10->addWidget(lbl_RiskStrategy, 0, 0, 1, 1);


        vlay_RiskStrategy->addLayout(gridLayout_10);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        lbl_ListMitigations = new QLabel(gpb_RiskStrategy);
        lbl_ListMitigations->setObjectName(QStringLiteral("lbl_ListMitigations"));
        lbl_ListMitigations->setMinimumSize(QSize(500, 30));
        lbl_ListMitigations->setMaximumSize(QSize(500, 30));
        lbl_ListMitigations->setWordWrap(true);

        gridLayout_12->addWidget(lbl_ListMitigations, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer, 0, 1, 1, 1);


        vlay_RiskStrategy->addLayout(gridLayout_12);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(10);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        edt_ActionDesc = new QLineEdit(gpb_RiskStrategy);
        edt_ActionDesc->setObjectName(QStringLiteral("edt_ActionDesc"));
        edt_ActionDesc->setMinimumSize(QSize(0, 30));
        edt_ActionDesc->setMaximumSize(QSize(16777215, 30));

        gridLayout_11->addWidget(edt_ActionDesc, 0, 0, 1, 1);

        edt_ActionDate = new QDateEdit(gpb_RiskStrategy);
        edt_ActionDate->setObjectName(QStringLiteral("edt_ActionDate"));
        edt_ActionDate->setMinimumSize(QSize(100, 30));
        edt_ActionDate->setMaximumSize(QSize(100, 30));
        edt_ActionDate->setCalendarPopup(true);

        gridLayout_11->addWidget(edt_ActionDate, 0, 2, 1, 1);

        cbx_ActionOwner = new QComboBox(gpb_RiskStrategy);
        cbx_ActionOwner->setObjectName(QStringLiteral("cbx_ActionOwner"));
        cbx_ActionOwner->setMinimumSize(QSize(200, 30));
        cbx_ActionOwner->setMaximumSize(QSize(200, 30));

        gridLayout_11->addWidget(cbx_ActionOwner, 0, 1, 1, 1);

        btn_AddAction = new QPushButton(gpb_RiskStrategy);
        btn_AddAction->setObjectName(QStringLiteral("btn_AddAction"));
        btn_AddAction->setMinimumSize(QSize(80, 30));
        btn_AddAction->setMaximumSize(QSize(80, 30));

        gridLayout_11->addWidget(btn_AddAction, 0, 3, 1, 1);


        vlay_RiskStrategy->addLayout(gridLayout_11);

        cview_RiskActions = new QColumnView(gpb_RiskStrategy);
        cview_RiskActions->setObjectName(QStringLiteral("cview_RiskActions"));
        cview_RiskActions->setMinimumSize(QSize(0, 150));
        cview_RiskActions->setMaximumSize(QSize(16777215, 150));

        vlay_RiskStrategy->addWidget(cview_RiskActions);


        verticalLayout_6->addLayout(vlay_RiskStrategy);


        vlay_Scrolll->addWidget(gpb_RiskStrategy);

        gpb_RiskApprovals = new QGroupBox(scrollAreaWidgetContents);
        gpb_RiskApprovals->setObjectName(QStringLiteral("gpb_RiskApprovals"));
        gpb_RiskApprovals->setMinimumSize(QSize(0, 220));
        gpb_RiskApprovals->setMaximumSize(QSize(16777215, 220));
        horizontalLayout_3 = new QHBoxLayout(gpb_RiskApprovals);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        hlay_RiskApprovals = new QHBoxLayout();
        hlay_RiskApprovals->setObjectName(QStringLiteral("hlay_RiskApprovals"));
        glay_RiskApprovals = new QGridLayout();
        glay_RiskApprovals->setSpacing(10);
        glay_RiskApprovals->setObjectName(QStringLiteral("glay_RiskApprovals"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        glay_RiskApprovals->addItem(verticalSpacer_2, 2, 2, 1, 1);

        cbx_COManager = new QComboBox(gpb_RiskApprovals);
        cbx_COManager->setObjectName(QStringLiteral("cbx_COManager"));
        cbx_COManager->setMinimumSize(QSize(0, 30));
        cbx_COManager->setMaximumSize(QSize(16777215, 30));

        glay_RiskApprovals->addWidget(cbx_COManager, 1, 1, 1, 1);

        lbl_RiskCOManager = new QLabel(gpb_RiskApprovals);
        lbl_RiskCOManager->setObjectName(QStringLiteral("lbl_RiskCOManager"));
        lbl_RiskCOManager->setMinimumSize(QSize(120, 30));
        lbl_RiskCOManager->setMaximumSize(QSize(120, 30));

        glay_RiskApprovals->addWidget(lbl_RiskCOManager, 1, 0, 1, 1);

        edt_RiskCODate = new QDateEdit(gpb_RiskApprovals);
        edt_RiskCODate->setObjectName(QStringLiteral("edt_RiskCODate"));
        edt_RiskCODate->setMinimumSize(QSize(100, 30));
        edt_RiskCODate->setMaximumSize(QSize(100, 30));
        edt_RiskCODate->setCalendarPopup(true);

        glay_RiskApprovals->addWidget(edt_RiskCODate, 1, 2, 1, 1);

        lbl_RiskCompiler = new QLabel(gpb_RiskApprovals);
        lbl_RiskCompiler->setObjectName(QStringLiteral("lbl_RiskCompiler"));
        lbl_RiskCompiler->setMinimumSize(QSize(120, 30));
        lbl_RiskCompiler->setMaximumSize(QSize(120, 30));

        glay_RiskApprovals->addWidget(lbl_RiskCompiler, 0, 0, 1, 1);

        cbx_RiskCompiler = new QComboBox(gpb_RiskApprovals);
        cbx_RiskCompiler->setObjectName(QStringLiteral("cbx_RiskCompiler"));
        cbx_RiskCompiler->setMinimumSize(QSize(200, 30));
        cbx_RiskCompiler->setMaximumSize(QSize(16777215, 30));

        glay_RiskApprovals->addWidget(cbx_RiskCompiler, 0, 1, 1, 1);

        edt_RiskDate = new QDateEdit(gpb_RiskApprovals);
        edt_RiskDate->setObjectName(QStringLiteral("edt_RiskDate"));
        edt_RiskDate->setMinimumSize(QSize(100, 30));
        edt_RiskDate->setMaximumSize(QSize(100, 30));
        edt_RiskDate->setCalendarPopup(true);

        glay_RiskApprovals->addWidget(edt_RiskDate, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        glay_RiskApprovals->addItem(verticalSpacer, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        glay_RiskApprovals->addItem(verticalSpacer_3, 2, 0, 1, 1);


        hlay_RiskApprovals->addLayout(glay_RiskApprovals);


        horizontalLayout_3->addLayout(hlay_RiskApprovals);

        glay_RiskTeam = new QGridLayout();
        glay_RiskTeam->setObjectName(QStringLiteral("glay_RiskTeam"));
        lbl_RiskTeam = new QLabel(gpb_RiskApprovals);
        lbl_RiskTeam->setObjectName(QStringLiteral("lbl_RiskTeam"));
        lbl_RiskTeam->setMinimumSize(QSize(65, 30));
        lbl_RiskTeam->setMaximumSize(QSize(65, 30));

        glay_RiskTeam->addWidget(lbl_RiskTeam, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        glay_RiskTeam->addItem(verticalSpacer_4, 1, 0, 1, 1);


        horizontalLayout_3->addLayout(glay_RiskTeam);

        vlay_RiskTeam = new QVBoxLayout();
        vlay_RiskTeam->setObjectName(QStringLiteral("vlay_RiskTeam"));
        edt_RiskTeam = new QPlainTextEdit(gpb_RiskApprovals);
        edt_RiskTeam->setObjectName(QStringLiteral("edt_RiskTeam"));
        edt_RiskTeam->setMinimumSize(QSize(0, 200));
        edt_RiskTeam->setMaximumSize(QSize(16777215, 200));

        vlay_RiskTeam->addWidget(edt_RiskTeam);


        horizontalLayout_3->addLayout(vlay_RiskTeam);


        vlay_Scrolll->addWidget(gpb_RiskApprovals);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));

        vlay_Scrolll->addLayout(gridLayout_14);


        verticalLayout_3->addLayout(vlay_Scrolll);

        scrl_MainContent->setWidget(scrollAreaWidgetContents);

        vlay_Main->addWidget(scrl_MainContent);

        glay_Buttons = new QGridLayout();
        glay_Buttons->setSpacing(10);
        glay_Buttons->setObjectName(QStringLiteral("glay_Buttons"));
        btn_Cancel = new QPushButton(frm_AddRisk);
        btn_Cancel->setObjectName(QStringLiteral("btn_Cancel"));
        btn_Cancel->setMinimumSize(QSize(100, 30));
        btn_Cancel->setMaximumSize(QSize(100, 30));

        glay_Buttons->addWidget(btn_Cancel, 0, 0, 1, 1);

        btn_SaveRisk = new QPushButton(frm_AddRisk);
        btn_SaveRisk->setObjectName(QStringLiteral("btn_SaveRisk"));
        btn_SaveRisk->setMinimumSize(QSize(100, 30));
        btn_SaveRisk->setMaximumSize(QSize(100, 30));

        glay_Buttons->addWidget(btn_SaveRisk, 0, 1, 1, 1);


        vlay_Main->addLayout(glay_Buttons);


        vlay_Main_2->addLayout(vlay_Main);


        retranslateUi(frm_AddRisk);

        QMetaObject::connectSlotsByName(frm_AddRisk);
    } // setupUi

    void retranslateUi(QDialog *frm_AddRisk)
    {
        frm_AddRisk->setWindowTitle(QApplication::translate("frm_AddRisk", "Add Risk", nullptr));
        gpb_RiskInformation->setTitle(QApplication::translate("frm_AddRisk", "Risk Information", nullptr));
        lbl_RiskActivity->setText(QApplication::translate("frm_AddRisk", "Activity", nullptr));
        lbl_RiskNumber->setText(QApplication::translate("frm_AddRisk", "Risk Number", nullptr));
        lbl_RiskPriority->setText(QApplication::translate("frm_AddRisk", "Priority", nullptr));
        lbl_RiskTitle->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>Risk Title</p></body></html>", nullptr));
        gpb_RiskProfile->setTitle(QApplication::translate("frm_AddRisk", "Risk Profile Identification", nullptr));
        lbl_IssueRisk->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>Is the risk you are identifying forming part of a specific survey or field of expertise, e.g. health survey, hazardous chemical survey, fire risk assessment?</p></body></html>", nullptr));
        rbtn_BusinessRisk->setText(QApplication::translate("frm_AddRisk", "Business Risk Profile", nullptr));
        lbl_TaskRisk->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>Is the risk you are identifying originating from a specific task/job being performed?</p></body></html>", nullptr));
        lbl_BaselineRisk->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>Is the risk you are identifying originating from the workplace, conditions in and around the workplace and/or the surrounding environment?</p></body></html>", nullptr));
        rbtn_IssueRisk->setText(QApplication::translate("frm_AddRisk", "Issue Based Risk Profile", nullptr));
        rbtn_TaskRisk->setText(QApplication::translate("frm_AddRisk", "Task Risk Profile", nullptr));
        rbtn_BaselineRisk->setText(QApplication::translate("frm_AddRisk", "Operational Baseline Risk Profile", nullptr));
        lbl_BusinessRisk->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>Is the risk you are identifying having an impact on business objectives?</p></body></html>", nullptr));
        gpb_RiskStructure->setTitle(QApplication::translate("frm_AddRisk", "Risk Management Structure", nullptr));
        lbl_IdentifyStructure->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>Identify the area and task (if task is applicable) where the risk is originating</p></body></html>", nullptr));
        lbl_Department->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>Department</p></body></html>", nullptr));
        lbl_Section->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>Section</p></body></html>", nullptr));
        lbl_Task->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>Activity/Task/Product/Place</p></body></html>", nullptr));
        lbl_Function->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>Function</p></body></html>", nullptr));
        lbl_TaskStep->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>Task Step (Only if Task Risk Profile is selected)</p></body></html>", nullptr));
        gpb_HazardIdentification->setTitle(QApplication::translate("frm_AddRisk", "Hazard Identification", nullptr));
        lbl_Identification->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>Is the risk originating from an input, output or control failure in the activity, process or place?</p></body></html>", nullptr));
        lbl_Failure->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>Select the relevant input, output or control failure</p></body></html>", nullptr));
        gpb_RiskDescription->setTitle(QApplication::translate("frm_AddRisk", "Risk Description", nullptr));
        lbl_ImpactOn->setText(QApplication::translate("frm_AddRisk", "Impact on", nullptr));
        chb_Safety->setText(QApplication::translate("frm_AddRisk", "Safety", nullptr));
        chk_Health->setText(QApplication::translate("frm_AddRisk", "Health", nullptr));
        chk_Environmentt->setText(QApplication::translate("frm_AddRisk", "Environment", nullptr));
        chk_Production->setText(QApplication::translate("frm_AddRisk", "Production", nullptr));
        lbl_Category->setText(QApplication::translate("frm_AddRisk", "Hazard Category", nullptr));
        lbl_RiskDescription->setText(QApplication::translate("frm_AddRisk", "Risk Description", nullptr));
        lbl_Hazard->setText(QApplication::translate("frm_AddRisk", "Aspect/Hazard", nullptr));
        lbl_Impact->setText(QApplication::translate("frm_AddRisk", "Impact/Risk", nullptr));
        gpb_RiskAssessment->setTitle(QApplication::translate("frm_AddRisk", "Risk Assessment", nullptr));
        gpb_OperationalRisk->setTitle(QApplication::translate("frm_AddRisk", "Operational Risk Quantification", nullptr));
        lbl_Duration->setText(QApplication::translate("frm_AddRisk", "Duration", nullptr));
        lbl_Scale->setText(QApplication::translate("frm_AddRisk", "Scale", nullptr));
        lbl_Probability->setText(QApplication::translate("frm_AddRisk", "Probability", nullptr));
        lbl_RiskTotal->setText(QApplication::translate("frm_AddRisk", "Risk Total", nullptr));
        lbl_Severity_2->setText(QApplication::translate("frm_AddRisk", "Frequency", nullptr));
        lbl_RiskClass->setText(QApplication::translate("frm_AddRisk", "Risk Class", nullptr));
        lbl_Severity->setText(QApplication::translate("frm_AddRisk", "Severity", nullptr));
        lbl_RiskTotalValue->setText(QApplication::translate("frm_AddRisk", "TextLabel", nullptr));
        lbl_RiskClassValue->setText(QApplication::translate("frm_AddRisk", "TextLabel", nullptr));
        gpb_MacroRisk->setTitle(QApplication::translate("frm_AddRisk", "Macro Risk Quantification", nullptr));
        lbl_MacroProbability->setText(QApplication::translate("frm_AddRisk", "Probability", nullptr));
        lbl_ImpactLevel->setText(QApplication::translate("frm_AddRisk", "Impact Level", nullptr));
        lbl_ManagementArea->setText(QApplication::translate("frm_AddRisk", "Management Area", nullptr));
        lbl_MacroImpact->setText(QApplication::translate("frm_AddRisk", "Impact", nullptr));
        lbl_MacroImpactValue->setText(QApplication::translate("frm_AddRisk", "TextLabel", nullptr));
        lbl_MacroAreaValue->setText(QApplication::translate("frm_AddRisk", "TextLabel", nullptr));
        gpb_RiskControls->setTitle(QApplication::translate("frm_AddRisk", "Risk Consequences and Existing Controls", nullptr));
        lbl_HasProcedure->setText(QApplication::translate("frm_AddRisk", "Procedure/s in place to mitigate risk?", nullptr));
        lbl_RiskConsequence->setText(QApplication::translate("frm_AddRisk", "Risk Consequence", nullptr));
        lbl_Procedures->setText(QApplication::translate("frm_AddRisk", "Procedure number/s", nullptr));
        chk_HasProcedure->setText(QString());
        gpb_RiskStrategy->setTitle(QApplication::translate("frm_AddRisk", "Risk Management Strategy", nullptr));
        lbl_RiskStrategy->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>Strategy</p></body></html>", nullptr));
        lbl_ListMitigations->setText(QApplication::translate("frm_AddRisk", "<html><head/><body><p>List all mitigation/corrective actions/additional controls</p></body></html>", nullptr));
        btn_AddAction->setText(QApplication::translate("frm_AddRisk", "Add", nullptr));
        gpb_RiskApprovals->setTitle(QApplication::translate("frm_AddRisk", "Risk Approval and Team", nullptr));
        lbl_RiskCOManager->setText(QApplication::translate("frm_AddRisk", "Close Out Manager", nullptr));
        lbl_RiskCompiler->setText(QApplication::translate("frm_AddRisk", "Risk Compiler", nullptr));
        lbl_RiskTeam->setText(QApplication::translate("frm_AddRisk", "Risk Team", nullptr));
        btn_Cancel->setText(QApplication::translate("frm_AddRisk", "Cancel", nullptr));
        btn_SaveRisk->setText(QApplication::translate("frm_AddRisk", "Save Risk", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frm_AddRisk: public Ui_frm_AddRisk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRM_ADDRISK_H
