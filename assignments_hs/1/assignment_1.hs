quicksort1 :: (Ord a) => [a] -> [a]
quicksort1 [] = []
quicksort1 [x] = [x]
quicksort1 (x:xs) =
  let smallerSorted = quicksort1 [a | a <- xs, a <= x]
      biggerSorted = quicksort1 [a | a <- xs, a > x]
  in  smallerSorted ++ [x] ++ biggerSorted

merge :: Ord a => [a] -> [a] -> [a]
merge xs [] = xs
merge [] ys = ys
merge (x:xs) (y:ys) | x <= y    = x:merge xs (y:ys)
                    | otherwise = y:merge (x:xs) ys

msort :: Ord a => [a] -> [a] -- merge sort a list in Haskell
msort [] = []
msort [a] = [a]
msort xs = merge (msort (firstHalf xs)) (msort (secondHalf xs))
firstHalf  xs = let { n = length xs } in take (div n 2) xs
secondHalf xs = let { n = length xs } in drop (div n 2) xs

main = do
  print ("quicksort: ", quicksort1 [5,6,8,1,0,12,-3])
  print ("quicksort: ", quicksort1 [5,0,0,0,13156,0,0,-3])
  print ("mergesort: ", msort [-25,60,-8,5,0,12,-3,0])
  print ("mergesort: ", msort [5,6,8,1,0,12,-3])