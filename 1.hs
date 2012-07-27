main = print $ sum [n | n <- [1..999], n `rem` 3 == 0 || n `rem` 5 == 0 ]
