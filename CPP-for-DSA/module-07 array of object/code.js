console.log(0 || "hello" || true);

removeDuplicates([1, 2, 2, 3, 4, 4, 5]); // returns [1, 2, 3, 4, 5]

invertObject({ a: 1, b: 2, c: 2 }); // returns { 1: 'a', 2: 'c' }

function invertObject(obj) {
    const inverted = {};
    for (let key in obj) {
        inverted[obj[key]] = key;
    }
    return inverted;
}

// Test the function
console.log(invertObject({ a: 1, b: 2, c: 2 })); // { '1': 'a', '2': 'c' }

// Problem 3: String Manipulation
isPalindrome("madam"); // returns true
// Problem 3: String Manipulation
// Description:
// Write a function isPalindrome that checks if a given string is a palindrome(reads the same forward and backward).Ignore case and non - alphanumeric characters.


// Write a recursive function factorial that calculates the factorial of a number.
factorial(5); // returns 120
function factorial(n) {
    if (n === 0) return 1;
    return n * factorial(n - 1);
}

// Test the function
console.log(factorial(5)); // 120
console.log(factorial(0)); // 1

// Problem 6: Flatten Nested Arrays
// Write a function flattenArray that takes a nested array and returns a flattened array.

const log = throttle(() => console.log('Hello'), 1000);
log(); // This will log "Hello" to the console at most once per second.

function throttle(func, limit) {
    let inThrottle;
    return function (...args) {
        if (!inThrottle) {
            func.apply(this, args);
            inThrottle = true;
            setTimeout(() => inThrottle = false, limit);
        }
    };
}

// level
// radar
// civic
// madam
// racecar
// refer
// deified
// rotator
// repaper
// stats
