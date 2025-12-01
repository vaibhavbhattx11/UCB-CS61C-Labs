echo "Part One"
echo "n = 100, blocksize = 20"
./transpose 100 20
echo "n = 1000, blocksize = 20"
./transpose 1000 20
echo "n = 2000, blocksize = 20"
./transpose 2000 20
echo "n = 5000, blocksize = 20"
./transpose 5000 20
echo "n = 10000, blocksize = 20"
./transpose 10000 20

echo "Part Two"
echo "n = 10000, blocksize = 50"
./transpose 10000 50
echo "n = 10000, blocksize = 100"
./transpose 10000 100
echo "n = 10000, blocksize = 500"
./transpose 10000 500
echo "n = 10000, blocksize = 1000"
./transpose 10000 1000
echo "n = 10000, blocksize = 5000"
./transpose 10000 5000