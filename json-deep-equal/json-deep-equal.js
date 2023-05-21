/**
 * @param {any} o1
 * @param {any} o2
 * @return {boolean}
 */
function areDeeplyEqual(o1, o2) {
  // Check if types of o1 and o2 are different
  if (typeof o1 !== typeof o2) {
    return false; // Return false if types are different
  }

  // Check if o1 and o2 are non-object types or null
  if (typeof o1 !== 'object' || o1 === null || o2 === null) {
    return o1 === o2; // Compare o1 and o2 directly and return the result
  }

  // Check if both o1 and o2 are arrays
  if (Array.isArray(o1) && Array.isArray(o2)) {
    // Check if arrays have different lengths
    if (o1.length !== o2.length) {
      return false; // Return false if lengths are different
    }

    // Iterate over each element of the arrays
    for (let i = 0; i < o1.length; i++) {
      // Recursively call areDeeplyEqual for each element
      if (!areDeeplyEqual(o1[i], o2[i])) {
        return false; // Return false if any element is not deeply equal
      }
    }

    return true; // Return true if all elements are deeply equal
  }

  // Check if either o1 or o2 is an array (not both)
  if (Array.isArray(o1) || Array.isArray(o2)) {
    return false; // Return false if one is an array and the other is not
  }

  // Get the keys of o1 and o2
  const keys1 = Object.keys(o1);
  const keys2 = Object.keys(o2);

  // Check if objects have different number of keys
  if (keys1.length !== keys2.length) {
    return false; // Return false if number of keys is different
  }

  // Iterate over each key of o1
  for (const key of keys1) {
    // Recursively call areDeeplyEqual for each property value
    if (!areDeeplyEqual(o1[key], o2[key])) {
      return false; // Return false if any property value is not deeply equal
    }
  }

  return true; // Return true if all properties are deeply equal
}