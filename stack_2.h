#include "libarary.h"
template <typename T> class Element_2 {
public:
    T value;
    Element_2* next;
    Element_2() : value(), next(nullptr) {}
    Element_2(T value) : value(value), next(nullptr) {}
    ~Element_2() = default;
};

template <typename T> class stack {
private:
    Element_2<T>* _head;
    Element_2<T>* _tail;
    int _size;

public:
    stack() : _head(nullptr), _tail(nullptr), _size(0) {}
    ~stack() {
        Element_2<T>* temp = _head;
        while (temp != nullptr) {
            temp = temp->next;
            delete _head;
            _head = temp;
        }
        _tail = nullptr;
    }

    void push_back(T value) {
        Element_2<T>* temp = new Element_2<T>(value);
        if (_head == nullptr) {
            _head = temp;
            _tail = temp;
        }
        else {
            _tail->next = temp;
            _tail = temp;
        }
        _size++;
    }
    /*void push_front(T value) {
      Element<T> *temp = new Element<T>(value);
      if (_head == nullptr) {
        _head = temp;
        _tail = temp;
      } else {
        temp->next = _head;
        _head = temp;
      }
      _size++;
    }*/
    void pop_back() {
      if (_head == nullptr) {
        return;
      } else if (_head == _tail) {
        delete _head;
        _head = nullptr;
        _tail = nullptr;
      } else {
        Element_2<T> *temp = _head;
        while (temp->next != _tail) {
          temp = temp->next;
        }
        delete _tail;
        _tail = temp;
        _tail->next = nullptr;
      }
      _size--;
    }
    /*void pop_front() {
        if (_head == nullptr) {
            return;
        }
        else if (_head == _tail) {
            delete _head;
            _head = nullptr;
            _tail = nullptr;
        }
        else {
            Element<T>* temp = _head;
            _head = _head->next;
            delete temp;
        }
        _size--;
    }
    void insert(int index, T value) {
      if (index < 0 || index > _size) {
        return;
      } else if (index == 0) {
        push_front(value);
      } else if (index == _size) {
        push_back(value);
      } else {
        Element<T> *temp = _head;
        for (int i = 0; i < index - 1; i++) {
          temp = temp->next;
        }
        Element<T> *new_elem = new Element<T>(value);
        new_elem->next = temp->next;
        temp->next = new_elem;
        _size++;
      }
    }
    void remove(int index) {
      if (index < 0 || index >= _size) {
        return;
      } else if (index == 0) {
        pop_front();
      } else if (index == _size - 1) {
        pop_back();
      } else {
        Element<T> *temp = _head;
        for (int i = 0; i < index - 1; i++) {
          temp = temp->next;
        }
        Element<T> *to_delete = temp->next;
        temp->next = temp->next->next;
        delete to_delete;
        _size--;
      }
    }
     void remove(T value) {
       Element<T> *temp = _head;
       int index = 0;
       while (temp != nullptr) {
         if (temp->value == value) {
           remove(index);
           return;
         }
         temp = temp->next;
         index++;
       }
     }*/
    void print() {
        Element_2<T>* temp = _head;
        while (temp != nullptr) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    /*void dev_print() {
      int index = 0;
      Element<T> *temp = _head;
      while (temp != nullptr) {
        cout << "Element[" << index << "]: " << (long long)temp << endl;
        cout << "Value: " << temp->value << endl;
        cout << "Next element: " << (long long)temp->next << endl << endl;
        temp = temp->next;
        index++;
      }
      cout << endl;
    }
    int size() { return _size; }*/
};
#pragma once
