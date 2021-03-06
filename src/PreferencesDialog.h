#ifndef __PREFERENCESDIALOG_H__
#define __PREFERENCESDIALOG_H__

#include <QDialog>

namespace Ui {
class PreferencesDialog;
}

class PreferencesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PreferencesDialog(QWidget* parent = 0);
    ~PreferencesDialog();

    QString defaulttext;
    QString defaultlocation;
    QString defaultnewdata;
    QString defaultencoding;
    bool foreignkeys;

private slots:
    virtual void defaultDataChanged( int which );
    virtual void defaultTextChanged( int which );
    virtual void encodingChanged( int which );
    virtual void foreignkeysStateChanged( int state );
    virtual void chooseLocation();
    virtual void loadSettings();
    virtual void saveSettings();

private:
    Ui::PreferencesDialog *ui;
};

#endif
