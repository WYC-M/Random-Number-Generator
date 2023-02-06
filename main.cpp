# include <iostream>
# include "header.h"

int main()
{
    int a;//随机数个数
    int b;//随机数上限
    int c;//随机数下限
    int d;//排除随机数
    int e = 0;//生成随机数
    int f;//是否排除数字

    std::cout << "==================================================" << std::endl;
    std::cout << "随机数生成器 Random Number Generator v2.2 By WYC-M" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "[参数设置]" << std::endl;
    std::cout << std::endl;
    
    std::cout << "请输入您想要生成的随机数个数:";
    std::cin >> a;
    std::cout << std::endl;

    std::cout << "请输入您想要生成的随机数范围" << std::endl;
    std::cout << "上限（含）:";
    std::cin >> b;
    std::cout << "下限（含）:";
    std::cin >> c;
    std::cout << std::endl;

    std::cout << "请问您是否要排除数字,是请按1,否请按0:";
    std::cin >> f;
    if (f != 0)
    {
        if (f != 1)
        {
            std::cout << std::endl;
            std::cout << "[生成随机数]" << std::endl;
            std::cout << std::endl; log("无法生成随机数!请调整参数设置(未确定是否排除数据)");
            exit();
            return 0;
        }
    }
    if (f)
    {
        std::cout << "请输入您想要排除的数字:";
        std::cin >> d;
        std::cout << std::endl;
    }
    if (f == 0)
    {
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "[生成随机数]" << std::endl;
    std::cout << std::endl;

    //从此处开始修改

    if (a <= 0)
    {
        log("无法生成随机数!请调整参数设置(生成随机数的数量小于等于0)");
        exit();
        return 0;
    }
    else if (b < c)
    {
        log("无法生成随机数!请调整参数设置(上限小于下限)");
        exit();
        return 0;
        if (b == c == d)
        {
            log("无法生成随机数!请调整参数设置(上限小于下限)");
            exit();
            return 0;
        }
    }
    else
    {
        std::cout << "正在生成随机数中 ";
        wait(1);

        for (int waiting = 0; waiting < 17; waiting++)//waiting为退格次数
        {
            std::cout << "\b";
        }

        std::cout << "本次生成的随机数是" << std::endl;

        srand((int)time(0));//生成随机数
        for (int i = 0; i < a;)
        {
            e = (rand() % (b - c)) + c;
            if (f)
            {
                if (e != d)
                {
                    std::cout << e << " ";
                    i++;
                }
            }
            else
            {
                std::cout << e << " ";
                i++;
            }
        }
    }

    exit();
    return 0;

    //修改至此处

/*

    if (a > 0)
    {
        if (b < c)
        {
            std::cout << "无法生成随机数!请调整参数设置(上限小于下限)" << std::endl;
        }
        else
        {
            if (b == c)
            {
                if (c == d)
                {
                    std::cout << "无法生成随机数!请调整参数设置(上限小于下限)" << std::endl;
                }
                else
                {
                    b++;
                    c-1;

                    std::cout << "本次生成的随机数是" << std::endl;;

                    srand((int)time(0));
                    for (int i = 0; i < a;)
                    {
                        e = (rand() % (b - c)) + c;
                        if (e != d)
                        {
                            std::cout << e << " ";
                            i++;
                        }
                    }
                }
            }
            else
            {
                b++;
                c-1;

                std::cout << "本次生成的随机数是 " << std::endl;;

                srand((int)time(0));
                for (int i = 0; i < a;)
                {
                    e = (rand() % (b - c)) + c;
                    if (e != d)
                    {
                        std::cout << e << " ";
                        i++;
                    }
                }
            }
        }
    }
    else
    {
        std::cout << "无法生成随机数!请调整参数设置(生成随机数的数量小于等于0)" << std::endl;
    }

*/

/*

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "按回车键退出" << std::endl;
    std::cin.get();
    std::cin.get();

*/

}