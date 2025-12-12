#include "PrQ.h"
#include <cassert>

void test()
{
    
    PQueue<int> que1; // очередь из 1 одного элемента
    que1.insert_queue(9);
    assert(que1.size_que() == 1);

    PQueue<int> que2; // очередь из 5 элементов в начале добавляем минимальный
    que2.insert_queue(2);
    que2.insert_queue(3);
    que2.insert_queue(10);
    que2.insert_queue(5);
    que2.insert_queue(8);
    assert(que2.size_que() == 5);

    PQueue<int> que3; // пустая очередь
    assert(que3.size_que() == 0);

    PQueue<int> que4; // очередь из 5 элементов в начале добавляем максимальный
    que4.insert_queue(20);
    que4.insert_queue(6);
    que4.insert_queue(10);
    que4.insert_queue(5);
    que4.insert_queue(8);
    assert(que4.size_que() == 5);

    // проверка элемента с максимальным приоритетом
    assert(que1.prior_elem() == 9); // 1 элемент
    assert(que2.prior_elem() == 10); // 5 элементов
    try // пустая очередь
    {
        que3.prior_elem();
        assert(false);
    }
    catch (const runtime_error&)
    {

    }
    assert(que4.prior_elem() == 20); // 5 элементов

    // проверка удаления элемента с максимальным приоритетом
    que1.remove_queue(); // 1 элемент
    que2.remove_queue(); // 5 элементов
    que4.remove_queue(); // 5 элементов
    
    assert(que1.size_que() == 0);
    assert(que2.size_que() == 4);
    assert(que4.size_que() == 4);
    assert(que2.prior_elem() == 8);
    assert(que4.prior_elem() == 10);
    try // пустая очередь
    {
        que3.remove_queue();
        assert(false);
    }
    catch (const runtime_error&)
    {

    }
}