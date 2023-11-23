echo "Enter 3 numbers:"
read a
read b
read c

if [ $a -gt $b ] && [ $a -gt $c ]
then
    echo "$a is the greatest number"
elif [ $b -gt $a ] && [ $b -gt $c ]
then
    echo "$b is the greatest number"
else
    echo "$c is the greatest number"
fi
