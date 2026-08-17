#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QDebug>  // 一定要加这个，否则 qDebug 可能报错

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("我的C++窗口");
    window.resize(400, 300);

    // 创建一个布局管理器
    QVBoxLayout *layout = new QVBoxLayout(&window);

    QPushButton button("点击我", &window);
    button.move(150, 120);  // 这行其实可以删掉，因为用了布局

    // 连接信号槽
    QObject::connect(&button, &QPushButton::clicked, []() {
        qDebug() << "按钮被点击了！";
    });

    // 把按钮加入布局（推荐方式，自动居中/对齐）
    layout->addWidget(&button);

    window.show();
    return app.exec();
}
