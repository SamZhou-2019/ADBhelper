//
// Created by lenovo on 2021/1/17.
//
#include <stdio.h>
#include <stdlib.h>

int usage()
{
    char i, j;
    int main();
    system("cls");

    printf("a.�豸  b.Ӧ��  c.ϵͳ  d.������һҳ  e.�˳�");
    printf("\n\n��������Ҫ���еĲ�����Ӧ�Ĵ���:\n");
    i = getchar();
    j = getchar();
    if (i == '\n')
        i = j;
    system("cls");

    switch (i)
    {
        case 'a':
        {
            printf("adb devices                                         �оٵ�ǰ���ӵ��豸\n");
            printf("adb start-server                                    ��������\n");
            printf("adb kill-server                                     ֹͣ����\n");
            printf("adb pull (�豸Ŀ¼) (����Ŀ¼)                         �����ļ�\n");
            printf("adb push (����Ŀ¼) (�豸Ŀ¼)                         �����ļ�\n");
            printf("adb shell                                           ����shell����\n");
            printf("adb shell input keyevent (code)                     ģ�ⰴ��\n");
            printf("\t3-home 4-back 5-����Ӧ�� 6-�Ҷϵ绰 26-��Դ 64-����� 82-�˵� 85-����/��ͣ\n\t86-ֹͣ���� 164-���� 176-������ 207-����ϵ�� 208-������ 209-������ 220-�������� 221-�������\n");
            printf("\t223-ϵͳ���� 224-������Ļ 231-�������� 61-Tab 67-Backspace 92-PageUp 93-PageDown 112-Delete\n\t122-Home 123-End\n");
            printf("adb shell screencap (Ŀ¼)                          ��ͼ�����浽ָ��Ŀ¼\n");
            printf("adb shell screenrecord (Ŀ¼)                       ¼�������浽ָ��Ŀ¼\n");
            printf("adb shell wm size                                   ��ʾ�ֱ���(���WxH�޸ķֱ���,W,HΪ����)\n");
            printf("adb shell am display-size WxH                       �ı�ֱ���ΪWxH\n");
            printf("adb shell getprop ro.sf.lcd_density                 ��Ļ�ܶ�\n");
            printf("adb shell wm density                                ��Ļ�ܶ�(����������޸ķֱ���,��λΪdpi)\n");
            printf("adb shell wm overscan l,u,r,d                       ��Ļ��ʾ�������,l,u,r,d�ֱ�Ϊ�ĸ����ֱַ�Ϊ��������\n");
            printf("adb shell getprop ro.product.model                  �鿴�豸��Ϣ\n");
            printf("adb shell getprop ro.build.version.release          �鿴��׿�汾��Ϣ\n");
            printf("adb shell getprop ro.build.version.sdk              �鿴SDK�汾��Ϣ\n");
            printf("adb shell getprop ro.product.brand                  �鿴�豸Ʒ����Ϣ\n");
            printf("adb shell getprop ro.product.name                   �豸��\n");
            printf("adb shell getprop ro.product.board                  �������ͺ�\n");
            printf("adb shell getprop persist.sys.isUsbOtgEnabled       �Ƿ�֧�� OTG\n");
            printf("adb shell getprop dalvik.vm.heapsize                ÿ��Ӧ�ó�����ڴ�����\n");
            printf("adb shell getprop rro.build.version.security_patch	Android ��ȫ�������򼶱�\n");
            break;
        }
        case 'b':
        {
            printf("adb shell pm list packages           �鿴����Ӧ��\n");
            printf("adb shell pm list packages (����)    �鿴��������������Ӧ��\n");
            printf("adb shell pm list packages -s        �鿴����ϵͳӦ��\n");
            printf("adb shell pm list packages -3        �鿴���е�����Ӧ��\n");
            printf("adb shell pm list permission (����)  �鿴�û��������Ȩ��\n");
            printf("adb shell pm list features           �鿴�豸֧�ֵ����й���\n");
            printf("adb shell pm disable-user (Ӧ�ð���) ͣ��Ӧ��\n");
            printf("adb shell pm enable (Ӧ�ð���)       ����Ӧ��\n");
            printf("adb shell pm clear  (Ӧ�ð���)       ���Ӧ������\n");
            printf("adb install (��װ��λ��)             ��װӦ��\n");
            printf("\t-l����Ӧ�ð�װ������Ŀ¼ /mnt/asec��\n\t-r�������ǰ�װ��\n");
            printf("\t-t������װ AndroidManifest.xml �� application ָ�� android:testOnly=��true�� ��Ӧ�ã�\n\t-s����Ӧ�ð�װ�� sdcard��\n");
            printf("\t-d�����������ǰ�װ��\n\t-g��������������ʱȨ�ޣ�\n");
            printf("adb uninstall (Ӧ�ð���)             ж��Ӧ��\n\t-k�������ݺͻ���Ŀ¼\n");
            printf("adb shell am start (���)          ����\n");
            printf("adb shell am startservice (������)   �������\n");
            printf("adb shell am force-stop (Ӧ�ð���)   ֹͣӦ��\n");
            printf("adb shell am kill (Ӧ�ð���)         ɱ������(kill-allɱ�����н���)\n");
            printf("adb shell am monitor                 ��������������ӦӦ�õļ�����\n");
            printf("adb shell ps                         ��ʾ����\n");
            printf("adb shell top                        ��ʾʵʱ��Դռ�����\n");
            break;
        }
        case 'c':
        {
            printf("adb shell dumpsys                            ϵͳ��Ϣ \n");
            printf("adb shell dumpsys activity                   �鿴���л\n");
            printf("\tactivities �鿴�������е�����\n\tbroadcasts �鿴broadcasts\n");
            printf("\tservices ����״̬\n\tproviders �����ṩ��\n");
            printf("\tprocesses ����״̬\n\toom �ڴ����\n");
            printf("\tintents pending_intents״̬\n\trecents ����\n");
            printf("\tpermissions URI��Ȩ\n\ttop �����\n");
            printf("\tpackage (����)  Ӧ�������Ϣ\n");
            printf("adb shell dumpsys display                    �ֱ�����Ϣ \n");
            printf("adb shell dumpsys battery                    �����Ϣ \n");
            printf("adb shell dumpsys cpuinfo                    CPU��Ϣ \n");
            printf("adb shell dumpsys meminfo                    �����Ϣ \n");
            printf("adb shell dumpsys notifications              ֪ͨ��Ϣ \n");
            printf("adb shell dumpsys wifi                       WiFi��Ϣ \n");
            printf("adb shell dumpsys power                      ��Դ������Ϣ \n");
            printf("adb shell dumpsys telephony.registry         �绰��Ϣ \n");
            break;
        }
        case 'd':
        {
            main();
            break;
        }
        case 'e':
        {
            return 0;
            break;
        }
        default:
        {
            system("cls");
            printf("\a�������!�밴�س������½������.\n\n");
            getchar();
            usage();
        }
    }

    char c, d;
    printf("����p������һҳ,����e�˳�����,���������ַ��������˵�:");
    c = getchar();
    d = getchar();
    if (c == '\n')
        c = d;
    if (c == 'p')
        usage();
    else if (c == 'e')
        exit(0);
    else
        main();
}
