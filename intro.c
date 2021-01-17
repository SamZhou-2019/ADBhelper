//
// Created by lenovo on 2021/1/17.
//
#include <stdio.h>
#include <stdlib.h>

int intro() /*introduction*/
{
    system("cls");
    char c, d;

    printf("ADB\n\n");
    printf("Android 调试桥 (adb) 是一种功能多样的命令行工具，可让您与设备进行通信。\n");
    printf("adb 命令便于执行各种设备操作（例如安装和调试应用），并提供对 Unix shell（可用来在设备上运行各种命令）的访问权限。\n");
    printf("它是一种客户端-服务器程序，包括以下三个组件：\n\n");
    printf("1.客户端：用于发送命令。客户端在开发计算机上运行。您可以通过发出 adb 命令从命令行终端调用客户端。\n");
    printf("2.守护进程 (adbd)：在设备上运行命令。守护进程在每个设备上作为后台进程运行。\n");
    printf("3.服务器：管理客户端和守护进程之间的通信。服务器在开发计算机上作为后台进程运行。\n\n");
    printf("输入a打开详细信息(网站),输入e退出程序,输入其他字符返回主菜单:");

    c = getchar();
    d = getchar();
    if (c == '\n')
        c = d;
    int main();
    if (c == 'a')
    {
        system("start https://developer.android.google.cn/studio/command-line/adb");
        main();
    }
    else if (c == 'e')
        exit(0);
    else
        main();
}