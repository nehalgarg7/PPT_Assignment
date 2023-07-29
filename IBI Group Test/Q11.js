const numbers = [1, 2, 3, 4, 5];
const result = numbers.reduce((acc, num) => {
  if (num % 2 === 0) {
    acc.evens.push(num);
  } else {
    acc.odds.push(num);
  }
  return acc;
}, { evens: [], odds: [] }); // Initialize accumulator array as an object with evens and odds properties.

console.log(result);

// Output : { evens: [ 2, 4 ], odds: [ 1, 3, 5 ] }

/***
 * reasons : With this modification, the reduce function will correctly initialize the accumulator (acc) as an object with evens and 
 * odds properties. The evens array will contain even numbers, and the odds array will contain odd numbers from the numbers array.
 */