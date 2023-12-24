#ifndef _RINGBUFFER_H_
#define _RINGBUFFER_H_

#include <cstdint>
#include <avr/io.h>


using namespace std;

template<typename T>
struct ringbuffer
{
private: 
    volatile T* array;
    uint16_t size;
    volatile uint16_t _start:
    volatile uint16_t _end;

    uint16_t index_to_pos();

public:
    ringbuffer(T& array, uint16_t size) 
        : array(&array), size(size) {}

    ~ringbuffer();

    void push(T& element);

    void pop_head();
    void pop_tail();
    void pop_index(uint16_t i);

    T& operator[] (uint16_t i) { return array[index_to_pos(i)]; } 

};

#endif