main = print . sumSqrDiff $ [1..100]
  where sumSqrDiff xs = (sum xs)^2 - sum (map (^2) xs)
