#pragma once

#include "Array.hpp"

template <typename T>
Array<T>::Array() : elements(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : elements(nullptr), _size(n) {
  if (n > 0)
    elements = new T[n]();
}

template <typename T>
Array<T>::Array(const Array& other) : elements(nullptr), _size(other._size) {
  if (other._size > 0) {
    elements = new T[other._size];
    for (std::size_t i = 0; i < other._size; ++i)
      elements[i] = other.elements[i];
  }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
  if (this != &other) {
    delete[] elements;
    elements = nullptr;
    _size = other._size;
    if (other._size > 0) {
      elements = new T[other._size];
      for (std::size_t i = 0; i < other._size; ++i)
        elements[i] = other.elements[i];
    }
  }
  return *this;
}

template <typename T>
Array<T>::~Array() {
  delete[] elements;
}

template <typename T>
T& Array<T>::operator[](std::size_t idx) {
  if (idx >= _size)
    throw std::out_of_range("Index out of bounds");
  return elements[idx];
}

template <typename T>
const T& Array<T>::operator[](std::size_t idx) const {
  if (idx >= _size)
    throw std::out_of_range("Index out of bounds");
  return elements[idx];
}

template <typename T>
std::size_t Array<T>::size() const {
  return _size;
}