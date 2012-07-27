palindrome n = let s = show n in s == reverse s
main = print . maximum . filter palindrome $ [a*b | a<-nums, b<-nums]
  where nums = [100..999]
