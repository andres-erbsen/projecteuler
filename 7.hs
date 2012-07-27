primes :: [Integer]
primes = [2] ++ filter check [3,5..] where
  check n = all (/=0) [ n `rem` p | p <- possibleFactors]
    where
      possibleFactors = takeWhile (<= middle) primes
      middle = truncate . sqrt . fromIntegral $ n

main = print $ primes !! 10000

