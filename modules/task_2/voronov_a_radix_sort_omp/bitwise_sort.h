// Copyright 2023 Voronov Aleksandr
#ifndef  MODULES_TASK_2_VORONOV_A_RADIX_SORT_OMP_BITWISE_SORT_H_
#define MODULES_TASK_2_VORONOV_A_RADIX_SORT_OMP_BITWISE_SORT_H_
#include <omp.h>
#include <iostream>
#include <vector>

std::vector<int> getRandomVector(int sizeVec);
void createCounters(int* sortVec, int* counters, int sizeVec);
void signedRadix(int byteNumber, int sizeVec, int* sourceVec, int* destVec, int* count);
void signedRadixSort(int* sortVec, int sizeVec);
void signedRadixSortOmp(int* sortVec, int sizeVec);
void mergeOrderVec(int* vec1, int* vec2, int size1, int size2);

#endif  // MODULES_TASK_2_VORONOV_A_BITWISE_SORT_BITWISE_SORT_H_
