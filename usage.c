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

    printf("a.设备  b.应用  c.系统  d.返回上一页  e.退出");
    printf("\n\n请输入需要进行的操作对应的代码:\n");
    i = getchar();
    j = getchar();
    if (i == '\n')
        i = j;
    system("cls");

    switch (i)
    {
        case 'a':
        {
            printf("adb devices                                         列举当前连接的设备\n");
            printf("adb start-server                                    启动命令\n");
            printf("adb kill-server                                     停止命令\n");
            printf("adb pull (设备目录) (本地目录)                         拷贝文件\n");
            printf("adb push (本地目录) (设备目录)                         拷贝文件\n");
            printf("adb shell                                           进入shell界面\n");
            printf("adb shell input keyevent (code)                     模拟按键\n");
            printf("\t3-home 4-back 5-拨号应用 6-挂断电话 26-电源 64-浏览器 82-菜单 85-播放/暂停\n\t86-停止播放 164-静音 176-打开设置 207-打开联系人 208-打开日历 209-打开音乐 220-降低亮度 221-提高亮度\n");
            printf("\t223-系统休眠 224-点亮屏幕 231-语音助手 61-Tab 67-Backspace 92-PageUp 93-PageDown 112-Delete\n\t122-Home 123-End\n");
            printf("adb shell screencap (目录)                          截图并保存到指定目录\n");
            printf("adb shell screenrecord (目录)                       录屏并保存到指定目录\n");
            printf("adb shell wm size                                   显示分辨率(后跟WxH修改分辨率,W,H为数字)\n");
            printf("adb shell am display-size WxH                       改变分辨率为WxH\n");
            printf("adb shell getprop ro.sf.lcd_density                 屏幕密度\n");
            printf("adb shell wm density                                屏幕密度(后跟数字以修改分辨率,单位为dpi)\n");
            printf("adb shell wm overscan l,u,r,d                       屏幕显示区域调整,l,u,r,d分别为四个数字分别为左上右下\n");
            printf("adb shell getprop ro.product.model                  查看设备信息\n");
            printf("adb shell getprop ro.build.version.release          查看安卓版本信息\n");
            printf("adb shell getprop ro.build.version.sdk              查看SDK版本信息\n");
            printf("adb shell getprop ro.product.brand                  查看设备品牌信息\n");
            printf("adb shell getprop ro.product.name                   设备名\n");
            printf("adb shell getprop ro.product.board                  处理器型号\n");
            printf("adb shell getprop persist.sys.isUsbOtgEnabled       是否支持 OTG\n");
            printf("adb shell getprop dalvik.vm.heapsize                每个应用程序的内存上限\n");
            printf("adb shell getprop rro.build.version.security_patch	Android 安全补丁程序级别\n");
            break;
        }
        case 'b':
        {
            printf("adb shell pm list packages           查看所有应用\n");
            printf("adb shell pm list packages (条件)    查看符合条件的所有应用\n");
            printf("adb shell pm list packages -s        查看所有系统应用\n");
            printf("adb shell pm list packages -3        查看所有第三方应用\n");
            printf("adb shell pm list permission (组名)  查看用户组的所有权限\n");
            printf("adb shell pm list features           查看设备支持的所有功能\n");
            printf("adb shell pm disable-user (应用包名) 停用应用\n");
            printf("adb shell pm enable (应用包名)       启用应用\n");
            printf("adb shell pm clear  (应用包名)       清除应用数据\n");
            printf("adb install (安装包位置)             安装应用\n");
            printf("\t-l：将应用安装到保护目录 /mnt/asec；\n\t-r：允许覆盖安装；\n");
            printf("\t-t：允许安装 AndroidManifest.xml 里 application 指定 android:testOnly=“true” 的应用；\n\t-s：将应用安装到 sdcard；\n");
            printf("\t-d：允许降级覆盖安装；\n\t-g：授予所有运行时权限；\n");
            printf("adb uninstall (应用包名)             卸载应用\n\t-k保留数据和缓存目录\n");
            printf("adb shell am start (活动名)          调起活动\n");
            printf("adb shell am startservice (服务名)   调起服务\n");
            printf("adb shell am force-stop (应用包名)   停止应用\n");
            printf("adb shell am kill (应用包名)         杀死进程(kill-all杀死所有进程)\n");
            printf("adb shell am monitor                 启动崩溃或无响应应用的监听器\n");
            printf("adb shell ps                         显示进程\n");
            printf("adb shell top                        显示实时资源占用情况\n");
            break;
        }
        case 'c':
        {
            printf("adb shell dumpsys                            系统信息 \n");
            printf("adb shell dumpsys activity                   查看所有活动\n");
            printf("\tactivities 查看正在运行的任务\n\tbroadcasts 查看broadcasts\n");
            printf("\tservices 服务状态\n\tproviders 服务提供商\n");
            printf("\tprocesses 进程状态\n\toom 内存管理\n");
            printf("\tintents pending_intents状态\n\trecents 最近活动\n");
            printf("\tpermissions URI授权\n\ttop 顶部活动\n");
            printf("\tpackage (包名)  应用相关信息\n");
            printf("adb shell dumpsys display                    分辨率信息 \n");
            printf("adb shell dumpsys battery                    电池信息 \n");
            printf("adb shell dumpsys cpuinfo                    CPU信息 \n");
            printf("adb shell dumpsys meminfo                    外存信息 \n");
            printf("adb shell dumpsys notifications              通知信息 \n");
            printf("adb shell dumpsys wifi                       WiFi信息 \n");
            printf("adb shell dumpsys power                      电源管理信息 \n");
            printf("adb shell dumpsys telephony.registry         电话信息 \n");
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
            printf("\a输入错误!请按回车键重新进入程序.\n\n");
            getchar();
            usage();
        }
    }

    char c, d;
    printf("输入p进入上一页,输入e退出程序,输入其他字符返回主菜单:");
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
