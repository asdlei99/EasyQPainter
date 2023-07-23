#pragma once
#include <QWidget>
#include <QImage>
#include <QComboBox>
#include <QTimer>

// 图片绘制相关
// 有趣的链接：
// https://www.cnblogs.com/aslistener/articles/4478303.html
// https://www.cnblogs.com/swarmbees/p/5722882.html
// https://blog.csdn.net/u013015629/article/details/54669608
class BasicImage : public QWidget
{
    Q_OBJECT
public:
    explicit BasicImage(QWidget *parent = nullptr);

protected:
    // 显示时才启动定时动画
    void showEvent(QShowEvent *event) override;
    void hideEvent(QHideEvent *event) override;
    // 绘制
    void paintEvent(QPaintEvent *event) override;

private:
    // 定时器动画
    QTimer timer;
    int timeOffset{0};
    // 待绘制的图 - 荷花 200*200
    QImage imgCache;
    // 遮罩样式 - 心形 100*100
    QImage maskCache;
};
