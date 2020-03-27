> 本文主要记录编程小白如何利用 Anaconda 和 Pycharm 安装 Python 开发环境，以及 Pycharm 的基本用法。预计阅读时间 15min.

## 全文框架

![全文框架](image\编程小白安装Python开发环境及Pycharm的基本用法.png)

## 前言

俗话说工欲善其事必先利其器，好的开发环境可以大大提高我们的效率。对于 Python 的开发，网上有各种各样的 IDE 选择以及教程。对于老手来说哪个用的顺手、高效就选择哪个，但是对于新手往往不知道如何选择。

个人的想法是，对于新手而言，`语言的学习是第一位的`，所以在我们是编程小白时，我们的主要精力是`专注于语言的学习`，而不应该被各种各样的开发环境问题打击我们的自信心，导致出师不利。随着语言学习的入门，后期我们可以再多折腾开发环境，选择适合自己的即可。

因此本人推荐 Python 初学者采用 `Anaconda + Pycharm`来进行学习 Python。
Anaconda 虽然臃肿庞大，但也正因为如此，初学者可以直接拿来用，省去很多安装上的麻烦，它是很多数据科学研究者的首选。Pycharm 有强大的补全功能、高效的 debug 等，是一款强大的 Python 开发 IDE(Integrated Development Environment, 集成开发环境)，更重要的是它对于学生有教育版(和专业版一样)，只要一个学校邮箱即可免费使用。当然网上也有各种各样的破解码也可以使用。
接下来我们就将介绍 Windows 10 下 Anaconda 和 Pycharm 的安装以及 Pycharm 的基本用法。

## Anaconda 的安装

Anaconda 是一个开源的 Python 发行版本，其包含了 conda、Python 等非常多的科学包及其依赖项。Conda 是一个开源的包、环境管理器，可以跨平台，轻松管理各种包和环境。

### Anaconda 下载安装

