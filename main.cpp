# include <iostream>
# include "header.h"

int main()
{
    int a;//���������
    int b;//���������
    int c;//���������
    int d;//�ų������
    int e = 0;//���������
    int f;//�Ƿ��ų�����

    std::cout << "==================================================" << std::endl;
    std::cout << "����������� Random Number Generator v2.2 By WYC-M" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "[��������]" << std::endl;
    std::cout << std::endl;
    
    std::cout << "����������Ҫ���ɵ����������:";
    std::cin >> a;
    std::cout << std::endl;

    std::cout << "����������Ҫ���ɵ��������Χ" << std::endl;
    std::cout << "���ޣ�����:";
    std::cin >> b;
    std::cout << "���ޣ�����:";
    std::cin >> c;
    std::cout << std::endl;

    std::cout << "�������Ƿ�Ҫ�ų�����,���밴1,���밴0:";
    std::cin >> f;
    if (f != 0)
    {
        if (f != 1)
        {
            std::cout << std::endl;
            std::cout << "[���������]" << std::endl;
            std::cout << std::endl; log("�޷����������!�������������(δȷ���Ƿ��ų�����)");
            exit();
            return 0;
        }
    }
    if (f)
    {
        std::cout << "����������Ҫ�ų�������:";
        std::cin >> d;
        std::cout << std::endl;
    }
    if (f == 0)
    {
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "[���������]" << std::endl;
    std::cout << std::endl;

    //�Ӵ˴���ʼ�޸�

    if (a <= 0)
    {
        log("�޷����������!�������������(���������������С�ڵ���0)");
        exit();
        return 0;
    }
    else if (b < c)
    {
        log("�޷����������!�������������(����С������)");
        exit();
        return 0;
        if (b == c == d)
        {
            log("�޷����������!�������������(����С������)");
            exit();
            return 0;
        }
    }
    else
    {
        std::cout << "��������������� ";
        wait(1);

        for (int waiting = 0; waiting < 17; waiting++)//waitingΪ�˸����
        {
            std::cout << "\b";
        }

        std::cout << "�������ɵ��������" << std::endl;

        srand((int)time(0));//���������
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

    //�޸����˴�

/*

    if (a > 0)
    {
        if (b < c)
        {
            std::cout << "�޷����������!�������������(����С������)" << std::endl;
        }
        else
        {
            if (b == c)
            {
                if (c == d)
                {
                    std::cout << "�޷����������!�������������(����С������)" << std::endl;
                }
                else
                {
                    b++;
                    c-1;

                    std::cout << "�������ɵ��������" << std::endl;;

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

                std::cout << "�������ɵ�������� " << std::endl;;

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
        std::cout << "�޷����������!�������������(���������������С�ڵ���0)" << std::endl;
    }

*/

/*

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "���س����˳�" << std::endl;
    std::cin.get();
    std::cin.get();

*/

}