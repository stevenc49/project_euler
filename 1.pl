#!/usr/bin/perl

$sum = 0;
$i = 3;

while($i<1000)
{
    if(($i % 3 == 0) || ($i % 5 == 0))
    {
        $sum += $i;
    }   

    $i++;
}

print $sum;
print "\n";
