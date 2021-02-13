g++ src.cpp -pthread
for (( k = 1;k <= 1000; k++))
do
        ./a.out 
        sleep 1
done
