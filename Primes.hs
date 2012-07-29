module Primes (primes) where

primes :: [Integer]
primes = [2] ++ filter check [3,5..] where
  check n = all (\p -> n `rem` p /= 0) possibleFactors
    where
      possibleFactors = takeWhile (<= middle) primes
      middle = truncate . sqrt . fromIntegral $ n
