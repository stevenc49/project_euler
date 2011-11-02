#!/usr/bin/perl

use constant MAX => 4000000;

$x=1;
$y=2;
$sum = $y ;

while(1)
{
	$x=$x+$y;
	if($x%2 eq 0) {	$sum+=$x } 
	if($x>MAX) { last; }

	$y=$x+$y;
	if($y%2 eq 0) {	$sum+=$y } 
	if($y>MAX) { last; }
}

print "sum:  ", $sum, "\n";
 
