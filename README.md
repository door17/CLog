===============


------------


------------
```C++
CLog::startup("");
CLog::setLogger(CLog::kCout);
CLog::debug("%s go go go!\n", CLog::getTime());
/// ...
```

```C++
CLog::startup("applog.ini");
CLog::debug("%s go go go!\n", CLog::getTime());
/// ...
```

------------
```
[CLog]
Enabled=1
Level=all
; all, debug, info, warning, error, fatal

[Console]
Enabled=0
Format=time

[Debug]
Enabled=1
Format=time

[Syslog]
Enabled=1
Format=

[File]
Enabled=1
FileName=app.log
MaxSize=8M
RollCount=4
Format=datetime
```
