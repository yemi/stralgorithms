module Main where

import Control.Monad
import Data.Time.Clock
import System.CPUTime
import System.Random
import Data.List (insert)

-- ASSIGNMENT 3

listLength = 20000
randomRange = 50000

-------------------------------------------------------------------

-- a)

insertionSort :: [Int] -> [Int]
insertionSort = foldr insert []

-- b)

reverse' :: [Int] -> [Int]
reverse' = foldl (flip (:)) []

-------------------------------------------------------------------

-- Helpers

getTimeDelta :: UTCTime -> UTCTime -> Float
getTimeDelta t1 t2 = fromRational . ((*) 1000) . toRational $ utctDayTime t2 - utctDayTime t1

isAscending :: [Int] -> Bool
isAscending [] = False
isAscending [x] = True
isAscending [x, y] = x <= y
isAscending (x:y:ys) = x <= y && isAscending (y:ys)

isDescending:: [Int] -> Bool
isDescending [] = False
isDescending [x] = True
isDescending [x, y] = x >= y
isDescending (x:y:ys) = x >= y && isDescending (y:ys)

main = do
  unsorted <- replicateM listLength $ randomRIO (0, randomRange)

  putStrLn $ "List of " ++ show listLength ++ 
             " random numbers between 0 and " ++ show randomRange ++ ":"

  before <- getCurrentTime
  sorted <- return $! insertionSort unsorted
  after <- getCurrentTime

  let timeDelta = getTimeDelta before after

  putStrLn $ "insertionSort: " ++ show timeDelta ++ "ms"
  putStrLn $ "List is sorted: " ++ show (isAscending sorted)

  before' <- getCurrentTime
  reversed <- return $! reverse' sorted
  after' <- getCurrentTime

  let timeDelta' = getTimeDelta before' after'

  putStrLn $ "reverse: " ++ show timeDelta' ++ "ms"
  putStrLn $ "List is reversed: " ++ show (isDescending reversed)

