# TestNDK
参照：  
1. http://blog.csdn.net/panda1234lee/article/details/51763010  
2. http://blog.csdn.net/sbsujjbcy/article/details/48469569  


遇到的问题：  
1. 没法根据MyNDK的Java类自动创建.c文件，是手动拷贝过去的。  
2. UI无法使用Api24绘制出来，会弹出错误提示;使用Api23则能正常显示。  
3. 修改app的build.gradle文件时，是需要把depends块从model块中提出的，否则编译不过。  
