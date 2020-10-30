const array = [1, 4, 5, 1, 4, 10, 23, 4];

const searchArray = (array = [], key) => {
  for (let i = 0; i < array.length; i++) {
    if (key === array[i]) return i;
  }
  return -1;
};

let found = searchArray(array, 23);
if (found < 0) {
  console.log("Element not found");
} else {
  console.log(`Element found at index ${found}`);
}
