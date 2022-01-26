echo "1]Test with file \"a\": replace \"it\" on \"BoB\""
echo "../ft_sed a it BoB"
../ft_sed a it BoB
echo
echo "2]Test with file \"SwEeT\": replace \"it\" on \"sweetdreams\""
echo "../ft_sed SwEeT it \"sweetdreams\""
../ft_sed SwEeT it "sweetdreams"
echo
echo "3]Test with file \"no_more.test\": replace \"re\" on \"?\""
echo "../ft_sed no_more.test re ?"
../ft_sed no_more.test re ?
echo
echo "4]Test with file \"no_more2.test\": replace \" are \" on \".\""
echo "../ft_sed no_more.test \" are \" ."
../ft_sed no_more.test " are " .
echo
echo "5]Test with empty name file."
echo "../ft_sed "" 1 2"
../ft_sed "" 1 2
echo
echo "6]Test with unavaible file."
echo "../ft_sed ../a 1 2"
../ft_sed ../a 1 2
echo
echo "7]Test with empty strings"
echo "../ft_sed a "" 2"
../ft_sed a "" 2
echo "../ft_sed a 1 """
../ft_sed a 1 ""
echo "../ft_sed a "" """
../ft_sed a "" ""
echo
echo "8]Test with wrong count args"
echo "../ft_sed a"
../ft_sed a
echo "../ft_sed a 1"
../ft_sed a 1
echo "../ft_sed a 1 2 3"
../ft_sed a 1 2 3