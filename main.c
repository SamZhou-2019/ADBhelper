#include <stdio.h>
#include <stdlib.h>

int main() {
    int envi();
    int intro();
    int usage();

    system("cls");
    printf("******************\n* ADBhelper v1.0 *\n******************\n\n\n");
    printf("������������adbhelperҲ�ɽ���ó���(�����û������������ÿ�ִ���ļ�������adbĿ¼��.)\n");
    printf("ADB���(i��I)\n");
    printf("����adb���������ķ���(n��N)\n");
    printf("�����÷�(u��U)\n");
    printf("����cmd��������(c��C)\n");
    printf("����adb shell(s��S,�����û�������)\n");
    printf("�˳�����(e��E)\n");
    printf("\n\n��������Ҫ���еĲ�����Ӧ�Ĵ���:");

    char c, d;
    c = getchar();
    d = getchar();
    /*�����Ƿ�ֹ�س���������ַ��㷴���³������*/
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
        printf("\a�������!�밴�س������½������.");
        getchar();
        main();
    }
    return 0;
}
