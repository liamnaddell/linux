use strict;
use warnings;

sub tel2u {
	my $message = shift;
	print $message;
}
sub prompt {
	print shift;
	my $response = <>;
	return $response;
}

my $age = prompt("Welcome to my story game, what is your age?\n");

my $func = tel2u;
func("Ur mum");
tel2u($age);
