import Data.List (tails)
import Data.Char (digitToInt)

main = interact $ (++"\n") . show . maximum . map (product . map digitToInt . take 5) . tails . concat . lines
