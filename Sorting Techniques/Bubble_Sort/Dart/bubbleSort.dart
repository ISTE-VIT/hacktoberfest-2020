// Bubble Sort Algorithm in Dart.

import 'dart:math';

void main() {
  print(testDriver([2, 3, 34, 4, 5, 3, 1, 213, 13, 2]));
  // prints [1, 2, 2, 3, 3, 4, 5, 13, 34, 213]
  print(testDriver(generateRandomList(
    length: 15,
    minValue: 1,
    maxValue: 20,
  )));
}

// bubbleSort([2,3,34,4,5,3,1,213,13,2])
//output: [1, 2, 2, 3, 3, 4, 5, 13, 34, 213]

List<num> bubbleSort(List<num> array) {
  num length = array.length;
  for (num i = 0; i < length; i++) {
    for (num j = 0; j < length - 1; j++) {
      num presentIndexValue = array[j];
      num nextIndexValue = array[j + 1];
      if (presentIndexValue > nextIndexValue) {
        num tempNumber = presentIndexValue;
        array[j] = nextIndexValue;
        array[j + 1] = tempNumber;
      }
    }
  }
  return array;
}

List<num> testDriver(array) {
  return bubbleSort(array);
}

// Generate a list of random numbers within a specific range and size(length)
List<num> generateRandomList({length = 5, minValue = 1, maxValue = 10}) {
  List<num> list = [];
  for (num i = 0; i < length; i++) {
    num random = Random().nextInt(maxValue) + minValue;
    list.add(random);
  }
  print("Generated list: $list");
  return list;
}
