int n = nums.size(); // gives the no. of rows
map<int,int> mp; // we don't need unordered_map because we need the elements to be in sorted format.
// traverse through the 2D array and store the frequency of each element
// In the 2D array, intersection occurs when the elements are present in every row.
// So the frequency of the element should match with the no. or rows in the 2D array.