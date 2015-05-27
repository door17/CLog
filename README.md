CLog
===============
CLog 是一个C++轻量级日志组件。
 

特性
------------
* 输出到控制台、文件、syslog、windows debug
* 文件输出可以设置循环数和文件最大值
* 自定义输出
* 级别过滤
* 同时输出到多个目的地
* 配置文件
* 可选的长、短时间格式


实例
------------
* 用法一（代码配置）
```C++
CLog::startup("");
CLog::setLogger(CLog::kCout);
CLog::setLogger(CLog::kFile); /// 使用默认文件输出参数
CLog::debug("%s go go go!\n", CLog::getTime());
/// ...
CLog::cleanup(); /// 程序退出前调用
```

* 用法二（文件配置）
```C++
CLog::startup("applog.ini");
CLog::debug("%s go go go!\n", CLog::getTime());
/// ...
CLog::cleanup(); /// 程序退出前调用
```

配置文件
------------
```
[CLog]
; 日志总开关
Enabled=1
Level=all
; all, debug, info, warning, error, fatal

[Console]
; 输出到控制台
Enabled=0
Format=time

[Debug]
; 输出到Debug窗口，可以用DbgView查看
Enabled=1
Format=time

[Syslog]
; 输出到系统日志
Enabled=1
Format=

[File]
; 输出到文件
Enabled=1
; 文件名
FileName=app.log
; 日志文件最大字节数
MaxSize=8M
; 循环文件个数
RollCount=4
Format=datetime
```