可以直接到[Anaconda 官网](https://www.anaconda.com/distribution/)下载，因为我是 64 位的 Windows10，所以我选择了 `Anaconda 2020.02 for Windows Installer - Python 3.7 version - 64-Bit Graphical Installer (466 MB)` 这个最新版本。大家根据自己操作系统位数选择 32 或者 64 。此外 Python 版本推荐选择 Python3.7 版本，因为 Python2 已经停止维护，Python3 是大势所趋。下载需要花一点时间，喝杯水，耐心等待即可。

双击安装包 --> Next --> I Agree --> 选择 `Just me`, 点击 Next --> 安装路径选择，默认即可，点击 Next --> Advanced Options, 默认即可，第一个不勾选，点击 Install --> 漫长等待后 completed，点击 Next --> Anaconda+ JetBrains，这里提示推荐安装 Pycharm，我们先点击 Next，后面再安装 Pycharm --> 点击 Finish 完成安装，那两个勾可以取消。

### 为 Anaconda 添加环境变量

Windows 10 在  `控制面板\系统和安全\系统\高级系统设置\环境变量\用户变量\PATH`  中添加一下 Scripts、anaconda 和 bin 这 3 个目录文件，  看个人安装路径不同，自己调整。我的路径是：\
 `C:\Users\Jock\anaconda3\Scripts`\
 `C:\Users\Jock\anaconda3`\
 `C:\Users\Jock\anaconda3\Library\bin`\
 这三个都要添加到环境变量中，否则 conda 和 pip 的使用可能会出现问题，具体查看[pip is configured with locations that require TLS/SSL](https://stackoverflow.com/questions/45954528/pip-is-configured-with-locations-that-require-tls-ssl-however-the-ssl-module-in)。

### Anaconda 测试

快捷键 win+R 输入 cmd 打开命令行窗口，在窗口中做如下测试，如果跟我一样，说明成功了。

```python
Microsoft Windows [版本 10.0.18363.657]
(c) 2019 Microsoft Corporation。保留所有权利。

C:\Users\Jock>conda --version
conda 4.8.3
C:\Users\Jock>conda upgrade --all
Collecting package metadata (current_repodata.json): done
Solving environment: done
```

`conda --version` 是为了查看 conda 的版本，`conda upgrade --all` 是为了把所有工具包进行升级，避免后面可能发生的错误。

初学者有关 Anaconda 的基本使用大家还可以看看这篇博客[Anaconda 详细安装及使用教程（带图文）](https://blog.csdn.net/ITLearnHall/article/details/81708148)，后期大家如果还遇到什么问题，直接 Google 或者到官方文档查看即可，如果觉得一开始英语不好，可以先到中文的知乎、CSDN、博客园等查找解决办法。

如果新手觉得图文还是看不太懂，那么到 B 站上面找一个比较新同时播放量高一些的 Python 开发环境搭建视频，跟着视频一步一步来，也是一个不错的选择。

## Pycharm 的安装

Pycharm 是 Python 非常优秀的 IDE，带有一整套可以帮助用户在使用 Python 语言开发时，提高其效率的工具，比如调试、语法高亮、Project 管理、 代码跳转、智能提示、自动完成、单元测试、版本控制。此外，该 IDE 提供了一些高级功能，以用于支持 Django 框架下的专业 Web 开发。

英文好的同学，直接移步[官方 Pycharm 教程](https://www.jetbrains.com/help/pycharm/installation-guide.html)，按照教程一步步来即可。

下载 Pycharm 直接到[Pycharm 官方网站下载](https://www.jetbrains.com/pycharm/download)，这里也需要耐心等待。我下载的是最新的 Windows 专业版`pycharm-professional-2019.3.4` 。推荐下载专业版本，至于如果不是学生，那么网上找个破解激活码也是很容易的。因为我还是学生，所以用的学校邮箱注册了账号，直接用专业版。

双击安装包 --> Next --> 安装路径默认即可，Next --> `Installation Options` 四个都勾选上，点击 Next --> I want to reboot later，点击 Finish。

## Pycharm 的使用

双击 Pycharm 图标，提示是否导入 `settings`，由于是初次安装使用 Pycharm，所以我们选择，`Do not import settings`，点击 `OK`即可。以后我们换电脑使用 Pycharm，直接导入原来的 `setting` 文件即可，免去重复配置。

然后是设置 Pycharm UI Theme，这里推荐用黑暗系 Darcula，护眼一些。点击 `Skip Remaining and Set Defaults`。

专业版会进入登录界面，学生的话登录自己的账号和密码即可，这里需要注册验证的自行到[官网注册认证](https://account.jetbrains.com/login)，这里速度很慢，最好科学上网。

### 开始你的第一个项目

Pycharm 中最基本的是新建项目，配置项目的解释器，这里提一下，`Python 鼓励为每一个项目单独创建一个虚拟环境`，再在项目中新建 Python file，在文件中写源代码，接着运行、调试代码。

即：Create New Project --> 配置项目名称和解释器 --> 右击鼠标 new --> python file --> 写入代码 --> 右击 run

这部分详细的图文操作，大家可以参看官方教程[Step 1. Create and run your first Python project](https://www.jetbrains.com/help/pycharm/creating-and-running-your-first-python-project.html)，或者[Windows10-2020-Anaconda 与 PyCharm 的安装](https://blog.csdn.net/Btbsja/article/details/104235424)，这位博主写的很详细，他用的是 base 环境，没有使用虚拟环境，初学者刚开始使用 base 环境足够，涉及更复杂的项目管理时再考虑虚拟环境即可。

### Pycharm 的基本使用

1. 使用 PyCharm 安装 Python 第三方模块：file --> Settings --> Project:当前项目名 --> Project Interpreter --> 点击右侧小加号
2. 设置菜单字体大小: file --> Settings --> Appearance&Behavior --> Appearance
3. 设置 Console&Terminal 字体大小颜色: file --> Settings --> Editor --> Color Scheme --> Console Font/Console Colors
4. 设置文件编码：file --> Settings --> Editor --> File Encodings IDE Encoding; Project Encoding;Properties Files 都设置为 UTF-8
5. 修改背景颜色： file --> Settings --> Editor --> Color Scheme --> General --> Text 下面选中 Default text --> 修改 Background 颜色即可
6. 此外还可以在 `file --> Settings --> Editor --> Color Scheme`设置 Python 源代码中各种注释、关键字的颜色等等，不过一般采用默认的即可，除非自己有一套符合自己审美的样式。
7. 脚本头设置：file --> Settings --> Editor --> File and Code Templates --> Python Script，可以设置 Python 文件模板，比如添加文件创建时间、作者、用途等。
8. 导出、导入你自定义的 Pycharm 配置： File --> Export Settings / Import Settings
9. PyCharm 安装插件：file --> Settings --> Plugins
10. 常用快捷键的查询和配置：file --> Settings --> Keymap

| 快捷键              | 描述                                   |
| ------------------- | -------------------------------------- |
| Ctrl + D            | 复制当前行                             |
| Ctrl + E            | 删除当前行                             |
| Shift + Enter       | 快速换行                               |
| Ctrl + /            | 快速注释（选中多行后可以批量注释）     |
| Tab                 | 缩进当前行（选中多行后可以批量缩进）   |
| Shift + Tab         | 取消缩进（选中多行后可以批量取消缩进） |
| Ctrl + F            | 查找                                   |
| Ctrl + H          | 替换                                   |
| Ctrl + 减号         | 折叠当前代码块|
Ctrl + 加号             | 展开当前代码块 |
| Ctrl + Shift + 减号 | 折叠当前文件|
|Ctrl + Shift + 加号      | 展开当前文件 |

更多的 Pycharm 教程推荐学习[Pycharm 官方文档](https://confluence.jetbrains.com/display/PYH/PyCharm+Tutorials)，这部分日后有需求了再去查找学习即可，刚开始入门期间不用看那么多。

## 后记

学习之路漫漫，问题总是如影随形，遇到问题，遇到问题保持乐观的心态，不要轻言放弃。多去思考问题出现的原因所在，善于利用搜索解决问题，你学习过程中遇到的 99.9% 的问题，别人也一定遇到过。

此外，目前非常流行的 VSCode 也很适合 Python 开发，等以后用到了，再更新一篇利用 VSCode 搭建 Python 开发环境。

接下来我将开始更新 Python 语言基础的学习笔记，目的是掌握 Python 的基础语法，为后续的 Python 爬虫和 Python Web 开发做准备。

如果我的笔记对你有所帮助，欢迎关注我的微信公众号。这个公众号主要是慢慢分享和记录自己学习编程的笔记，比如：C，Python，Java 等，后续也会分享自己面试以及在职场上的成长心得。
![在这里插入图片描述](https://img-blog.csdnimg.cn/20200220230253314.jpg)
