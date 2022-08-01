
#!/bin/bash
for file in "$1"/*
do
    #echo "Trying to verify $file"
    output="$(z3 $file | head -n 1)"
    #output="$(cvc4 -q --lang smt2 --force-logic=ALL --incremental $file | head -n 1)"
    if [[ $output == "unsat" ]]; then
        echo "$file verified."
    elif [[ $output == "sat" ]]; then
        echo "$file failed to verified.........."
        echo "$file failed to verify" >> verify_log
    else
        echo "$file could not be solved********"
        echo "$file failed to verify" >> verify_log
    fi
done
