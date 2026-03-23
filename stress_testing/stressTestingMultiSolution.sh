for ((testNum=0; ; testNum++)) 
do 
      ./$3 > input 
      ./$1 < input > outWrong 
      ./$2 < outWrong > outSlow 

      result=$(tr -d '\r' < outSlow | xargs)

      if [ "$result" != "Correct" ]
      then 
            echo "❌ Error found on test #$testNum"
            echo "Input:"
            cat input 
            echo ""

            echo "Wrong Output:"
            cat outWrong 
            echo ""
            exit 1
      else
            echo "Tc: #$testNum"
      fi 
done 
