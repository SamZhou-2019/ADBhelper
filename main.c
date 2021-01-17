#include <stdio.h>
#include <stdlib.h>

int main() {
    int envi();
    int intro();
    int usage();

    system("cls");
    printf("******************\n* ADBhelper v1.0 *\n******************\n\n\n");
    printf("在命令行输入adbhelper也可进入该程序(需配置环境变量并将该可执行文件放置在adb目录下.)\n");
    printf("ADB简介(i或I)\n");
    printf("配置adb环境变量的方法(n或N)\n");
    printf("常用用法(u或U)\n");
    printf("进入cmd输入命令(c或C)\n");
    printf("进入adb shell(s或S,需配置环境变量)\n");
    printf("退出程序(e或E)\n");
    printf("\n\n请输入需要进行的操作对应的代码:");

    char c, d;
    c = getchar();
    d = getchar();
    /*这里是防止回车和输入的字符搞反导致程序错误*/
    if (c == '\n')
        c = d;
    if (c == 'n' || c == 'N')
        envi();
    else if (c == 'i' || c == 'I')
        intro();
    else if (c == 's' || c == 'S') {
        system("cls");
        system("adb shell");
    } else if (c == 'c' || c == 'C') {
        system("cls");
        system("cmd");
    } else if (c == 'u' || c == 'U')
        usage();
    else if (c == 'e' || c == 'E')
        exit(0);
    else {
        printf("\a输入错误!请按回车键重新进入程序.");
        getchar();
        main();
    }
    return 0;
}
