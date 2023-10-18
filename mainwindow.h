#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//------------------------------------------------------------------------------
//основное окно, отрисовываем крату кампуса, с помощью которой можно выбарть
// корппус, при наличии выбранного корпуса, отрисуем схему (вид  сверзу)
//------------------------------------------------------------------------------
#include <QMainWindow>
#include "vars.h"
//------------------------------------------------------------------------------
namespace Ui {
class MainWindow;
}
//------------------------------------------------------------------------------
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    TMap CurrentMap;

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void LoadBuildParams();

    void resizeEvent(QResizeEvent *event);
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    //void mouseReleaseEvent(QMouseEvent *event) override;


private slots:
    void ShowPoint(TMapPoint point);
    void FindPoint(QString name);


    void on_toolButton_return_clicked();
    void on_toolButton_Search_clicked(bool checked);

    void on_pushButton_Search_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
