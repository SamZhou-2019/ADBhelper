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
    printf("Android ������ (adb) ��һ�ֹ��ܶ����������й��ߣ����������豸����ͨ�š�\n");
    printf("adb �������ִ�и����豸���������簲װ�͵���Ӧ�ã������ṩ�� Unix shell�����������豸�����и�������ķ���Ȩ�ޡ�\n");
    printf("����һ�ֿͻ���-���������򣬰����������������\n\n");
    printf("1.�ͻ��ˣ����ڷ�������ͻ����ڿ�������������С�������ͨ������ adb ������������ն˵��ÿͻ��ˡ�\n");
    printf("2.�ػ����� (adbd)�����豸����������ػ�������ÿ���豸����Ϊ��̨�������С�\n");
    printf("3.������������ͻ��˺��ػ�����֮���ͨ�š��������ڿ������������Ϊ��̨�������С�\n\n");
    printf("����a����ϸ��Ϣ(��վ),����e�˳�����,���������ַ��������˵�:");

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