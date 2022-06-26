# EasyQPainter 
Various operation practices of Qt QPainer.（Qt QPainter 的各种操作实践）
I named this demo "What is QPainer".（我给这个 Demo 命名为 "何为 QPainter"）
> QQ 交流群：647637553

# Environment （开发环境）
（2022-06-26）Win10 64bit + Qt5.15.2/Qt6.4.0 + MSVC2019 64bit

# Note  (备注)
### version compatible（版本兼容 2022-06-26）
There might be some incompatibility between different QT version header directives, please adjust includes based on your QT SDK version. 
版本之间可能有些接口不兼容，或者头文件变动，请自行调整。
> 如：低版本升级到 Qt5.15 上需要显式引入 QPainterPath；QWheelEvent pos() 需改用 position()，delta() 需改用 angleDelta()；QFontMetrics width() 需改用 horizontalAdvance() 等...

### code refactoring（重构代码 2021-10-23）
Because a new interface needs to be added, the directory is reorganized and partially reconstructed. The old code is branched in v1.0.0.
由于需要增加新的界面，所以重新组织目录，并进行部分重构，原来的代码在 v1.0.0 分支。

# Demo Show （展示）

![2021-12-26](img/demo/1.png)

![2021-12-26](img/demo/2.png)

![2021-12-26](img/demo/3.png)

![2021-12-26](img/demo/4.png)

![2021-12-26](img/demo/5.png)

![2021-12-26](img/demo/6.png)

![2021-12-26](img/demo/7.png)

![2021-12-26](img/demo/8.png)

![2021-12-26](img/demo/9.png)

![2021-12-26](img/demo/10.png)
