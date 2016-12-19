# MongoUtilClass
--------------------

Handing data with MongoDB using mongo-c-driver.

利用mongo-c-driver操作MongoDB数据库。


## 1 Introduction
MongoUtilClass提供基本的MongoDB数据库操作，特别是关于栅格数据的读取、拼接等。

MongoUtilClass可单独调试，也可作为其他项目的基础类。

## 2 Install mongo-c-driver

### On Windows
+ Windows开发环境推荐采用Microsoft Visual Studio 2010 或更高
+ 从[官网](http://mongoc.org/ "mongo-c-driver-download")下载源码压缩包，目前最新稳定版本为[1.5.0](https://github.com/mongodb/mongo-c-driver/releases/download/1.5.0/mongo-c-driver-1.5.0.tar.gz "mongo-c-driver-1.5.0")，解压缩至当前文件夹，如`C:\z_code\Repos\mongo-c-driver-1.5.0`
+ 打开cmd，依次输入如下命令，默认的安装目录为`C:\mongo-c-driver`
```bat
cd C:\
mkdir mongo-c-driver
cd C:\z_code\Repos\mongo-c-driver-1.5.0
cd src\libbson
cmake -DCMAKE_INSTALL_PREFIX=C:\mongo-c-driver -G "Visual Studio 10 2010"
msbuild.exe ALL_BUILD.vcxproj
msbuild.exe INSTALL.vcxproj
cd ..\..
cmake -DCMAKE_INSTALL_PREFIX=C:\mongo-c-driver -DBSON_ROOT_DIR=C:\mongo-c-driver -G "Visual Studio 10 2010"
msbuild.exe ALL_BUILD.vcxproj
msbuild.exe INSTALL.vcxproj
```

+ 至此，`mongo-c-driver`即编译安装完成了，在`C:\mongo-c-driver`目录下能看到`bin`, `include`, `lib`文件夹。
+ 随后将`C:\mongo-c-driver`添加至环境变量，命名为`MONGOC_DIR`。

> Note: 如果cmd提示找不到msbuild.exe，可以在msbuild.exe前加上绝对路径，这个文件是.NetFramework里的，比如`C:\Windows\Microsoft.NET\Framework64\v4.0.30319\msbuild.exe`

### On Linux

### On macOS

## 3 MongoUtilClass测试
MongoUtilClass采用CMake进行跨平台编译。

### Windows


