cmake_minimum_required(VERSION 3.10)

if(DEFINED ENV{VCPKG_ROOT} AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"
    CACHE STRING "")
endif()
message(STATUS "CMAKE_EXPORT_COMPILE_COMMANDS: ${CMAKE_EXPORT_COMPILE_COMMANDS}")
message(STATUS "CMAKE_C_COMPILER: ${CMAKE_C_COMPILER}")

project(LeetCode CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENTIONS OFF)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_INTERPROCEDURAL_OPTIMIZATION TRUE)

if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4 /WX  /permissive-")
elseif(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -Werror")
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -Werror")
endif()

find_package(Catch2 CONFIG REQUIRED)

function(add_problem problemid difficulty linkname)
    add_executable(${problemid} src/${problemid}.cpp)
    add_test(NAME ${problemid} COMMAND ${problemid})
    target_link_libraries(${problemid} PRIVATE Catch2::Catch2)
    target_compile_definitions(${problemid} PRIVATE TEST_TAGS="\\\"[${problemid}][${difficulty}]\\\"" PRIVATE TEST_NAME="\\\"${linkname}\\\"")
endfunction(add_problem)

enable_testing()

add_problem(0000  Easy   leetcode) # helper test
add_problem(0001  Easy   two-sum) # Two Sum
add_problem(0002 Medium  add-two-numbers) # Add Two Numbers
add_problem(0003 Medium  longest-substring-without-repeating-characters) # Longest Substring Without Repeating Characters
add_problem(0004  Hard   median-of-two-sorted-arrays) # Median of Two Sorted Arrays
#add_problem(0005 Medium  longest-palindromic-substring) # Longest Palindromic Substring
#add_problem(0006 Medium  zigzag-conversion) # ZigZag Conversion
add_problem(0007  Easy   reverse-integer) # Reverse Integer
#add_problem(0008 Medium  string-to-integer-atoi) # String to Integer (atoi)
add_problem(0009  Easy   palindrome-number) # Palindrome Number
#add_problem(0010  Hard   regular-expression-matching) # Regular Expression Matching
#add_problem(0011 Medium  container-with-most-water) # Container With Most Water
add_problem(0012 Medium  integer-to-roman) # Integer to Roman
add_problem(0013  Easy   roman-to-integer) # Roman to Integer
add_problem(0014  Easy   longest-common-prefix) # Longest Common Prefix
#add_problem(0015 Medium  3sum) # 3Sum
#add_problem(0016 Medium  3sum-closest) # 3Sum Closest
#add_problem(0017 Medium  letter-combinations-of-a-phone-number) # Letter Combinations of a Phone Number
#add_problem(0018 Medium  4sum) # 4Sum
#add_problem(0019 Medium  remove-nth-node-from-end-of-list) # Remove Nth Node From End of List
add_problem(0020  Easy   valid-parentheses) # Valid Parentheses
add_problem(0021  Easy   merge-two-sorted-lists) # Merge Two Sorted Lists
#add_problem(0022 Medium  generate-parentheses) # Generate Parentheses
#add_problem(0023  Hard   merge-k-sorted-lists) # Merge k Sorted Lists
#add_problem(0024 Medium  swap-nodes-in-pairs) # Swap Nodes in Pairs
#add_problem(0025  Hard   reverse-nodes-in-k-group) # Reverse Nodes in k-Group
add_problem(0026  Easy   remove-duplicates-from-sorted-array) # Remove Duplicates from Sorted Array
#add_problem(0027  Easy   remove-element) # Remove Element
#add_problem(0028  Easy   implement-strstr) # Implement strStr()
add_problem(0029 Medium  divide-two-integers) # Divide Two Integers
#add_problem(0030  Hard   substring-with-concatenation-of-all-words) # Substring with Concatenation of All Words
#add_problem(0031 Medium  next-permutation) # Next Permutation
#add_problem(0032  Hard   longest-valid-parentheses) # Longest Valid Parentheses
#add_problem(0033 Medium  search-in-rotated-sorted-array) # Search in Rotated Sorted Array
#add_problem(0034 Medium  find-first-and-last-position-of-element-in-sorted-array) # Find First and Last Position of Element in Sorted Array
#add_problem(0035  Easy   search-insert-position) # Search Insert Position
#add_problem(0036 Medium  valid-sudoku) # Valid Sudoku
#add_problem(0037  Hard   sudoku-solver) # Sudoku Solver
#add_problem(0038  Easy   count-and-say) # Count and Say
#add_problem(0039 Medium  combination-sum) # Combination Sum
#add_problem(0040 Medium  combination-sum-ii) # Combination Sum II
#add_problem(0041  Hard   first-missing-positive) # First Missing Positive
#add_problem(0042  Hard   trapping-rain-water) # Trapping Rain Water
#add_problem(0043 Medium  multiply-strings) # Multiply Strings
#add_problem(0044  Hard   wildcard-matching) # Wildcard Matching
#add_problem(0045  Hard   jump-game-ii) # Jump Game II
#add_problem(0046 Medium  permutations) # Permutations
#add_problem(0047 Medium  permutations-ii) # Permutations II
#add_problem(0048 Medium  rotate-image) # Rotate Image
#add_problem(0049 Medium  group-anagrams) # Group Anagrams
#add_problem(0050 Medium  powx-n) # Pow(x, n)
#add_problem(0051  Hard   n-queens) # N-Queens
#add_problem(0052  Hard   n-queens-ii) # N-Queens II
#add_problem(0053  Easy   maximum-subarray) # Maximum Subarray
#add_problem(0054 Medium  spiral-matrix) # Spiral Matrix
#add_problem(0055 Medium  jump-game) # Jump Game
#add_problem(0056 Medium  merge-intervals) # Merge Intervals
#add_problem(0057  Hard   insert-interval) # Insert Interval
#add_problem(0058  Easy   length-of-last-word) # Length of Last Word
#add_problem(0059 Medium  spiral-matrix-ii) # Spiral Matrix II
#add_problem(0060 Medium  permutation-sequence) # Permutation Sequence
#add_problem(0061 Medium  rotate-list) # Rotate List
#add_problem(0062 Medium  unique-paths) # Unique Paths
#add_problem(0063 Medium  unique-paths-ii) # Unique Paths II
#add_problem(0064 Medium  minimum-path-sum) # Minimum Path Sum
add_problem(0065  Hard   valid-number) # Valid Number
add_problem(0066  Easy   plus-one) # Plus One
#add_problem(0067  Easy   add-binary) # Add Binary
#add_problem(0068  Hard   text-justification) # Text Justification
#add_problem(0069  Easy   sqrtx) # Sqrt(x)
#add_problem(0070  Easy   climbing-stairs) # Climbing Stairs
#add_problem(0071 Medium  simplify-path) # Simplify Path
#add_problem(0072  Hard   edit-distance) # Edit Distance
#add_problem(0073 Medium  set-matrix-zeroes) # Set Matrix Zeroes
#add_problem(0074 Medium  search-a-2d-matrix) # Search a 2D Matrix
#add_problem(0075 Medium  sort-colors) # Sort Colors
#add_problem(0076  Hard   minimum-window-substring) # Minimum Window Substring
#add_problem(0077 Medium  combinations) # Combinations
#add_problem(0078 Medium  subsets) # Subsets
#add_problem(0079 Medium  word-search) # Word Search
#add_problem(0080 Medium  remove-duplicates-from-sorted-array-ii) # Remove Duplicates from Sorted Array II
#add_problem(0081 Medium  search-in-rotated-sorted-array-ii) # Search in Rotated Sorted Array II
#add_problem(0082 Medium  remove-duplicates-from-sorted-list-ii) # Remove Duplicates from Sorted List II
#add_problem(0083  Easy   remove-duplicates-from-sorted-list) # Remove Duplicates from Sorted List
#add_problem(0084  Hard   largest-rectangle-in-histogram) # Largest Rectangle in Histogram
#add_problem(0085  Hard   maximal-rectangle) # Maximal Rectangle
#add_problem(0086 Medium  partition-list) # Partition List
#add_problem(0087  Hard   scramble-string) # Scramble String
#add_problem(0088  Easy   merge-sorted-array) # Merge Sorted Array
#add_problem(0089 Medium  gray-code) # Gray Code
#add_problem(0090 Medium  subsets-ii) # Subsets II
#add_problem(0091 Medium  decode-ways) # Decode Ways
#add_problem(0092 Medium  reverse-linked-list-ii) # Reverse Linked List II
#add_problem(0093 Medium  restore-ip-addresses) # Restore IP Addresses
#add_problem(0094 Medium  binary-tree-inorder-traversal) # Binary Tree Inorder Traversal
#add_problem(0095 Medium  unique-binary-search-trees-ii) # Unique Binary Search Trees II
#add_problem(0096 Medium  unique-binary-search-trees) # Unique Binary Search Trees
#add_problem(0097  Hard   interleaving-string) # Interleaving String
#add_problem(0098 Medium  validate-binary-search-tree) # Validate Binary Search Tree
#add_problem(0099  Hard   recover-binary-search-tree) # Recover Binary Search Tree
add_problem(0100  Easy   same-tree) # Same Tree
add_problem(0101  Easy   symmetric-tree) # Symmetric Tree
add_problem(0102 Medium  binary-tree-level-order-traversal) # Binary Tree Level Order Traversal
#add_problem(0103 Medium  binary-tree-zigzag-level-order-traversal) # Binary Tree Zigzag Level Order Traversal
add_problem(0104  Easy   maximum-depth-of-binary-tree) # Maximum Depth of Binary Tree
#add_problem(0105 Medium  construct-binary-tree-from-preorder-and-inorder-traversal) # Construct Binary Tree from Preorder and Inorder Traversal
#add_problem(0106 Medium  construct-binary-tree-from-inorder-and-postorder-traversal) # Construct Binary Tree from Inorder and Postorder Traversal
#add_problem(0107  Easy   binary-tree-level-order-traversal-ii) # Binary Tree Level Order Traversal II
#add_problem(0108  Easy   convert-sorted-array-to-binary-search-tree) # Convert Sorted Array to Binary Search Tree
#add_problem(0109 Medium  convert-sorted-list-to-binary-search-tree) # Convert Sorted List to Binary Search Tree
#add_problem(0110  Easy   balanced-binary-tree) # Balanced Binary Tree
#add_problem(0111  Easy   minimum-depth-of-binary-tree) # Minimum Depth of Binary Tree
#add_problem(0112  Easy   path-sum) # Path Sum
#add_problem(0113 Medium  path-sum-ii) # Path Sum II
#add_problem(0114 Medium  flatten-binary-tree-to-linked-list) # Flatten Binary Tree to Linked List
#add_problem(0115  Hard   distinct-subsequences) # Distinct Subsequences
#add_problem(0116 Medium  populating-next-right-pointers-in-each-node) # Populating Next Right Pointers in Each Node
#add_problem(0117 Medium  populating-next-right-pointers-in-each-node-ii) # Populating Next Right Pointers in Each Node II
#add_problem(0118  Easy   pascals-triangle) # Pascal's Triangle
#add_problem(0119  Easy   pascals-triangle-ii) # Pascal's Triangle II
#add_problem(0120 Medium  triangle) # Triangle
#add_problem(0121  Easy   best-time-to-buy-and-sell-stock) # Best Time to Buy and Sell Stock
#add_problem(0122  Easy   best-time-to-buy-and-sell-stock-ii) # Best Time to Buy and Sell Stock II
#add_problem(0123  Hard   best-time-to-buy-and-sell-stock-iii) # Best Time to Buy and Sell Stock III
#add_problem(0124  Hard   binary-tree-maximum-path-sum) # Binary Tree Maximum Path Sum
#add_problem(0125  Easy   valid-palindrome) # Valid Palindrome
#add_problem(0126  Hard   word-ladder-ii) # Word Ladder II
#add_problem(0127 Medium  word-ladder) # Word Ladder
#add_problem(0128  Hard   longest-consecutive-sequence) # Longest Consecutive Sequence
#add_problem(0129 Medium  sum-root-to-leaf-numbers) # Sum Root to Leaf Numbers
#add_problem(0130 Medium  surrounded-regions) # Surrounded Regions
#add_problem(0131 Medium  palindrome-partitioning) # Palindrome Partitioning
#add_problem(0132  Hard   palindrome-partitioning-ii) # Palindrome Partitioning II
#add_problem(0133 Medium  clone-graph) # Clone Graph
#add_problem(0134 Medium  gas-station) # Gas Station
#add_problem(0135  Hard   candy) # Candy
# add_problem(0136  Easy   single-number) # Single Number
# #add_problem(0137 Medium  single-number-ii) # Single Number II
# #add_problem(0138 Medium  copy-list-with-random-pointer) # Copy List with Random Pointer
# #add_problem(0139 Medium  word-break) # Word Break
# #add_problem(0140  Hard   word-break-ii) # Word Break II
# #add_problem(0141  Easy   linked-list-cycle) # Linked List Cycle
# #add_problem(0142 Medium  linked-list-cycle-ii) # Linked List Cycle II
# #add_problem(0143 Medium  reorder-list) # Reorder List
# #add_problem(0144 Medium  binary-tree-preorder-traversal) # Binary Tree Preorder Traversal
# #add_problem(0145  Hard   binary-tree-postorder-traversal) # Binary Tree Postorder Traversal
# #add_problem(0146  Hard   lru-cache) # LRU Cache
# #add_problem(0147 Medium  insertion-sort-list) # Insertion Sort List
# #add_problem(0148 Medium  sort-list) # Sort List
# #add_problem(0149  Hard   max-points-on-a-line) # Max Points on a Line
# #add_problem(0150 Medium  evaluate-reverse-polish-notation) # Evaluate Reverse Polish Notation
# #add_problem(0151 Medium  reverse-words-in-a-string) # Reverse Words in a String
# #add_problem(0152 Medium  maximum-product-subarray) # Maximum Product Subarray
# #add_problem(0153 Medium  find-minimum-in-rotated-sorted-array) # Find Minimum in Rotated Sorted Array
# #add_problem(0154  Hard   find-minimum-in-rotated-sorted-array-ii) # Find Minimum in Rotated Sorted Array II
# #add_problem(0155  Easy   min-stack) # Min Stack
# #add_problem(0156 Medium  binary-tree-upside-down) # Binary Tree Upside Down
# #add_problem(0157  Easy   read-n-characters-given-read4) # Read N Characters Given Read4
# #add_problem(0158  Hard   read-n-characters-given-read4-ii-call-multiple-times) # Read N Characters Given Read4 II - Call multiple times
# #add_problem(0159  Hard   longest-substring-with-at-most-two-distinct-characters) # Longest Substring with At Most Two Distinct Characters
# #add_problem(0160  Easy   intersection-of-two-linked-lists) # Intersection of Two Linked Lists
# #add_problem(0161 Medium  one-edit-distance) # One Edit Distance
# #add_problem(0162 Medium  find-peak-element) # Find Peak Element
# #add_problem(0163 Medium  missing-ranges) # Missing Ranges
# #add_problem(0164  Hard   maximum-gap) # Maximum Gap
# #add_problem(0165 Medium  compare-version-numbers) # Compare Version Numbers
# #add_problem(0166 Medium  fraction-to-recurring-decimal) # Fraction to Recurring Decimal
# #add_problem(0167  Easy   two-sum-ii-input-array-is-sorted) # Two Sum II - Input array is sorted
# #add_problem(0168  Easy   excel-sheet-column-title) # Excel Sheet Column Title
# #add_problem(0169  Easy   majority-element) # Majority Element
# #add_problem(0170  Easy   two-sum-iii-data-structure-design) # Two Sum III - Data structure design
# #add_problem(0171  Easy   excel-sheet-column-number) # Excel Sheet Column Number
# #add_problem(0172  Easy   factorial-trailing-zeroes) # Factorial Trailing Zeroes
# #add_problem(0173 Medium  binary-search-tree-iterator) # Binary Search Tree Iterator
# #add_problem(0174  Hard   dungeon-game) # Dungeon Game
# #add_problem(0179 Medium  largest-number) # Largest Number
# #add_problem(0186 Medium  reverse-words-in-a-string-ii) # Reverse Words in a String II
# #add_problem(0187 Medium  repeated-dna-sequences) # Repeated DNA Sequences
# #add_problem(0188  Hard   best-time-to-buy-and-sell-stock-iv) # Best Time to Buy and Sell Stock IV
# #add_problem(0189  Easy   rotate-array) # Rotate Array
# #add_problem(0190  Easy   reverse-bits) # Reverse Bits
# add_problem(0191  Easy   number-of-1-bits) # Number of 1 Bits
# #add_problem(0198  Easy   house-robber) # House Robber
# #add_problem(0199 Medium  binary-tree-right-side-view) # Binary Tree Right Side View
# #add_problem(0200 Medium  number-of-islands) # Number of Islands
# #add_problem(0201 Medium  bitwise-and-of-numbers-range) # Bitwise AND of Numbers Range
# #add_problem(0202  Easy   happy-number) # Happy Number
# #add_problem(0203  Easy   remove-linked-list-elements) # Remove Linked List Elements
# #add_problem(0204  Easy   count-primes) # Count Primes
# #add_problem(0205  Easy   isomorphic-strings) # Isomorphic Strings
# #add_problem(0206  Easy   reverse-linked-list) # Reverse Linked List
# #add_problem(0207 Medium  course-schedule) # Course Schedule
# #add_problem(0208 Medium  implement-trie-prefix-tree) # Implement Trie (Prefix Tree)
# #add_problem(0209 Medium  minimum-size-subarray-sum) # Minimum Size Subarray Sum
# #add_problem(0210 Medium  course-schedule-ii) # Course Schedule II
# #add_problem(0211 Medium  add-and-search-word-data-structure-design) # Add and Search Word - Data structure design
# #add_problem(0212  Hard   word-search-ii) # Word Search II
# #add_problem(0213 Medium  house-robber-ii) # House Robber II
# #add_problem(0214  Hard   shortest-palindrome) # Shortest Palindrome
# #add_problem(0215 Medium  kth-largest-element-in-an-array) # Kth Largest Element in an Array
# #add_problem(0216 Medium  combination-sum-iii) # Combination Sum III
# #add_problem(0217  Easy   contains-duplicate) # Contains Duplicate
# #add_problem(0218  Hard   the-skyline-problem) # The Skyline Problem
# #add_problem(0219  Easy   contains-duplicate-ii) # Contains Duplicate II
# #add_problem(0220 Medium  contains-duplicate-iii) # Contains Duplicate III
# #add_problem(0221 Medium  maximal-square) # Maximal Square
# #add_problem(0222 Medium  count-complete-tree-nodes) # Count Complete Tree Nodes
# #add_problem(0223 Medium  rectangle-area) # Rectangle Area
# #add_problem(0224  Hard   basic-calculator) # Basic Calculator
# #add_problem(0225  Easy   implement-stack-using-queues) # Implement Stack using Queues
# #add_problem(0226  Easy   invert-binary-tree) # Invert Binary Tree
# #add_problem(0227 Medium  basic-calculator-ii) # Basic Calculator II
# #add_problem(0228 Medium  summary-ranges) # Summary Ranges
# #add_problem(0229 Medium  majority-element-ii) # Majority Element II
# #add_problem(0230 Medium  kth-smallest-element-in-a-bst) # Kth Smallest Element in a BST
# #add_problem(0231  Easy   power-of-two) # Power of Two
# #add_problem(0232  Easy   implement-queue-using-stacks) # Implement Queue using Stacks
# #add_problem(0233  Hard   number-of-digit-one) # Number of Digit One
# #add_problem(0234  Easy   palindrome-linked-list) # Palindrome Linked List
# #add_problem(0235  Easy   lowest-common-ancestor-of-a-binary-search-tree) # Lowest Common Ancestor of a Binary Search Tree
# #add_problem(0236 Medium  lowest-common-ancestor-of-a-binary-tree) # Lowest Common Ancestor of a Binary Tree
# #add_problem(0237  Easy   delete-node-in-a-linked-list) # Delete Node in a Linked List
# #add_problem(0238 Medium  product-of-array-except-self) # Product of Array Except Self
# #add_problem(0239  Hard   sliding-window-maximum) # Sliding Window Maximum
# #add_problem(0240 Medium  search-a-2d-matrix-ii) # Search a 2D Matrix II
# #add_problem(0241 Medium  different-ways-to-add-parentheses) # Different Ways to Add Parentheses
# #add_problem(0242  Easy   valid-anagram) # Valid Anagram
# #add_problem(0243  Easy   shortest-word-distance) # Shortest Word Distance
# #add_problem(0244 Medium  shortest-word-distance-ii) # Shortest Word Distance II
# #add_problem(0245 Medium  shortest-word-distance-iii) # Shortest Word Distance III
# #add_problem(0246  Easy   strobogrammatic-number) # Strobogrammatic Number
# #add_problem(0247 Medium  strobogrammatic-number-ii) # Strobogrammatic Number II
# #add_problem(0248  Hard   strobogrammatic-number-iii) # Strobogrammatic Number III
# #add_problem(0249 Medium  group-shifted-strings) # Group Shifted Strings
# #add_problem(0250 Medium  count-univalue-subtrees) # Count Univalue Subtrees
# #add_problem(0251 Medium  flatten-2d-vector) # Flatten 2D Vector
# #add_problem(0252  Easy   meeting-rooms) # Meeting Rooms
# #add_problem(0253 Medium  meeting-rooms-ii) # Meeting Rooms II
# #add_problem(0254 Medium  factor-combinations) # Factor Combinations
# #add_problem(0255 Medium  verify-preorder-sequence-in-binary-search-tree) # Verify Preorder Sequence in Binary Search Tree
# #add_problem(0256  Easy   paint-house) # Paint House
# #add_problem(0257  Easy   binary-tree-paths) # Binary Tree Paths
# add_problem(0258  Easy   add-digits) # Add Digits
# #add_problem(0259 Medium  3sum-smaller) # 3Sum Smaller
# #add_problem(0260 Medium  single-number-iii) # Single Number III
# #add_problem(0261 Medium  graph-valid-tree) # Graph Valid Tree
# #add_problem(0263  Easy   ugly-number) # Ugly Number
# #add_problem(0264 Medium  ugly-number-ii) # Ugly Number II
# #add_problem(0265  Hard   paint-house-ii) # Paint House II
# #add_problem(0266  Easy   palindrome-permutation) # Palindrome Permutation
# #add_problem(0267 Medium  palindrome-permutation-ii) # Palindrome Permutation II
# #add_problem(0268  Easy   missing-number) # Missing Number
# #add_problem(0269  Hard   alien-dictionary) # Alien Dictionary
# #add_problem(0270  Easy   closest-binary-search-tree-value) # Closest Binary Search Tree Value
# #add_problem(0271 Medium  encode-and-decode-strings) # Encode and Decode Strings
# #add_problem(0272  Hard   closest-binary-search-tree-value-ii) # Closest Binary Search Tree Value II
# #add_problem(0273  Hard   integer-to-english-words) # Integer to English Words
# #add_problem(0274 Medium  h-index) # H-Index
# #add_problem(0275 Medium  h-index-ii) # H-Index II
# #add_problem(0276  Easy   paint-fence) # Paint Fence
# #add_problem(0277 Medium  find-the-celebrity) # Find the Celebrity
# #add_problem(0278  Easy   first-bad-version) # First Bad Version
# #add_problem(0279 Medium  perfect-squares) # Perfect Squares
# #add_problem(0280 Medium  wiggle-sort) # Wiggle Sort
# #add_problem(0281 Medium  zigzag-iterator) # Zigzag Iterator
# #add_problem(0282  Hard   expression-add-operators) # Expression Add Operators
# #add_problem(0283  Easy   move-zeroes) # Move Zeroes
# #add_problem(0284 Medium  peeking-iterator) # Peeking Iterator
# #add_problem(0285 Medium  inorder-successor-in-bst) # Inorder Successor in BST
# #add_problem(0286 Medium  walls-and-gates) # Walls and Gates
# #add_problem(0287 Medium  find-the-duplicate-number) # Find the Duplicate Number
# #add_problem(0288 Medium  unique-word-abbreviation) # Unique Word Abbreviation
# #add_problem(0289 Medium  game-of-life) # Game of Life
# #add_problem(0290  Easy   word-pattern) # Word Pattern
# #add_problem(0291  Hard   word-pattern-ii) # Word Pattern II
# #add_problem(0292  Easy   nim-game) # Nim Game
# #add_problem(0293  Easy   flip-game) # Flip Game
# #add_problem(0294 Medium  flip-game-ii) # Flip Game II
# #add_problem(0295  Hard   find-median-from-data-stream) # Find Median from Data Stream
# #add_problem(0296  Hard   best-meeting-point) # Best Meeting Point
# #add_problem(0297  Hard   serialize-and-deserialize-binary-tree) # Serialize and Deserialize Binary Tree
# #add_problem(0298 Medium  binary-tree-longest-consecutive-sequence) # Binary Tree Longest Consecutive Sequence
# #add_problem(0299 Medium  bulls-and-cows) # Bulls and Cows
# #add_problem(0300 Medium  longest-increasing-subsequence) # Longest Increasing Subsequence
# #add_problem(0301  Hard   remove-invalid-parentheses) # Remove Invalid Parentheses
# #add_problem(0302  Hard   smallest-rectangle-enclosing-black-pixels) # Smallest Rectangle Enclosing Black Pixels
# #add_problem(0303  Easy   range-sum-query-immutable) # Range Sum Query - Immutable
# #add_problem(0304 Medium  range-sum-query-2d-immutable) # Range Sum Query 2D - Immutable
# #add_problem(0305  Hard   number-of-islands-ii) # Number of Islands II
# #add_problem(0306 Medium  additive-number) # Additive Number
# #add_problem(0307 Medium  range-sum-query-mutable) # Range Sum Query - Mutable
# #add_problem(0308  Hard   range-sum-query-2d-mutable) # Range Sum Query 2D - Mutable
# #add_problem(0309 Medium  best-time-to-buy-and-sell-stock-with-cooldown) # Best Time to Buy and Sell Stock with Cooldown
# #add_problem(0310 Medium  minimum-height-trees) # Minimum Height Trees
# #add_problem(0311 Medium  sparse-matrix-multiplication) # Sparse Matrix Multiplication
# #add_problem(0312  Hard   burst-balloons) # Burst Balloons
# #add_problem(0313 Medium  super-ugly-number) # Super Ugly Number
# #add_problem(0314 Medium  binary-tree-vertical-order-traversal) # Binary Tree Vertical Order Traversal
# #add_problem(0315  Hard   count-of-smaller-numbers-after-self) # Count of Smaller Numbers After Self
# #add_problem(0316  Hard   remove-duplicate-letters) # Remove Duplicate Letters
# #add_problem(0317  Hard   shortest-distance-from-all-buildings) # Shortest Distance from All Buildings
# #add_problem(0318 Medium  maximum-product-of-word-lengths) # Maximum Product of Word Lengths
# #add_problem(0319 Medium  bulb-switcher) # Bulb Switcher
# #add_problem(0320 Medium  generalized-abbreviation) # Generalized Abbreviation
# #add_problem(0321  Hard   create-maximum-number) # Create Maximum Number
# #add_problem(0322 Medium  coin-change) # Coin Change
# #add_problem(0323 Medium  number-of-connected-components-in-an-undirected-graph) # Number of Connected Components in an Undirected Graph
# #add_problem(0324 Medium  wiggle-sort-ii) # Wiggle Sort II
# #add_problem(0325 Medium  maximum-size-subarray-sum-equals-k) # Maximum Size Subarray Sum Equals k
# #add_problem(0326  Easy   power-of-three) # Power of Three
# #add_problem(0327  Hard   count-of-range-sum) # Count of Range Sum
# #add_problem(0328 Medium  odd-even-linked-list) # Odd Even Linked List
# #add_problem(0329  Hard   longest-increasing-path-in-a-matrix) # Longest Increasing Path in a Matrix
# #add_problem(0330  Hard   patching-array) # Patching Array
# #add_problem(0331 Medium  verify-preorder-serialization-of-a-binary-tree) # Verify Preorder Serialization of a Binary Tree
# #add_problem(0332 Medium  reconstruct-itinerary) # Reconstruct Itinerary
# #add_problem(0333 Medium  largest-bst-subtree) # Largest BST Subtree
# #add_problem(0334 Medium  increasing-triplet-subsequence) # Increasing Triplet Subsequence
# #add_problem(0335  Hard   self-crossing) # Self Crossing
# #add_problem(0336  Hard   palindrome-pairs) # Palindrome Pairs
# #add_problem(0337 Medium  house-robber-iii) # House Robber III
# #add_problem(0338 Medium  counting-bits) # Counting Bits
# #add_problem(0339  Easy   nested-list-weight-sum) # Nested List Weight Sum
# #add_problem(0340  Hard   longest-substring-with-at-most-k-distinct-characters) # Longest Substring with At Most K Distinct Characters
# #add_problem(0341 Medium  flatten-nested-list-iterator) # Flatten Nested List Iterator
# #add_problem(0342  Easy   power-of-four) # Power of Four
# #add_problem(0343 Medium  integer-break) # Integer Break
# #add_problem(0344  Easy   reverse-string) # Reverse String
# #add_problem(0345  Easy   reverse-vowels-of-a-string) # Reverse Vowels of a String
# #add_problem(0346  Easy   moving-average-from-data-stream) # Moving Average from Data Stream
# #add_problem(0347 Medium  top-k-frequent-elements) # Top K Frequent Elements
# #add_problem(0348 Medium  design-tic-tac-toe) # Design Tic-Tac-Toe
# #add_problem(0349  Easy   intersection-of-two-arrays) # Intersection of Two Arrays
# #add_problem(0350  Easy   intersection-of-two-arrays-ii) # Intersection of Two Arrays II
# #add_problem(0351 Medium  android-unlock-patterns) # Android Unlock Patterns
# #add_problem(0352  Hard   data-stream-as-disjoint-intervals) # Data Stream as Disjoint Intervals
# #add_problem(0353 Medium  design-snake-game) # Design Snake Game
# #add_problem(0354  Hard   russian-doll-envelopes) # Russian Doll Envelopes
# #add_problem(0355 Medium  design-twitter) # Design Twitter
# #add_problem(0356 Medium  line-reflection) # Line Reflection
# #add_problem(0357 Medium  count-numbers-with-unique-digits) # Count Numbers with Unique Digits
# #add_problem(0358  Hard   rearrange-string-k-distance-apart) # Rearrange String k Distance Apart
# #add_problem(0359  Easy   logger-rate-limiter) # Logger Rate Limiter
# #add_problem(0360 Medium  sort-transformed-array) # Sort Transformed Array
# #add_problem(0361 Medium  bomb-enemy) # Bomb Enemy
# #add_problem(0362 Medium  design-hit-counter) # Design Hit Counter
# #add_problem(0363  Hard   max-sum-of-rectangle-no-larger-than-k) # Max Sum of Rectangle No Larger Than K
# #add_problem(0364 Medium  nested-list-weight-sum-ii) # Nested List Weight Sum II
# #add_problem(0365 Medium  water-and-jug-problem) # Water and Jug Problem
# #add_problem(0366 Medium  find-leaves-of-binary-tree) # Find Leaves of Binary Tree
# #add_problem(0367  Easy   valid-perfect-square) # Valid Perfect Square
# #add_problem(0368 Medium  largest-divisible-subset) # Largest Divisible Subset
# #add_problem(0369 Medium  plus-one-linked-list) # Plus One Linked List
# #add_problem(0370 Medium  range-addition) # Range Addition
# #add_problem(0371  Easy   sum-of-two-integers) # Sum of Two Integers
# #add_problem(0372 Medium  super-pow) # Super Pow
# #add_problem(0373 Medium  find-k-pairs-with-smallest-sums) # Find K Pairs with Smallest Sums
# #add_problem(0374  Easy   guess-number-higher-or-lower) # Guess Number Higher or Lower
# #add_problem(0375 Medium  guess-number-higher-or-lower-ii) # Guess Number Higher or Lower II
# #add_problem(0376 Medium  wiggle-subsequence) # Wiggle Subsequence
# #add_problem(0377 Medium  combination-sum-iv) # Combination Sum IV
# #add_problem(0378 Medium  kth-smallest-element-in-a-sorted-matrix) # Kth Smallest Element in a Sorted Matrix
# #add_problem(0379 Medium  design-phone-directory) # Design Phone Directory
# #add_problem(0380 Medium  insert-delete-getrandom-o1) # Insert Delete GetRandom O(1)
# #add_problem(0381  Hard   insert-delete-getrandom-o1-duplicates-allowed) # Insert Delete GetRandom O(1) - Duplicates allowed
# #add_problem(0382 Medium  linked-list-random-node) # Linked List Random Node
# #add_problem(0383  Easy   ransom-note) # Ransom Note
# #add_problem(0384 Medium  shuffle-an-array) # Shuffle an Array
# #add_problem(0385 Medium  mini-parser) # Mini Parser
# #add_problem(0386 Medium  lexicographical-numbers) # Lexicographical Numbers
# #add_problem(0387  Easy   first-unique-character-in-a-string) # First Unique Character in a String
# #add_problem(0388 Medium  longest-absolute-file-path) # Longest Absolute File Path
# #add_problem(0389  Easy   find-the-difference) # Find the Difference
# #add_problem(0390 Medium  elimination-game) # Elimination Game
# #add_problem(0391  Hard   perfect-rectangle) # Perfect Rectangle
# #add_problem(0392 Medium  is-subsequence) # Is Subsequence
# #add_problem(0393 Medium  utf-8-validation) # UTF-8 Validation
# #add_problem(0394 Medium  decode-string) # Decode String
# #add_problem(0395 Medium  longest-substring-with-at-least-k-repeating-characters) # Longest Substring with At Least K Repeating Characters
# #add_problem(0396 Medium  rotate-function) # Rotate Function
# #add_problem(0397 Medium  integer-replacement) # Integer Replacement
# #add_problem(0398 Medium  random-pick-index) # Random Pick Index
# #add_problem(0399 Medium  evaluate-division) # Evaluate Division
# #add_problem(0400  Easy   nth-digit) # Nth Digit
# #add_problem(0401  Easy   binary-watch) # Binary Watch
# #add_problem(0402 Medium  remove-k-digits) # Remove K Digits
# #add_problem(0403  Hard   frog-jump) # Frog Jump
# #add_problem(0404  Easy   sum-of-left-leaves) # Sum of Left Leaves
# #add_problem(0405  Easy   convert-a-number-to-hexadecimal) # Convert a Number to Hexadecimal
# #add_problem(0406 Medium  queue-reconstruction-by-height) # Queue Reconstruction by Height
# #add_problem(0407  Hard   trapping-rain-water-ii) # Trapping Rain Water II
# #add_problem(0408  Easy   valid-word-abbreviation) # Valid Word Abbreviation
# #add_problem(0409  Easy   longest-palindrome) # Longest Palindrome
# #add_problem(0410  Hard   split-array-largest-sum) # Split Array Largest Sum
# #add_problem(0411  Hard   minimum-unique-word-abbreviation) # Minimum Unique Word Abbreviation
# #add_problem(0412  Easy   fizz-buzz) # Fizz Buzz
# #add_problem(0413 Medium  arithmetic-slices) # Arithmetic Slices
# #add_problem(0414  Easy   third-maximum-number) # Third Maximum Number
# #add_problem(0415  Easy   add-strings) # Add Strings
# #add_problem(0416 Medium  partition-equal-subset-sum) # Partition Equal Subset Sum
# #add_problem(0417 Medium  pacific-atlantic-water-flow) # Pacific Atlantic Water Flow
# #add_problem(0418 Medium  sentence-screen-fitting) # Sentence Screen Fitting
# #add_problem(0419 Medium  battleships-in-a-board) # Battleships in a Board
# #add_problem(0420  Hard   strong-password-checker) # Strong Password Checker
# #add_problem(0421 Medium  maximum-xor-of-two-numbers-in-an-array) # Maximum XOR of Two Numbers in an Array
# #add_problem(0422  Easy   valid-word-square) # Valid Word Square
# #add_problem(0423 Medium  reconstruct-original-digits-from-english) # Reconstruct Original Digits from English
# #add_problem(0424 Medium  longest-repeating-character-replacement) # Longest Repeating Character Replacement
# #add_problem(0425  Hard   word-squares) # Word Squares
# #add_problem(0426 Medium  convert-binary-search-tree-to-sorted-doubly-linked-list) # Convert Binary Search Tree to Sorted Doubly Linked List
# #add_problem(0427  Easy   construct-quad-tree) # Construct Quad Tree
# #add_problem(0428  Hard   serialize-and-deserialize-n-ary-tree) # Serialize and Deserialize N-ary Tree
# #add_problem(0429  Easy   n-ary-tree-level-order-traversal) # N-ary Tree Level Order Traversal
# #add_problem(0430 Medium  flatten-a-multilevel-doubly-linked-list) # Flatten a Multilevel Doubly Linked List
# #add_problem(0431  Hard   encode-n-ary-tree-to-binary-tree) # Encode N-ary Tree to Binary Tree
# #add_problem(0432  Hard   all-oone-data-structure) # All O`one Data Structure
# #add_problem(0433 Medium  minimum-genetic-mutation) # Minimum Genetic Mutation
# #add_problem(0434  Easy   number-of-segments-in-a-string) # Number of Segments in a String
# #add_problem(0435 Medium  non-overlapping-intervals) # Non-overlapping Intervals
# #add_problem(0436 Medium  find-right-interval) # Find Right Interval
# #add_problem(0437  Easy   path-sum-iii) # Path Sum III
# #add_problem(0438  Easy   find-all-anagrams-in-a-string) # Find All Anagrams in a String
# #add_problem(0439 Medium  ternary-expression-parser) # Ternary Expression Parser
# #add_problem(0440  Hard   k-th-smallest-in-lexicographical-order) # K-th Smallest in Lexicographical Order
# #add_problem(0441  Easy   arranging-coins) # Arranging Coins
# #add_problem(0442 Medium  find-all-duplicates-in-an-array) # Find All Duplicates in an Array
# #add_problem(0443  Easy   string-compression) # String Compression
# #add_problem(0444 Medium  sequence-reconstruction) # Sequence Reconstruction
# #add_problem(0445 Medium  add-two-numbers-ii) # Add Two Numbers II
# #add_problem(0446  Hard   arithmetic-slices-ii-subsequence) # Arithmetic Slices II - Subsequence
# #add_problem(0447  Easy   number-of-boomerangs) # Number of Boomerangs
# #add_problem(0448  Easy   find-all-numbers-disappeared-in-an-array) # Find All Numbers Disappeared in an Array
# #add_problem(0449 Medium  serialize-and-deserialize-bst) # Serialize and Deserialize BST
# #add_problem(0450 Medium  delete-node-in-a-bst) # Delete Node in a BST
# #add_problem(0451 Medium  sort-characters-by-frequency) # Sort Characters By Frequency
# #add_problem(0452 Medium  minimum-number-of-arrows-to-burst-balloons) # Minimum Number of Arrows to Burst Balloons
# #add_problem(0453  Easy   minimum-moves-to-equal-array-elements) # Minimum Moves to Equal Array Elements
# #add_problem(0454 Medium  4sum-ii) # 4Sum II
# #add_problem(0455  Easy   assign-cookies) # Assign Cookies
# #add_problem(0456 Medium  132-pattern) # 132 Pattern
# #add_problem(0457 Medium  circular-array-loop) # Circular Array Loop
# #add_problem(0458  Easy   poor-pigs) # Poor Pigs
# #add_problem(0459  Easy   repeated-substring-pattern) # Repeated Substring Pattern
# #add_problem(0460  Hard   lfu-cache) # LFU Cache
# #add_problem(0461  Easy   hamming-distance) # Hamming Distance
# #add_problem(0462 Medium  minimum-moves-to-equal-array-elements-ii) # Minimum Moves to Equal Array Elements II
# #add_problem(0463  Easy   island-perimeter) # Island Perimeter
# #add_problem(0464 Medium  can-i-win) # Can I Win
# #add_problem(0465  Hard   optimal-account-balancing) # Optimal Account Balancing
# #add_problem(0466  Hard   count-the-repetitions) # Count The Repetitions
# #add_problem(0467 Medium  unique-substrings-in-wraparound-string) # Unique Substrings in Wraparound String
# #add_problem(0468 Medium  validate-ip-address) # Validate IP Address
# #add_problem(0469 Medium  convex-polygon) # Convex Polygon
# #add_problem(0470 Medium  implement-rand10-using-rand7) # Implement Rand10() Using Rand7()
# #add_problem(0471  Hard   encode-string-with-shortest-length) # Encode String with Shortest Length
# #add_problem(0472  Hard   concatenated-words) # Concatenated Words
# #add_problem(0473 Medium  matchsticks-to-square) # Matchsticks to Square
# #add_problem(0474 Medium  ones-and-zeroes) # Ones and Zeroes
# #add_problem(0475  Easy   heaters) # Heaters
# #add_problem(0476  Easy   number-complement) # Number Complement
# #add_problem(0477 Medium  total-hamming-distance) # Total Hamming Distance
# #add_problem(0478 Medium  generate-random-point-in-a-circle) # Generate Random Point in a Circle
# #add_problem(0479  Easy   largest-palindrome-product) # Largest Palindrome Product
# #add_problem(0480  Hard   sliding-window-median) # Sliding Window Median
# #add_problem(0481 Medium  magical-string) # Magical String
# #add_problem(0482  Easy   license-key-formatting) # License Key Formatting
# #add_problem(0483  Hard   smallest-good-base) # Smallest Good Base
# #add_problem(0484 Medium  find-permutation) # Find Permutation
# #add_problem(0485  Easy   max-consecutive-ones) # Max Consecutive Ones
# #add_problem(0486 Medium  predict-the-winner) # Predict the Winner
# #add_problem(0487 Medium  max-consecutive-ones-ii) # Max Consecutive Ones II
# #add_problem(0488  Hard   zuma-game) # Zuma Game
# #add_problem(0489  Hard   robot-room-cleaner) # Robot Room Cleaner
# #add_problem(0490 Medium  the-maze) # The Maze
# #add_problem(0491 Medium  increasing-subsequences) # Increasing Subsequences
# #add_problem(0492  Easy   construct-the-rectangle) # Construct the Rectangle
# #add_problem(0493  Hard   reverse-pairs) # Reverse Pairs
# #add_problem(0494 Medium  target-sum) # Target Sum
# #add_problem(0495 Medium  teemo-attacking) # Teemo Attacking
# #add_problem(0496  Easy   next-greater-element-i) # Next Greater Element I
# #add_problem(0497 Medium  random-point-in-non-overlapping-rectangles) # Random Point in Non-overlapping Rectangles
# #add_problem(0498 Medium  diagonal-traverse) # Diagonal Traverse
# #add_problem(0499  Hard   the-maze-iii) # The Maze III
# #add_problem(0500  Easy   keyboard-row) # Keyboard Row
# #add_problem(0501  Easy   find-mode-in-binary-search-tree) # Find Mode in Binary Search Tree
# #add_problem(0502  Hard   ipo) # IPO
# #add_problem(0503 Medium  next-greater-element-ii) # Next Greater Element II
# #add_problem(0504  Easy   base-7) # Base 7
# #add_problem(0505 Medium  the-maze-ii) # The Maze II
# #add_problem(0506  Easy   relative-ranks) # Relative Ranks
# #add_problem(0507  Easy   perfect-number) # Perfect Number
# #add_problem(0508 Medium  most-frequent-subtree-sum) # Most Frequent Subtree Sum
# #add_problem(0509  Easy   fibonacci-number) # Fibonacci Number
# #add_problem(0513 Medium  find-bottom-left-tree-value) # Find Bottom Left Tree Value
# #add_problem(0514  Hard   freedom-trail) # Freedom Trail
# #add_problem(0515 Medium  find-largest-value-in-each-tree-row) # Find Largest Value in Each Tree Row
# #add_problem(0516 Medium  longest-palindromic-subsequence) # Longest Palindromic Subsequence
# #add_problem(0517  Hard   super-washing-machines) # Super Washing Machines
# #add_problem(0518 Medium  coin-change-2) # Coin Change 2
# #add_problem(0519 Medium  random-flip-matrix) # Random Flip Matrix
# #add_problem(0520  Easy   detect-capital) # Detect Capital
# #add_problem(0521  Easy   longest-uncommon-subsequence-i) # Longest Uncommon Subsequence I 
# #add_problem(0522 Medium  longest-uncommon-subsequence-ii) # Longest Uncommon Subsequence II
# #add_problem(0523 Medium  continuous-subarray-sum) # Continuous Subarray Sum
# #add_problem(0524 Medium  longest-word-in-dictionary-through-deleting) # Longest Word in Dictionary through Deleting
# #add_problem(0525 Medium  contiguous-array) # Contiguous Array
# #add_problem(0526 Medium  beautiful-arrangement) # Beautiful Arrangement
# #add_problem(0527  Hard   word-abbreviation) # Word Abbreviation
# #add_problem(0528 Medium  random-pick-with-weight) # Random Pick with Weight
# #add_problem(0529 Medium  minesweeper) # Minesweeper
# #add_problem(0530  Easy   minimum-absolute-difference-in-bst) # Minimum Absolute Difference in BST
# #add_problem(0531 Medium  lonely-pixel-i) # Lonely Pixel I
# #add_problem(0532  Easy   k-diff-pairs-in-an-array) # K-diff Pairs in an Array
# #add_problem(0533 Medium  lonely-pixel-ii) # Lonely Pixel II
# #add_problem(0535 Medium  encode-and-decode-tinyurl) # Encode and Decode TinyURL
# #add_problem(0536 Medium  construct-binary-tree-from-string) # Construct Binary Tree from String
# #add_problem(0537 Medium  complex-number-multiplication) # Complex Number Multiplication
# #add_problem(0538  Easy   convert-bst-to-greater-tree) # Convert BST to Greater Tree
# #add_problem(0539 Medium  minimum-time-difference) # Minimum Time Difference
# #add_problem(0540 Medium  single-element-in-a-sorted-array) # Single Element in a Sorted Array
# #add_problem(0541  Easy   reverse-string-ii) # Reverse String II
# #add_problem(0542 Medium  01-matrix) # 01 Matrix
# #add_problem(0543  Easy   diameter-of-binary-tree) # Diameter of Binary Tree
# #add_problem(0544 Medium  output-contest-matches) # Output Contest Matches
# #add_problem(0545 Medium  boundary-of-binary-tree) # Boundary of Binary Tree
# #add_problem(0546  Hard   remove-boxes) # Remove Boxes
# #add_problem(0547 Medium  friend-circles) # Friend Circles
# #add_problem(0548 Medium  split-array-with-equal-sum) # Split Array with Equal Sum
# #add_problem(0549 Medium  binary-tree-longest-consecutive-sequence-ii) # Binary Tree Longest Consecutive Sequence II
# #add_problem(0551  Easy   student-attendance-record-i) # Student Attendance Record I
# #add_problem(0552  Hard   student-attendance-record-ii) # Student Attendance Record II
# #add_problem(0553 Medium  optimal-division) # Optimal Division
# #add_problem(0554 Medium  brick-wall) # Brick Wall
# #add_problem(0555 Medium  split-concatenated-strings) # Split Concatenated Strings
# #add_problem(0556 Medium  next-greater-element-iii) # Next Greater Element III
# #add_problem(0557  Easy   reverse-words-in-a-string-iii) # Reverse Words in a String III
# #add_problem(0558  Easy   quad-tree-intersection) # Quad Tree Intersection
# #add_problem(0559  Easy   maximum-depth-of-n-ary-tree) # Maximum Depth of N-ary Tree
# #add_problem(0560 Medium  subarray-sum-equals-k) # Subarray Sum Equals K
# #add_problem(0561  Easy   array-partition-i) # Array Partition I
# #add_problem(0562 Medium  longest-line-of-consecutive-one-in-matrix) # Longest Line of Consecutive One in Matrix
# #add_problem(0563  Easy   binary-tree-tilt) # Binary Tree Tilt
# #add_problem(0564  Hard   find-the-closest-palindrome) # Find the Closest Palindrome
# #add_problem(0565 Medium  array-nesting) # Array Nesting
# #add_problem(0566  Easy   reshape-the-matrix) # Reshape the Matrix
# #add_problem(0567 Medium  permutation-in-string) # Permutation in String
# #add_problem(0568  Hard   maximum-vacation-days) # Maximum Vacation Days
# #add_problem(0569  Hard   median-employee-salary) # Median Employee Salary
# #add_problem(0570 Medium  managers-with-at-least-5-direct-reports) # Managers with at Least 5 Direct Reports
# #add_problem(0571  Hard   find-median-given-frequency-of-numbers) # Find Median Given Frequency of Numbers
# #add_problem(0572  Easy   subtree-of-another-tree) # Subtree of Another Tree
# #add_problem(0573 Medium  squirrel-simulation) # Squirrel Simulation
# #add_problem(0574 Medium  winning-candidate) # Winning Candidate
# #add_problem(0575  Easy   distribute-candies) # Distribute Candies
# #add_problem(0576 Medium  out-of-boundary-paths) # Out of Boundary Paths
# #add_problem(0577  Easy   employee-bonus) # Employee Bonus
# #add_problem(0578 Medium  get-highest-answer-rate-question) # Get Highest Answer Rate Question
# #add_problem(0579  Hard   find-cumulative-salary-of-an-employee) # Find Cumulative Salary of an Employee
# #add_problem(0580 Medium  count-student-number-in-departments) # Count Student Number in Departments
# #add_problem(0581  Easy   shortest-unsorted-continuous-subarray) # Shortest Unsorted Continuous Subarray
# #add_problem(0582 Medium  kill-process) # Kill Process
# #add_problem(0583 Medium  delete-operation-for-two-strings) # Delete Operation for Two Strings
# #add_problem(0584  Easy   find-customer-referee) # Find Customer Referee
# #add_problem(0585 Medium  investments-in-2016) # Investments in 2016
# #add_problem(0586  Easy   customer-placing-the-largest-number-of-orders) # Customer Placing the Largest Number of Orders
# #add_problem(0587  Hard   erect-the-fence) # Erect the Fence
# #add_problem(0588  Hard   design-in-memory-file-system) # Design In-Memory File System
# #add_problem(0589  Easy   n-ary-tree-preorder-traversal) # N-ary Tree Preorder Traversal
# #add_problem(0590  Easy   n-ary-tree-postorder-traversal) # N-ary Tree Postorder Traversal
# #add_problem(0591  Hard   tag-validator) # Tag Validator
# #add_problem(0592 Medium  fraction-addition-and-subtraction) # Fraction Addition and Subtraction
# #add_problem(0593 Medium  valid-square) # Valid Square
# #add_problem(0594  Easy   longest-harmonious-subsequence) # Longest Harmonious Subsequence
# #add_problem(0597  Easy   friend-requests-i-overall-acceptance-rate) # Friend Requests I: Overall Acceptance Rate
# #add_problem(0598  Easy   range-addition-ii) # Range Addition II
# #add_problem(0599  Easy   minimum-index-sum-of-two-lists) # Minimum Index Sum of Two Lists
# #add_problem(0600  Hard   non-negative-integers-without-consecutive-ones) # Non-negative Integers without Consecutive Ones
# #add_problem(0602 Medium  friend-requests-ii-who-has-the-most-friends) # Friend Requests II: Who Has the Most Friends
# #add_problem(0603  Easy   consecutive-available-seats) # Consecutive Available Seats
# #add_problem(0604  Easy   design-compressed-string-iterator) # Design Compressed String Iterator
# #add_problem(0605  Easy   can-place-flowers) # Can Place Flowers
# #add_problem(0606  Easy   construct-string-from-binary-tree) # Construct String from Binary Tree
# #add_problem(0607  Easy   sales-person) # Sales Person
# #add_problem(0608 Medium  tree-node) # Tree Node
# #add_problem(0609 Medium  find-duplicate-file-in-system) # Find Duplicate File in System
# #add_problem(0610  Easy   triangle-judgement) # Triangle Judgement
# #add_problem(0611 Medium  valid-triangle-number) # Valid Triangle Number
# #add_problem(0612 Medium  shortest-distance-in-a-plane) # Shortest Distance in a Plane
# #add_problem(0613  Easy   shortest-distance-in-a-line) # Shortest Distance in a Line
# #add_problem(0614 Medium  second-degree-follower) # Second Degree Follower
# #add_problem(0615  Hard   average-salary-departments-vs-company) # Average Salary: Departments VS Company
# #add_problem(0616 Medium  add-bold-tag-in-string) # Add Bold Tag in String
# #add_problem(0617  Easy   merge-two-binary-trees) # Merge Two Binary Trees
# #add_problem(0618  Hard   students-report-by-geography) # Students Report By Geography
# #add_problem(0619  Easy   biggest-single-number) # Biggest Single Number
# #add_problem(0621 Medium  task-scheduler) # Task Scheduler
# #add_problem(0622 Medium  design-circular-queue) # Design Circular Queue
# #add_problem(0623 Medium  add-one-row-to-tree) # Add One Row to Tree
# #add_problem(0624  Easy   maximum-distance-in-arrays) # Maximum Distance in Arrays
# #add_problem(0625 Medium  minimum-factorization) # Minimum Factorization
# #add_problem(0628  Easy   maximum-product-of-three-numbers) # Maximum Product of Three Numbers
# #add_problem(0629  Hard   k-inverse-pairs-array) # K Inverse Pairs Array
# #add_problem(0630  Hard   course-schedule-iii) # Course Schedule III
# #add_problem(0631  Hard   design-excel-sum-formula) # Design Excel Sum Formula
# #add_problem(0632  Hard   smallest-range) # Smallest Range
# #add_problem(0633  Easy   sum-of-square-numbers) # Sum of Square Numbers
# #add_problem(0634 Medium  find-the-derangement-of-an-array) # Find the Derangement of An Array
# #add_problem(0635 Medium  design-log-storage-system) # Design Log Storage System
# #add_problem(0636 Medium  exclusive-time-of-functions) # Exclusive Time of Functions
# #add_problem(0637  Easy   average-of-levels-in-binary-tree) # Average of Levels in Binary Tree
# #add_problem(0638 Medium  shopping-offers) # Shopping Offers
# #add_problem(0639  Hard   decode-ways-ii) # Decode Ways II
# #add_problem(0640 Medium  solve-the-equation) # Solve the Equation
# #add_problem(0641 Medium  design-circular-deque) # Design Circular Deque
# #add_problem(0642  Hard   design-search-autocomplete-system) # Design Search Autocomplete System
# #add_problem(0643  Easy   maximum-average-subarray-i) # Maximum Average Subarray I
# #add_problem(0644  Hard   maximum-average-subarray-ii) # Maximum Average Subarray II
# #add_problem(0645  Easy   set-mismatch) # Set Mismatch
# #add_problem(0646 Medium  maximum-length-of-pair-chain) # Maximum Length of Pair Chain
# #add_problem(0647 Medium  palindromic-substrings) # Palindromic Substrings
# #add_problem(0648 Medium  replace-words) # Replace Words
# #add_problem(0649 Medium  dota2-senate) # Dota2 Senate
# #add_problem(0650 Medium  2-keys-keyboard) # 2 Keys Keyboard
# #add_problem(0651 Medium  4-keys-keyboard) # 4 Keys Keyboard
# #add_problem(0652 Medium  find-duplicate-subtrees) # Find Duplicate Subtrees
# #add_problem(0653  Easy   two-sum-iv-input-is-a-bst) # Two Sum IV - Input is a BST
# #add_problem(0654 Medium  maximum-binary-tree) # Maximum Binary Tree
# #add_problem(0655 Medium  print-binary-tree) # Print Binary Tree
# #add_problem(0656  Hard   coin-path) # Coin Path
# #add_problem(0657  Easy   robot-return-to-origin) # Robot Return to Origin
# #add_problem(0658 Medium  find-k-closest-elements) # Find K Closest Elements
# #add_problem(0659 Medium  split-array-into-consecutive-subsequences) # Split Array into Consecutive Subsequences
# #add_problem(0660  Hard   remove-9) # Remove 9
# #add_problem(0661  Easy   image-smoother) # Image Smoother
# #add_problem(0662 Medium  maximum-width-of-binary-tree) # Maximum Width of Binary Tree
# #add_problem(0663 Medium  equal-tree-partition) # Equal Tree Partition
# #add_problem(0664  Hard   strange-printer) # Strange Printer
# #add_problem(0665  Easy   non-decreasing-array) # Non-decreasing Array
# #add_problem(0666 Medium  path-sum-iv) # Path Sum IV
# #add_problem(0667 Medium  beautiful-arrangement-ii) # Beautiful Arrangement II
# #add_problem(0668  Hard   kth-smallest-number-in-multiplication-table) # Kth Smallest Number in Multiplication Table
# #add_problem(0669  Easy   trim-a-binary-search-tree) # Trim a Binary Search Tree
# #add_problem(0670 Medium  maximum-swap) # Maximum Swap
# #add_problem(0671  Easy   second-minimum-node-in-a-binary-tree) # Second Minimum Node In a Binary Tree
# #add_problem(0672 Medium  bulb-switcher-ii) # Bulb Switcher II
# #add_problem(0673 Medium  number-of-longest-increasing-subsequence) # Number of Longest Increasing Subsequence
# #add_problem(0674  Easy   longest-continuous-increasing-subsequence) # Longest Continuous Increasing Subsequence
# #add_problem(0675  Hard   cut-off-trees-for-golf-event) # Cut Off Trees for Golf Event
# #add_problem(0676 Medium  implement-magic-dictionary) # Implement Magic Dictionary
# #add_problem(0677 Medium  map-sum-pairs) # Map Sum Pairs
# #add_problem(0678 Medium  valid-parenthesis-string) # Valid Parenthesis String
# #add_problem(0679  Hard   24-game) # 24 Game
# #add_problem(0680  Easy   valid-palindrome-ii) # Valid Palindrome II
# #add_problem(0681 Medium  next-closest-time) # Next Closest Time
# #add_problem(0682  Easy   baseball-game) # Baseball Game
# #add_problem(0683  Hard   k-empty-slots) # K Empty Slots
# #add_problem(0684 Medium  redundant-connection) # Redundant Connection
# #add_problem(0685  Hard   redundant-connection-ii) # Redundant Connection II
# #add_problem(0686  Easy   repeated-string-match) # Repeated String Match
# #add_problem(0687  Easy   longest-univalue-path) # Longest Univalue Path
# #add_problem(0688 Medium  knight-probability-in-chessboard) # Knight Probability in Chessboard
# #add_problem(0689  Hard   maximum-sum-of-3-non-overlapping-subarrays) # Maximum Sum of 3 Non-Overlapping Subarrays
# #add_problem(0690  Easy   employee-importance) # Employee Importance
# #add_problem(0691  Hard   stickers-to-spell-word) # Stickers to Spell Word
# #add_problem(0692 Medium  top-k-frequent-words) # Top K Frequent Words
# #add_problem(0693  Easy   binary-number-with-alternating-bits) # Binary Number with Alternating Bits
# #add_problem(0694 Medium  number-of-distinct-islands) # Number of Distinct Islands
# #add_problem(0695 Medium  max-area-of-island) # Max Area of Island
# #add_problem(0696  Easy   count-binary-substrings) # Count Binary Substrings
# #add_problem(0697  Easy   degree-of-an-array) # Degree of an Array
# #add_problem(0698 Medium  partition-to-k-equal-sum-subsets) # Partition to K Equal Sum Subsets
# #add_problem(0699  Hard   falling-squares) # Falling Squares
# #add_problem(0700  Easy   search-in-a-binary-search-tree) # Search in a Binary Search Tree
# #add_problem(0701 Medium  insert-into-a-binary-search-tree) # Insert into a Binary Search Tree
# #add_problem(0702 Medium  search-in-a-sorted-array-of-unknown-size) # Search in a Sorted Array of Unknown Size
# #add_problem(0703  Easy   kth-largest-element-in-a-stream) # Kth Largest Element in a Stream
# #add_problem(0704  Easy   binary-search) # Binary Search
# #add_problem(0705  Easy   design-hashset) # Design HashSet
# #add_problem(0706  Easy   design-hashmap) # Design HashMap
# #add_problem(0707  Easy   design-linked-list) # Design Linked List
# #add_problem(0708 Medium  insert-into-a-cyclic-sorted-list) # Insert into a Cyclic Sorted List
# #add_problem(0709  Easy   to-lower-case) # To Lower Case
# #add_problem(0710  Hard   random-pick-with-blacklist) # Random Pick with Blacklist
# #add_problem(0711  Hard   number-of-distinct-islands-ii) # Number of Distinct Islands II
# #add_problem(0712 Medium  minimum-ascii-delete-sum-for-two-strings) # Minimum ASCII Delete Sum for Two Strings
# #add_problem(0713 Medium  subarray-product-less-than-k) # Subarray Product Less Than K
# #add_problem(0714 Medium  best-time-to-buy-and-sell-stock-with-transaction-fee) # Best Time to Buy and Sell Stock with Transaction Fee
# #add_problem(0715  Hard   range-module) # Range Module
# #add_problem(0716  Easy   max-stack) # Max Stack
# #add_problem(0717  Easy   1-bit-and-2-bit-characters) # 1-bit and 2-bit Characters
# #add_problem(0718 Medium  maximum-length-of-repeated-subarray) # Maximum Length of Repeated Subarray
# #add_problem(0719  Hard   find-k-th-smallest-pair-distance) # Find K-th Smallest Pair Distance
# #add_problem(0720  Easy   longest-word-in-dictionary) # Longest Word in Dictionary
# #add_problem(0721 Medium  accounts-merge) # Accounts Merge
# #add_problem(0722 Medium  remove-comments) # Remove Comments
# #add_problem(0723 Medium  candy-crush) # Candy Crush
# #add_problem(0724  Easy   find-pivot-index) # Find Pivot Index
# #add_problem(0725 Medium  split-linked-list-in-parts) # Split Linked List in Parts
# #add_problem(0726  Hard   number-of-atoms) # Number of Atoms
# #add_problem(0727  Hard   minimum-window-subsequence) # Minimum Window Subsequence
# #add_problem(0728  Easy   self-dividing-numbers) # Self Dividing Numbers
# #add_problem(0729 Medium  my-calendar-i) # My Calendar I
# #add_problem(0730  Hard   count-different-palindromic-subsequences) # Count Different Palindromic Subsequences
# #add_problem(0731 Medium  my-calendar-ii) # My Calendar II
# #add_problem(0732  Hard   my-calendar-iii) # My Calendar III
# #add_problem(0733  Easy   flood-fill) # Flood Fill
# #add_problem(0734  Easy   sentence-similarity) # Sentence Similarity
# #add_problem(0735 Medium  asteroid-collision) # Asteroid Collision
# #add_problem(0736  Hard   parse-lisp-expression) # Parse Lisp Expression
# #add_problem(0737 Medium  sentence-similarity-ii) # Sentence Similarity II
# #add_problem(0738 Medium  monotone-increasing-digits) # Monotone Increasing Digits
# #add_problem(0739 Medium  daily-temperatures) # Daily Temperatures
# #add_problem(0740 Medium  delete-and-earn) # Delete and Earn
# #add_problem(0741  Hard   cherry-pickup) # Cherry Pickup
# #add_problem(0742 Medium  closest-leaf-in-a-binary-tree) # Closest Leaf in a Binary Tree
# #add_problem(0743  Easy   network-delay-time) # Network Delay Time
# #add_problem(0744  Easy   find-smallest-letter-greater-than-target) # Find Smallest Letter Greater Than Target
# #add_problem(0745  Hard   prefix-and-suffix-search) # Prefix and Suffix Search
# #add_problem(0746  Easy   min-cost-climbing-stairs) # Min Cost Climbing Stairs
# #add_problem(0747  Easy   largest-number-at-least-twice-of-others) # Largest Number At Least Twice of Others
# #add_problem(0748  Easy   shortest-completing-word) # Shortest Completing Word
# #add_problem(0749  Hard   contain-virus) # Contain Virus
# #add_problem(0750 Medium  number-of-corner-rectangles) # Number Of Corner Rectangles
# #add_problem(0751  Easy   ip-to-cidr) # IP to CIDR
# #add_problem(0752 Medium  open-the-lock) # Open the Lock
# #add_problem(0753  Hard   cracking-the-safe) # Cracking the Safe
# #add_problem(0754  Easy   reach-a-number) # Reach a Number
# #add_problem(0755 Medium  pour-water) # Pour Water
# #add_problem(0756 Medium  pyramid-transition-matrix) # Pyramid Transition Matrix
# #add_problem(0757  Hard   set-intersection-size-at-least-two) # Set Intersection Size At Least Two
# #add_problem(0758  Easy   bold-words-in-string) # Bold Words in String
# #add_problem(0759  Hard   employee-free-time) # Employee Free Time
# #add_problem(0760  Easy   find-anagram-mappings) # Find Anagram Mappings
# #add_problem(0761  Hard   special-binary-string) # Special Binary String
# #add_problem(0762  Easy   prime-number-of-set-bits-in-binary-representation) # Prime Number of Set Bits in Binary Representation
# #add_problem(0763 Medium  partition-labels) # Partition Labels
# #add_problem(0764 Medium  largest-plus-sign) # Largest Plus Sign
# #add_problem(0765  Hard   couples-holding-hands) # Couples Holding Hands
# #add_problem(0766  Easy   toeplitz-matrix) # Toeplitz Matrix
# #add_problem(0767 Medium  reorganize-string) # Reorganize String
# #add_problem(0768  Hard   max-chunks-to-make-sorted-ii) # Max Chunks To Make Sorted II
# #add_problem(0769 Medium  max-chunks-to-make-sorted) # Max Chunks To Make Sorted
# #add_problem(0770  Hard   basic-calculator-iv) # Basic Calculator IV
# #add_problem(0771  Easy   jewels-and-stones) # Jewels and Stones
# #add_problem(0772  Hard   basic-calculator-iii) # Basic Calculator III
# #add_problem(0773  Hard   sliding-puzzle) # Sliding Puzzle
# #add_problem(0774  Hard   minimize-max-distance-to-gas-station) # Minimize Max Distance to Gas Station
# #add_problem(0775 Medium  global-and-local-inversions) # Global and Local Inversions
# #add_problem(0776 Medium  split-bst) # Split BST
# #add_problem(0777 Medium  swap-adjacent-in-lr-string) # Swap Adjacent in LR String
# #add_problem(0778  Hard   swim-in-rising-water) # Swim in Rising Water
# #add_problem(0779 Medium  k-th-symbol-in-grammar) # K-th Symbol in Grammar
# #add_problem(0780  Hard   reaching-points) # Reaching Points
# #add_problem(0781 Medium  rabbits-in-forest) # Rabbits in Forest
# #add_problem(0782  Hard   transform-to-chessboard) # Transform to Chessboard
# #add_problem(0783  Easy   minimum-distance-between-bst-nodes) # Minimum Distance Between BST Nodes
# #add_problem(0784  Easy   letter-case-permutation) # Letter Case Permutation
# #add_problem(0785 Medium  is-graph-bipartite) # Is Graph Bipartite?
# #add_problem(0786  Hard   k-th-smallest-prime-fraction) # K-th Smallest Prime Fraction
# #add_problem(0787 Medium  cheapest-flights-within-k-stops) # Cheapest Flights Within K Stops
# #add_problem(0788  Easy   rotated-digits) # Rotated Digits
# #add_problem(0789 Medium  escape-the-ghosts) # Escape The Ghosts
# #add_problem(0790 Medium  domino-and-tromino-tiling) # Domino and Tromino Tiling
# #add_problem(0791 Medium  custom-sort-string) # Custom Sort String
# #add_problem(0792 Medium  number-of-matching-subsequences) # Number of Matching Subsequences
# #add_problem(0793  Hard   preimage-size-of-factorial-zeroes-function) # Preimage Size of Factorial Zeroes Function
# #add_problem(0794 Medium  valid-tic-tac-toe-state) # Valid Tic-Tac-Toe State
# #add_problem(0795 Medium  number-of-subarrays-with-bounded-maximum) # Number of Subarrays with Bounded Maximum
# #add_problem(0796  Easy   rotate-string) # Rotate String
# #add_problem(0797 Medium  all-paths-from-source-to-target) # All Paths From Source to Target
# #add_problem(0798  Hard   smallest-rotation-with-highest-score) # Smallest Rotation with Highest Score
# #add_problem(0799 Medium  champagne-tower) # Champagne Tower
# #add_problem(0800  Easy   similar-rgb-color) # Similar RGB Color
# #add_problem(0801 Medium  minimum-swaps-to-make-sequences-increasing) # Minimum Swaps To Make Sequences Increasing
# #add_problem(0802 Medium  find-eventual-safe-states) # Find Eventual Safe States
# #add_problem(0803  Hard   bricks-falling-when-hit) # Bricks Falling When Hit
# #add_problem(0804  Easy   unique-morse-code-words) # Unique Morse Code Words
# #add_problem(0805  Hard   split-array-with-same-average) # Split Array With Same Average
# #add_problem(0806  Easy   number-of-lines-to-write-string) # Number of Lines To Write String
# #add_problem(0807 Medium  max-increase-to-keep-city-skyline) # Max Increase to Keep City Skyline
# #add_problem(0808 Medium  soup-servings) # Soup Servings
# #add_problem(0809 Medium  expressive-words) # Expressive Words
# #add_problem(0810  Hard   chalkboard-xor-game) # Chalkboard XOR Game
# #add_problem(0811  Easy   subdomain-visit-count) # Subdomain Visit Count
# #add_problem(0812  Easy   largest-triangle-area) # Largest Triangle Area
# #add_problem(0813 Medium  largest-sum-of-averages) # Largest Sum of Averages
# #add_problem(0814 Medium  binary-tree-pruning) # Binary Tree Pruning
# #add_problem(0815  Hard   bus-routes) # Bus Routes
# #add_problem(0816 Medium  ambiguous-coordinates) # Ambiguous Coordinates
# #add_problem(0817 Medium  linked-list-components) # Linked List Components
# #add_problem(0818  Hard   race-car) # Race Car
# #add_problem(0819  Easy   most-common-word) # Most Common Word
# #add_problem(0820 Medium  short-encoding-of-words) # Short Encoding of Words
# #add_problem(0821  Easy   shortest-distance-to-a-character) # Shortest Distance to a Character
# #add_problem(0822 Medium  card-flipping-game) # Card Flipping Game
# #add_problem(0823 Medium  binary-trees-with-factors) # Binary Trees With Factors
# #add_problem(0824  Easy   goat-latin) # Goat Latin
# #add_problem(0825 Medium  friends-of-appropriate-ages) # Friends Of Appropriate Ages
# #add_problem(0826 Medium  most-profit-assigning-work) # Most Profit Assigning Work
# #add_problem(0827  Hard   making-a-large-island) # Making A Large Island
# #add_problem(0828  Hard   unique-letter-string) # Unique Letter String
# #add_problem(0829  Hard   consecutive-numbers-sum) # Consecutive Numbers Sum
# #add_problem(0830  Easy   positions-of-large-groups) # Positions of Large Groups
# #add_problem(0831 Medium  masking-personal-information) # Masking Personal Information
# #add_problem(0832  Easy   flipping-an-image) # Flipping an Image
# #add_problem(0833 Medium  find-and-replace-in-string) # Find And Replace in String
# #add_problem(0834  Hard   sum-of-distances-in-tree) # Sum of Distances in Tree
# #add_problem(0835 Medium  image-overlap) # Image Overlap
# #add_problem(0836  Easy   rectangle-overlap) # Rectangle Overlap
# #add_problem(0837 Medium  new-21-game) # New 21 Game
# #add_problem(0838 Medium  push-dominoes) # Push Dominoes
# #add_problem(0839  Hard   similar-string-groups) # Similar String Groups
# #add_problem(0840  Easy   magic-squares-in-grid) # Magic Squares In Grid
# #add_problem(0841 Medium  keys-and-rooms) # Keys and Rooms
# #add_problem(0842 Medium  split-array-into-fibonacci-sequence) # Split Array into Fibonacci Sequence
# #add_problem(0843  Hard   guess-the-word) # Guess the Word
# #add_problem(0844  Easy   backspace-string-compare) # Backspace String Compare
# #add_problem(0845 Medium  longest-mountain-in-array) # Longest Mountain in Array
# #add_problem(0846 Medium  hand-of-straights) # Hand of Straights
# #add_problem(0847  Hard   shortest-path-visiting-all-nodes) # Shortest Path Visiting All Nodes
# #add_problem(0848 Medium  shifting-letters) # Shifting Letters
# #add_problem(0849  Easy   maximize-distance-to-closest-person) # Maximize Distance to Closest Person
# #add_problem(0850  Hard   rectangle-area-ii) # Rectangle Area II
# #add_problem(0851 Medium  loud-and-rich) # Loud and Rich
# #add_problem(0852  Easy   peak-index-in-a-mountain-array) # Peak Index in a Mountain Array
# #add_problem(0853 Medium  car-fleet) # Car Fleet
# #add_problem(0854  Hard   k-similar-strings) # K-Similar Strings
# #add_problem(0855 Medium  exam-room) # Exam Room
# #add_problem(0856 Medium  score-of-parentheses) # Score of Parentheses
# #add_problem(0857  Hard   minimum-cost-to-hire-k-workers) # Minimum Cost to Hire K Workers
# #add_problem(0858 Medium  mirror-reflection) # Mirror Reflection
# #add_problem(0859  Easy   buddy-strings) # Buddy Strings
# #add_problem(0860  Easy   lemonade-change) # Lemonade Change
# #add_problem(0861 Medium  score-after-flipping-matrix) # Score After Flipping Matrix
# #add_problem(0862  Hard   shortest-subarray-with-sum-at-least-k) # Shortest Subarray with Sum at Least K
# #add_problem(0863 Medium  all-nodes-distance-k-in-binary-tree) # All Nodes Distance K in Binary Tree
# #add_problem(0864  Hard   shortest-path-to-get-all-keys) # Shortest Path to Get All Keys
# #add_problem(0865 Medium  smallest-subtree-with-all-the-deepest-nodes) # Smallest Subtree with all the Deepest Nodes
# #add_problem(0866 Medium  prime-palindrome) # Prime Palindrome
# #add_problem(0867  Easy   transpose-matrix) # Transpose Matrix
# #add_problem(0868  Easy   binary-gap) # Binary Gap
# #add_problem(0869 Medium  reordered-power-of-2) # Reordered Power of 2
# #add_problem(0870 Medium  advantage-shuffle) # Advantage Shuffle
# #add_problem(0871  Hard   minimum-number-of-refueling-stops) # Minimum Number of Refueling Stops
# #add_problem(0872  Easy   leaf-similar-trees) # Leaf-Similar Trees
# #add_problem(0873 Medium  length-of-longest-fibonacci-subsequence) # Length of Longest Fibonacci Subsequence
# #add_problem(0874  Easy   walking-robot-simulation) # Walking Robot Simulation
# #add_problem(0875 Medium  koko-eating-bananas) # Koko Eating Bananas
# #add_problem(0876  Easy   middle-of-the-linked-list) # Middle of the Linked List
# #add_problem(0877 Medium  stone-game) # Stone Game
# #add_problem(0878  Hard   nth-magical-number) # Nth Magical Number
# #add_problem(0879  Hard   profitable-schemes) # Profitable Schemes
# #add_problem(0880 Medium  decoded-string-at-index) # Decoded String at Index
# #add_problem(0881 Medium  boats-to-save-people) # Boats to Save People
# #add_problem(0882  Hard   reachable-nodes-in-subdivided-graph) # Reachable Nodes In Subdivided Graph
# #add_problem(0883  Easy   projection-area-of-3d-shapes) # Projection Area of 3D Shapes
# #add_problem(0884  Easy   uncommon-words-from-two-sentences) # Uncommon Words from Two Sentences
# #add_problem(0885 Medium  spiral-matrix-iii) # Spiral Matrix III
# #add_problem(0886 Medium  possible-bipartition) # Possible Bipartition
# #add_problem(0887  Hard   super-egg-drop) # Super Egg Drop
# #add_problem(0888  Easy   fair-candy-swap) # Fair Candy Swap
# #add_problem(0889 Medium  construct-binary-tree-from-preorder-and-postorder-traversal) # Construct Binary Tree from Preorder and Postorder Traversal
# #add_problem(0890 Medium  find-and-replace-pattern) # Find and Replace Pattern
# #add_problem(0891  Hard   sum-of-subsequence-widths) # Sum of Subsequence Widths
# #add_problem(0892  Easy   surface-area-of-3d-shapes) # Surface Area of 3D Shapes
# #add_problem(0893  Easy   groups-of-special-equivalent-strings) # Groups of Special-Equivalent Strings
# #add_problem(0894 Medium  all-possible-full-binary-trees) # All Possible Full Binary Trees
# #add_problem(0895  Hard   maximum-frequency-stack) # Maximum Frequency Stack
# #add_problem(0896  Easy   monotonic-array) # Monotonic Array
# #add_problem(0897  Easy   increasing-order-search-tree) # Increasing Order Search Tree
# #add_problem(0898 Medium  bitwise-ors-of-subarrays) # Bitwise ORs of Subarrays
# #add_problem(0899  Hard   orderly-queue) # Orderly Queue
# #add_problem(0900 Medium  rle-iterator) # RLE Iterator
# #add_problem(0901 Medium  online-stock-span) # Online Stock Span
# #add_problem(0902  Hard   numbers-at-most-n-given-digit-set) # Numbers At Most N Given Digit Set
# #add_problem(0903  Hard   valid-permutations-for-di-sequence) # Valid Permutations for DI Sequence
# #add_problem(0904 Medium  fruit-into-baskets) # Fruit Into Baskets
# #add_problem(0905  Easy   sort-array-by-parity) # Sort Array By Parity
# #add_problem(0906  Hard   super-palindromes) # Super Palindromes
# #add_problem(0907 Medium  sum-of-subarray-minimums) # Sum of Subarray Minimums
# #add_problem(0908  Easy   smallest-range-i) # Smallest Range I
# #add_problem(0909 Medium  snakes-and-ladders) # Snakes and Ladders
# #add_problem(0910 Medium  smallest-range-ii) # Smallest Range II
# #add_problem(0911 Medium  online-election) # Online Election
# #add_problem(0913  Hard   cat-and-mouse) # Cat and Mouse
# #add_problem(0914  Easy   x-of-a-kind-in-a-deck-of-cards) # X of a Kind in a Deck of Cards
# #add_problem(0915 Medium  partition-array-into-disjoint-intervals) # Partition Array into Disjoint Intervals
# #add_problem(0916 Medium  word-subsets) # Word Subsets
# #add_problem(0917  Easy   reverse-only-letters) # Reverse Only Letters
# #add_problem(0918 Medium  maximum-sum-circular-subarray) # Maximum Sum Circular Subarray
# #add_problem(0919 Medium  complete-binary-tree-inserter) # Complete Binary Tree Inserter
# #add_problem(0920  Hard   number-of-music-playlists) # Number of Music Playlists
# #add_problem(0921 Medium  minimum-add-to-make-parentheses-valid) # Minimum Add to Make Parentheses Valid
# #add_problem(0922  Easy   sort-array-by-parity-ii) # Sort Array By Parity II
# #add_problem(0923 Medium  3sum-with-multiplicity) # 3Sum With Multiplicity
# #add_problem(0924  Hard   minimize-malware-spread) # Minimize Malware Spread
# #add_problem(0925  Easy   long-pressed-name) # Long Pressed Name
# #add_problem(0926 Medium  flip-string-to-monotone-increasing) # Flip String to Monotone Increasing
# #add_problem(0927  Hard   three-equal-parts) # Three Equal Parts
# #add_problem(0928  Hard   minimize-malware-spread-ii) # Minimize Malware Spread II
# #add_problem(0929  Easy   unique-email-addresses) # Unique Email Addresses
# #add_problem(0930 Medium  binary-subarrays-with-sum) # Binary Subarrays With Sum
# #add_problem(0931 Medium  minimum-falling-path-sum) # Minimum Falling Path Sum
# #add_problem(0932 Medium  beautiful-array) # Beautiful Array
# #add_problem(0933  Easy   number-of-recent-calls) # Number of Recent Calls
# #add_problem(0934 Medium  shortest-bridge) # Shortest Bridge
# #add_problem(0935 Medium  knight-dialer) # Knight Dialer
# #add_problem(0936  Hard   stamping-the-sequence) # Stamping The Sequence
# #add_problem(0937  Easy   reorder-log-files) # Reorder Log Files
# #add_problem(0938 Medium  range-sum-of-bst) # Range Sum of BST
# #add_problem(0939 Medium  minimum-area-rectangle) # Minimum Area Rectangle
# #add_problem(0940  Hard   distinct-subsequences-ii) # Distinct Subsequences II
# #add_problem(0941  Easy   valid-mountain-array) # Valid Mountain Array
# #add_problem(0942  Easy   di-string-match) # DI String Match
# #add_problem(0943  Hard   find-the-shortest-superstring) # Find the Shortest Superstring
# #add_problem(0944  Easy   delete-columns-to-make-sorted) # Delete Columns to Make Sorted
# #add_problem(0945 Medium  minimum-increment-to-make-array-unique) # Minimum Increment to Make Array Unique
# #add_problem(0946 Medium  validate-stack-sequences) # Validate Stack Sequences
# #add_problem(0947 Medium  most-stones-removed-with-same-row-or-column) # Most Stones Removed with Same Row or Column
# #add_problem(0948 Medium  bag-of-tokens) # Bag of Tokens
# #add_problem(0949  Easy   largest-time-for-given-digits) # Largest Time for Given Digits
# #add_problem(0950 Medium  reveal-cards-in-increasing-order) # Reveal Cards In Increasing Order
# #add_problem(0951 Medium  flip-equivalent-binary-trees) # Flip Equivalent Binary Trees
# #add_problem(0952  Hard   largest-component-size-by-common-factor) # Largest Component Size by Common Factor
# #add_problem(0953  Easy   verifying-an-alien-dictionary) # Verifying an Alien Dictionary
# #add_problem(0954 Medium  array-of-doubled-pairs) # Array of Doubled Pairs
# #add_problem(0955 Medium  delete-columns-to-make-sorted-ii) # Delete Columns to Make Sorted II
# #add_problem(0956  Hard   tallest-billboard) # Tallest Billboard
# #add_problem(0957 Medium  prison-cells-after-n-days) # Prison Cells After N Days
# #add_problem(0958 Medium  check-completeness-of-a-binary-tree) # Check Completeness of a Binary Tree
# #add_problem(0959 Medium  regions-cut-by-slashes) # Regions Cut By Slashes
# #add_problem(0960  Hard   delete-columns-to-make-sorted-iii) # Delete Columns to Make Sorted III
# #add_problem(0961  Easy   n-repeated-element-in-size-2n-array) # N-Repeated Element in Size 2N Array
# #add_problem(0962 Medium  maximum-width-ramp) # Maximum Width Ramp
# #add_problem(0963 Medium  minimum-area-rectangle-ii) # Minimum Area Rectangle II
# #add_problem(0964  Hard   least-operators-to-express-number) # Least Operators to Express Number
# #add_problem(0965  Easy   univalued-binary-tree) # Univalued Binary Tree
# #add_problem(0966 Medium  vowel-spellchecker) # Vowel Spellchecker
# #add_problem(0967 Medium  numbers-with-same-consecutive-differences) # Numbers With Same Consecutive Differences
# #add_problem(0968  Hard   binary-tree-cameras) # Binary Tree Cameras
# #add_problem(0969 Medium  pancake-sorting) # Pancake Sorting
# #add_problem(0970  Easy   powerful-integers) # Powerful Integers
# #add_problem(0971 Medium  flip-binary-tree-to-match-preorder-traversal) # Flip Binary Tree To Match Preorder Traversal
# #add_problem(0972  Hard   equal-rational-numbers) # Equal Rational Numbers
# #add_problem(0973  Easy   k-closest-points-to-origin) # K Closest Points to Origin
# #add_problem(0974 Medium  subarray-sums-divisible-by-k) # Subarray Sums Divisible by K
# #add_problem(0975  Hard   odd-even-jump) # Odd Even Jump
# #add_problem(0976  Easy   largest-perimeter-triangle) # Largest Perimeter Triangle