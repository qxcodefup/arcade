import Text.Printf

calc :: Fractional a => a -> a -> a
calc value times = value * juros + value
    where
        juros = (times - 1) * 0.05


main = do
    value <- readLn :: IO Float
    times <- readLn :: IO Float
    let total = calc value times
    printf "%.2f\n" (total / times :: Float)
    printf "%.2f\n" (total :: Float)