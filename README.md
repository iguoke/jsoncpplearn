一.JSON
	特点
		是存储和交换文本信息的语法，类似XML
		比XML更小/更快/更易解析
		独立于语言
		与javascript对象格式相同
		具有自我描述性
		具有层级结构
	语法规则
		数据在名称/值对中
		数据由逗号分隔
		大括号保存对象
		中括号保存数组
	名称：字段（双引号）
	值：
		数字（整数或者浮点数）
		字符串
		逻辑值
		数组（[]），非键值对
		对象（{}）
		null

		
	 文件：
		文件类型是".json"
		MIME类型是"pplication/json"
	json对象和json字符串的区别:
		对象：var str2={"name":"susan","sex":"man"};
		字符串：var str1='{"name":"susan","sex":"man"}';
	JsonNP

二.JsonCpp
	Json::Value
		可以表示所有json类型（int double，string，object，array）
		类型判断（isNULL，isInt...）
		类型获取（type）
		节点获取（[])
		节点比较
		节点操作
	Json::Reader
		将文本流或者字符串流解析到Json::Value
		主要使用parse函数
		可自定义Features	
	Json::Writer
		将Json::Value转换成字符流
		是虚类	

	centos安装python3.6
		https://blog.csdn.net/hobohero/article/details/54381475
		安装python3.6可能使用的依赖 
		# yum install openssl-devel bzip2-devel expat-devel gdbm-devel readline-devel sqlite-devel

		下载python3.6编译安装
		到python官网下载https://www.python.org
		下载最新版源码，使用make altinstall，如果使用make install，在系统中将会有两个不同版本的Python在/usr/bin/目录中。这将会导致很多问题，而且不好处理。
		# wgethttps://www.python.org/ftp/python/3.6.0/Python-3.6.0.tgz
		# tar -xzvf Python-3.6.0.tgz -C  /tmp
		# cd  /tmp/Python-3.6.0/
		把Python3.6安装到 /usr/local 目录
		# ./configure --prefix=/usr/local
		# make
		# make altinstall

		python3.6程序的执行文件：/usr/local/bin/python3.6
		python3.6应用程序目录：/usr/local/lib/python3.6
		pip3的执行文件：/usr/local/bin/pip3.6
		pyenv3的执行文件：/usr/local/bin/pyenv-3.6

		更改/usr/bin/python链接
		# cd/usr/bin
		# mv  python python.backup
		# ln -s /usr/local/bin/python3.6 /usr/bin/python
		# ln -s /usr/local/bin/python3.6 /usr/bin/python3

		更改yum脚本的python依赖
		# cd /usr/bin
		# ls yum*
		yum yum-config-manager yum-debug-restore yum-groups-manager
		yum-builddep yum-debug-dump yumdownloader
		更改以上文件头为
		#!/usr/bin/python 改为 #!/usr/bin/python2

		修改gnome-tweak-tool配置文件
		# vi /usr/bin/gnome-tweak-tool
		#!/usr/bin/python 改为 #!/usr/bin/python2

		修改urlgrabber配置文件
		# vi /usr/libexec/urlgrabber-ext-down
		#!/usr/bin/python 改为 #!/usr/bin/python2
	centos7 安装jsoncpp
		centos7 安装jsoncpp
		https://blog.csdn.net/u013720726/article/details/70308040

		    需要预先安装的工具
		    scons——用于编译jsoncpp
		    下载jsoncpp，网址如下
		    https://sourceforge.net/projects/jsoncpp/
		    解压缩tar -zxvf jsoncpp-src-0.5.0.tar.gz
		    编译#scons platform=linux-gcc
		    安装成功
		    在jsoncpp/libs/linux-gcc-x.x.x下有一个静态文件和一个动态文件，则编译成功，把这两个库拷贝的相应的位置就可以使用。

	测试jsoncpp静态库
		可将 libjson_linux-gcc-4.4.7_libmt.a 和 libjson_linux-gcc-4.4.7_libmt.so 拷贝到/usr/lib下，
		本文选择了静态库库文件，将解压后的文件夹下的INCLUDE中的头文件拷贝到/usr/include/json下
		代码如test.cpp和Makefile
		




	
