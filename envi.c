//
// Created by lenovo on 2021/1/17.
//
#include <stdio.h>
#include <stdlib.h>

int envi() /*environment*/
{
    char c, d;
    system("cls");
    printf("�������adb����������\n");

    printf("1.�������->ϵͳ->�߼�ϵͳ����\n");
    printf("2.������߼�ϵͳ���á�������ϵͳ���Եĵ���\n");
    printf("3.����������������������������������½�һ��ϵͳ������������ΪAndroid������ֵΪadb��������Ŀ¼\n\n\n");

    printf("/*����[�߼�ϵͳ����]����*/\n");
    printf("************************************************\n");
    printf("*ϵͳ����       ----                         x *\n");
    printf("*�������*Ӳ��*|�߼�|*ϵͳ����*Զ��*           *\n");
    printf("**Ҫ���д�����޸�,��������Ϊ����Ա��¼.      **\n");
    printf("......\n");
    printf("**                                [��������]  **\n");
    printf("*                          ȷ��   ȡ��   Ӧ��  *\n");
    printf("************************************************\n\n\n");

    printf("����b�������˵�,����e�˳�����,���������ַ�������һҳ:");
    c = getchar();
    d = getchar();
    /*�����Ƿ�ֹ�س���������ַ��㷴���³������*/
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

        printf("/*����[��������]����*/\n");
        printf("************************************************\n");
        printf("*��������                                    x *\n");
        printf("***(�û���)���û�����(U)                     ***\n");
        printf("*****����        |ֵ                       *****\n");
        printf("......\n");
        printf("***                      �½�  �༭  ɾ��    ***\n");
        printf("***ϵͳ����(S)                     ***\n");
        printf("*****����        |ֵ                       *****\n");
        printf("......\n");
        printf("***                      �½�  �༭  ɾ��    ***\n");
        printf("*                              ȷ��  ȡ��      *\n");
        printf("************************************************\n\n\n");

        printf("4.��ϵͳ�������ҵ�PATH���༭һ�£���Path�ı���ֵ�мӣ�\n%%Android%%\nȷ������\n");
        printf("5.��֤�Ƿ����óɹ���win+R ,���������У�cmd���س������� adb.\n\n\n");
        printf("����p������һҳ,����e�˳�����,���������ַ��������˵�:");
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