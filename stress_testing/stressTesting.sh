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



for ((testNum=0;testNum<10000; testNum++)) 
do 
    ./$3 > input 
    ./$2 < input > outSlow 
    ./$1 < input > outWrong 

    if ! cmp -s "outWrong" "outSlow" 
    then 
        echo "❌ Error found on test #$testNum"
        echo "Input:"
        cat input 
        echo ""

         # Show differing line number(s)
        echo "Line mismatch details:"
        diff -y --suppress-common-lines outWrong outSlow | nl | head -n 5
        echo ""

        # Get the first differing line number only
        lineDiff=$(diff -u outSlow outWrong | grep -m 1 '^@@' | grep -oP '(?<=\+)[0-9]+')
        if [ -n "$lineDiff" ]; then
            echo "First mismatch at line: $lineDiff"
        fi
        echo ""


        echo "Wrong Output:"
        cat outWrong 
        echo ""
        echo "Correct Output:"
        cat outSlow 
        echo ""
        exit 1
    else
        echo "Tc: #$testNum"
    fi 
done 

