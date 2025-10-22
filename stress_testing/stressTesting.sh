for ((testNum=0; ; testNum++)) 
do 
    ./$3 > input 
    ./$2 < input > outSlow 
    ./$1 < input > outWrong 

    if ! cmp -s "outWrong" "outSlow" 
    then 
        echo "❌ Error found on test #$testNum"
        echo "Input:"
        cat input 
        echo "Wrong Output:"
        cat outWrong 
        echo ""
        echo "Correct Output:"
        cat outSlow 
        echo ""
        exit 1
    else
        echo "Test: #$testNum"
    fi 
done 



#Compile the files first:
      #g++ -o optimized optimized.cpp
      #g++ -o bruteForce bruteForce.cpp
      #g++ -o testGenerator testGenerator.cpp

#Run the stress test: ./stressTesting.sh optimized bruteForce testGenerator numTests

#here numTests can be declared using command : 100

