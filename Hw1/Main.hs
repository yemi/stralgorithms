module Main where

-- ASSIGNMENT 1

factorial :: Int -> Int
factorial 0 = 1
factorial x = x * factorial(x - 1)

sum' :: [Int] -> Int
sum' [] = 0
sum' (x:xs) = x + (sum' xs)

max' :: [Int] -> Int
max' [] = 0
max' (x:xs) = if x > (max' xs) then x else max' xs

main :: IO ()
main = do
  putStrLn . show $ factorial 5
  putStrLn . show $ sum [1, 2, 3]
  putStrLn . show $ max' [4, 12, 34, 21]
