/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
    let sol = 0;
    for(arg in args) sol++;
    return sol
};

/**
 * argumentsLength(1, 2, 3); // 3
 */