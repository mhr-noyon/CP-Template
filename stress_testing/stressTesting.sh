for ((testNum=0; testNum < $4; testNum++)) 
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
        echo "Correct Output:"
        cat outSlow 
        exit 1
    fi 
done 
echo "✅ Passed $4 tests"
