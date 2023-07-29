//Q7. 
const arr = [1, 2, 3, 4, 5];

const reverseArray = arr.reduce((accumulatorArray, currentArray) => {
  accumulatorArray.unshift(currentArray); // Unshift function add the current element to the beginning of the accumulator array.
  return accumulatorArray;
}, []);

console.log(reverseArray); 
// Output: [5, 4, 3, 2, 1]