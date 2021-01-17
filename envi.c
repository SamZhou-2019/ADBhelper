//
// Created by lenovo on 2021/1/17.
//
#include <stdio.h>
#include <stdlib.h>

int envi() /*environment*/
{
    char c, d;
    system("cls");
    printf("如何配置adb环境变量？\n");

    printf("1.控制面板->系统->高级系统设置\n");
    printf("2.点击【高级系统设置】，弹出系统属性的弹框\n");
    printf("3.点击【环境变量】，弹出环境变量弹框，新建一个系统变量，变量名为Android；变量值为adb程序所在目录\n\n\n");

    printf("/*这是[高级系统设置]窗口*/\n");
    printf("************************************************\n");
    printf("*系统属性       ----                         x *\n");
    printf("*计算机名*硬件*|高级|*系统保护*远程*           *\n");
    printf("**要进行大多数修改,您必须作为管理员登录.      **\n");
    printf("......\n");
    printf("**                                [环境变量]  **\n");
    printf("*                          确定   取消   应用  *\n");
    printf("************************************************\n\n\n");

    printf("输入b返回主菜单,输入e退出程序,输入其他字符进入下一页:");
    c = getchar();
    d = getchar();
    /*这里是防止回车和输入的字符搞反导致程序错误*/
    if (c == '\n')
        c = d;
    int main();
    if (c == 'b')
        main();
    else if (c == 'e')
        exit(0);

    else
    {
        system("cls");

        printf("/*这是[环境变量]窗口*/\n");
        printf("************************************************\n");
        printf("*环境变量                                    x *\n");
        printf("***(用户名)的用户变量(U)                     ***\n");
        printf("*****变量        |值                       *****\n");
        printf("......\n");
        printf("***                      新建  编辑  删除    ***\n");
        printf("***系统变量(S)                     ***\n");
        printf("*****变量        |值                       *****\n");
        printf("......\n");
        printf("***                      新建  编辑  删除    ***\n");
        printf("*                              确定  取消      *\n");
        printf("************************************************\n\n\n");

        printf("4.在系统变量中找到PATH，编辑一下，在Path的变量值中加：\n%%Android%%\n确定即可\n");
        printf("5.验证是否设置成功：win+R ,进入命令行，cmd，回车。输入 adb.\n\n\n");
        printf("输入p进入上一页,输入e退出程序,输入其他字符返回主菜单:");
        c = getchar();
        d = getchar();
        if (c == '\n')
            c = d;
        if (c == 'p')
            envi();
        else if (c == 'e')
            exit(0);
        else
            main();
    }
}