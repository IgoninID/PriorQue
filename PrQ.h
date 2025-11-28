#pragma once
#include "../HeapID/MyHeap.h"
#include <iostream>

using namespace std;

/// Шаблонный класс для реализации минимальной очереди приоритетов (самый максимальный элемент имеет наибольший приоритет)
/// Условие: элементы удаляются в соответствии с их приоритетом(в первую очередь удаляется элемент с наибольшим приоритетом)
/// Основан на максимальной куче
template <typename T>
class PQueue {
private:
	MyHeap<T> heap;

public:

    /// Конструктор по умолчанию
    PQueue()
    {

    }

    /// Конструктор с параметрами
    /// T data - вставляемый элемент
    PQueue(T data)
    {
        heap.Insert(data);
    }

    /// Вставка в очередь приоритетов
    /// Сложность: O(log n)
    /// T data - вставляемый элемент
    void insert_queue(T data)
    {
        heap.Insert(data);
    }

    /// Удаление элемента из очереди приоритетов
    /// Сложность: O(log n)
    void remove_queue()
    {
        heap.Remove();
    }

    /// Обращение к самому приоритетному элементу(самому минимальному)
    /// Сложность: O(1)
    T& prior_elem()
    {
        return heap.Max();
    }

    /// Определение количества элементов
    /// Сложность: O(n)
    size_t size_que()
    {
        return heap.getSize();
    }

    /// Вывод очереди приоритетов из динамического массива
    /// Сложность: O(n)
    void print_que()
    {
        for (T data : heap)
        {
            cout << data << " ; ";
        }
    }
};

void test();